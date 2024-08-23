// NN_Cpp_GPTRequestManager.cpp

#include "GPT/NN_Cpp_GPTRequestManager.h"

void UNN_Cpp_GPTRequestManager::SetResponseManager(UNN_Cpp_GPTResponseManager* InResponseManager)
{
    ResponseManagerInstance = InResponseManager;
}

void UNN_Cpp_GPTRequestManager::SendRequest(
	const FString& ApiKey,
	const FGPTRequestParams& Params,
	UNN_Cpp_JSONHandler* JSONHandlerInstance,
	UNN_Cpp_HTTPRequestHandler* HTTPRequestHandlerInstance,
    UNN_Cpp_GPTConversationManager* ConversationManager,
	TFunction<void(const FString&)> OnResponseReceived
)
{
    if (!JSONHandlerInstance || !HTTPRequestHandlerInstance)
    {
        UE_LOG(LogTemp, Error, TEXT("JSONHandlerInstance or HTTPRequestHandlerInstance is nullptr in SendRequest"));
        return;
    }

    if (Params.Summary.IsEmpty())
    {
        UE_LOG(LogTemp, Error, TEXT("Summary is empty in SendRequest"));
        return;
    }

    ConversationManager->AddMessageToHistory(TEXT("user"), Params.Summary);

    const TArray<TSharedPtr<FJsonObject>>& ConversationHistory = ConversationManager->GetConversationHistory();

    // Convert ConversationHistory to an array of FJsonValue
    TArray<TSharedPtr<FJsonValue>> JsonArray;
    for (const TSharedPtr<FJsonObject>& JsonObject : ConversationHistory)
    {
        JsonArray.Add(MakeShareable(new FJsonValueObject(JsonObject)));
    }

    // Add instruction to limit the response to X characters
    TSharedPtr<FJsonObject> InstructionMessageObject = MakeShareable(new FJsonObject());
    InstructionMessageObject->SetStringField(TEXT("role"), TEXT("system"));
    InstructionMessageObject->SetStringField(TEXT("content"), Params.Instruction);
    JsonArray.Add(MakeShareable(new FJsonValueObject(InstructionMessageObject)));

    // Create the JSON payload
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
    JsonObject->SetStringField(TEXT("model"), TEXT("gpt-4o-mini"));
    JsonObject->SetArrayField(TEXT("messages"), JsonArray);
    JsonObject->SetNumberField(TEXT("max_tokens"), Params.MaxTokens);

    FString JsonString = JSONHandlerInstance->SerializeJSON(JsonObject);

    if (!ApiKey.IsEmpty())
    {
        TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = HTTPRequestHandlerInstance->CreateRequest(
            TEXT("https://api.openai.com/v1/chat/completions"),
            TEXT("POST"),
            TEXT("application/json"),
            ApiKey
        );

        HTTPRequestHandlerInstance->SetRequestPayload(Request, JsonString);
        Request->OnProcessRequestComplete().BindLambda([this, JSONHandlerInstance, ConversationManager, OnResponseReceived](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
        {
            if (bWasSuccessful && Response.IsValid())
            {
                FString ResponseString = Response->GetContentAsString();

                // �bergeben der Verarbeitung an den ResponseManager, um sicherzustellen, dass OnResponseReceived nur einmal aufgerufen wird
                if (ResponseManagerInstance)
                {
                    ResponseManagerInstance->ProcessResponse(ResponseString, JSONHandlerInstance, ConversationManager, OnResponseReceived);
                }
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("Failed to contact OpenAI."));
                OnResponseReceived(TEXT("Failed to contact OpenAI."));
            }
        });
        Request->ProcessRequest();
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("API key is empty in SendRequest"));
    }
}