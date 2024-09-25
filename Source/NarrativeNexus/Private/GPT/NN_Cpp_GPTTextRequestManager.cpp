// NN_Cpp_GPTTextRequestManager.cpp

#include "GPT/NN_Cpp_GPTTextRequestManager.h"

void UNN_Cpp_GPTTextRequestManager::SetTextResponseManager(UNN_Cpp_GPTTextResponseManager* InTextResponseManager)
{
    TextResponseManagerInstance = InTextResponseManager;
}

// ######################### Send Text Request #########################

void UNN_Cpp_GPTTextRequestManager::SendTextRequest(
	const FString& ApiKey,
	const FGPTRequestParams& Params,
	UNN_Cpp_JSONHandler* JSONHandlerInstance,
	UNN_Cpp_HTTPRequestHandler* HTTPRequestHandlerInstance,
    UNN_Cpp_GPTConversationManager* ConversationManager,
	TFunction<void(const FString&)> OnTextResponseReceived
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

    // ######################### DEBUG #########################
    //UE_LOG(LogTemp, Error, TEXT("JsonObject: %s\n"), *JsonString)

    if (!ApiKey.IsEmpty())
    {
        TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = HTTPRequestHandlerInstance->CreateRequest(
            TEXT("https://api.openai.com/v1/chat/completions"),
            TEXT("POST"),
            TEXT("application/json"),
            ApiKey
        );

        HTTPRequestHandlerInstance->SetRequestPayload(Request, JsonString);
        Request->OnProcessRequestComplete().BindLambda([this, JSONHandlerInstance, ConversationManager, OnTextResponseReceived](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
        {
            if (bWasSuccessful && Response.IsValid())
            {
                FString ResponseString = Response->GetContentAsString();

                // Übergeben der Verarbeitung an den ResponseManager, um sicherzustellen, dass OnResponseReceived nur einmal aufgerufen wird
                if (TextResponseManagerInstance)
                {
                    TextResponseManagerInstance->ProcessResponse(ResponseString, JSONHandlerInstance, ConversationManager, OnTextResponseReceived);
                }
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("Failed to contact OpenAI."));
                OnTextResponseReceived(TEXT("Failed to contact OpenAI."));
            }
        });
        Request->ProcessRequest();
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("API key is empty in SendRequest"));
    }
}

// ######################### Send Summary Request #########################

void UNN_Cpp_GPTTextRequestManager::SendSummaryRequest(
    const FString& ApiKey,
    const FGPTRequestHistoryParams& Params,
    UNN_Cpp_JSONHandler* JSONHandlerInstance,
    UNN_Cpp_HTTPRequestHandler* HTTPRequestHandlerInstance,
    UNN_Cpp_GPTConversationManager* ConversationManager,
    TFunction<void(const FString&)> OnSummaryResponseReceived
)
{
    if (!JSONHandlerInstance || !HTTPRequestHandlerInstance)
    {
        UE_LOG(LogTemp, Error, TEXT("JSONHandlerInstance oder HTTPRequestHandlerInstance ist nullptr in SendSummaryRequest"));
        return;
    }

    const TArray<TSharedPtr<FJsonObject>>& ConversationHistory = ConversationManager->GetConversationHistory();
    TArray<TSharedPtr<FJsonValue>> JsonArray;
    for (const TSharedPtr<FJsonObject>& JsonObject : ConversationHistory)
    {
        JsonArray.Add(MakeShareable(new FJsonValueObject(JsonObject)));
    }

    TSharedPtr<FJsonObject> InstructionMessageObject = MakeShareable(new FJsonObject());
    InstructionMessageObject->SetStringField(TEXT("role"), TEXT("system"));
    InstructionMessageObject->SetStringField(TEXT("content"), Params.Instruction);
    JsonArray.Add(MakeShareable(new FJsonValueObject(InstructionMessageObject)));

    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
    JsonObject->SetStringField(TEXT("model"), TEXT("gpt-4o-mini"));
    JsonObject->SetArrayField(TEXT("messages"), JsonArray);
    JsonObject->SetNumberField(TEXT("max_tokens"), Params.MaxTokens);

    FString JsonString = JSONHandlerInstance->SerializeJSON(JsonObject);

    // ######################### DEBUG #########################
    //UE_LOG(LogTemp, Error, TEXT("JsonObject: %s\n"), *JsonString)

    if (!ApiKey.IsEmpty())
    {
        TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = HTTPRequestHandlerInstance->CreateRequest(
            TEXT("https://api.openai.com/v1/chat/completions"),
            TEXT("POST"),
            TEXT("application/json"),
            ApiKey
        );

        HTTPRequestHandlerInstance->SetRequestPayload(Request, JsonString);
        Request->OnProcessRequestComplete().BindLambda([this, JSONHandlerInstance, ConversationManager, OnSummaryResponseReceived](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
            {
                if (bWasSuccessful && Response.IsValid())
                {
                    FString ResponseString = Response->GetContentAsString();

                    if (TextResponseManagerInstance)
                    {
                        TextResponseManagerInstance->SummaryResponse(ResponseString, JSONHandlerInstance, ConversationManager, OnSummaryResponseReceived);
                    }
                }
                else
                {
                    UE_LOG(LogTemp, Error, TEXT("Fehler beim Kontaktieren von OpenAI."));
                    OnSummaryResponseReceived(TEXT("Fehler beim Kontaktieren von OpenAI."));
                }
            });
        Request->ProcessRequest();
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("API-Schlüssel ist leer in SendSummaryRequest"));
    }
}

// ######################### Send Image Description Request #########################

void UNN_Cpp_GPTTextRequestManager::SendImageDescriptionRequest(
    const FString& ApiKey,
    const FGPTRequestImageDescriptionParams& Params,
    UNN_Cpp_JSONHandler* JSONHandlerInstance,
    UNN_Cpp_HTTPRequestHandler* HTTPRequestHandlerInstance,
    UNN_Cpp_GPTConversationManager* ConversationManager,
    TFunction<void(const FString&)> OnImageDescriptionResponseReceived)
{
    if (!JSONHandlerInstance || !HTTPRequestHandlerInstance)
    {
        UE_LOG(LogTemp, Error, TEXT("JSONHandlerInstance oder HTTPRequestHandlerInstance ist nullptr in SendSummaryRequest"));
        return;
    }

    const TArray<TSharedPtr<FJsonObject>>& ConversationHistory = ConversationManager->GetConversationHistory();
    TArray<TSharedPtr<FJsonValue>> JsonArray;
    for (const TSharedPtr<FJsonObject>& JsonObject : ConversationHistory)
    {
        JsonArray.Add(MakeShareable(new FJsonValueObject(JsonObject)));
    }

    TSharedPtr<FJsonObject> InstructionMessageObject = MakeShareable(new FJsonObject());
    InstructionMessageObject->SetStringField(TEXT("role"), TEXT("system"));
    InstructionMessageObject->SetStringField(TEXT("content"), Params.Instruction);
    JsonArray.Add(MakeShareable(new FJsonValueObject(InstructionMessageObject)));

    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
    JsonObject->SetStringField(TEXT("model"), TEXT("gpt-4o-mini"));
    JsonObject->SetArrayField(TEXT("messages"), JsonArray);
    JsonObject->SetNumberField(TEXT("max_tokens"), Params.MaxTokens);

    FString JsonString = JSONHandlerInstance->SerializeJSON(JsonObject);

    // ######################### DEBUG #########################
    //UE_LOG(LogTemp, Error, TEXT("JsonObject: %s\n"), *JsonString)

    if (!ApiKey.IsEmpty())
    {
        TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = HTTPRequestHandlerInstance->CreateRequest(
            TEXT("https://api.openai.com/v1/chat/completions"),
            TEXT("POST"),
            TEXT("application/json"),
            ApiKey
        );

        HTTPRequestHandlerInstance->SetRequestPayload(Request, JsonString);
        Request->OnProcessRequestComplete().BindLambda([this, JSONHandlerInstance, ConversationManager, OnImageDescriptionResponseReceived](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
            {
                if (bWasSuccessful && Response.IsValid())
                {
                    FString ResponseString = Response->GetContentAsString();

                    if (TextResponseManagerInstance)
                    {
                        TextResponseManagerInstance->ImageDescriptionResponse(ResponseString, JSONHandlerInstance, ConversationManager, OnImageDescriptionResponseReceived);
                    }
                }
                else
                {
                    UE_LOG(LogTemp, Error, TEXT("Fehler beim Kontaktieren von OpenAI."));
                    OnImageDescriptionResponseReceived(TEXT("Fehler beim Kontaktieren von OpenAI."));
                }
            });
        Request->ProcessRequest();
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("API-Schlüssel ist leer in SendSummaryRequest"));
    }
}

// ######################### Send Info Request #########################
void UNN_Cpp_GPTTextRequestManager::SendInfoAboutConversationRequest(
    const FString& ApiKey,
    const FGPTRequestInfoAboutConversationParams& Params,
    UNN_Cpp_JSONHandler* JSONHandlerInstance,
    UNN_Cpp_HTTPRequestHandler* HTTPRequestHandlerInstance,
    UNN_Cpp_GPTConversationManager* ConversationManager,
    TFunction<void(const FString&)> OnInfoAboutConversationResponseReceived)
{
    if (!JSONHandlerInstance || !HTTPRequestHandlerInstance)
    {
        UE_LOG(LogTemp, Error, TEXT("JSONHandlerInstance oder HTTPRequestHandlerInstance ist nullptr in SendSummaryRequest"));
        return;
    }

    const TArray<TSharedPtr<FJsonObject>>& ConversationHistory = ConversationManager->GetConversationHistory();
    TArray<TSharedPtr<FJsonValue>> JsonArray;
    for (const TSharedPtr<FJsonObject>& JsonObject : ConversationHistory)
    {
        JsonArray.Add(MakeShareable(new FJsonValueObject(JsonObject)));
    }

    TSharedPtr<FJsonObject> InstructionMessageObject = MakeShareable(new FJsonObject());
    InstructionMessageObject->SetStringField(TEXT("role"), TEXT("system"));
    InstructionMessageObject->SetStringField(TEXT("content"), Params.Instruction);
    JsonArray.Add(MakeShareable(new FJsonValueObject(InstructionMessageObject)));

    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
    JsonObject->SetStringField(TEXT("model"), TEXT("gpt-4o-mini"));
    JsonObject->SetArrayField(TEXT("messages"), JsonArray);
    JsonObject->SetNumberField(TEXT("max_tokens"), Params.MaxTokens);

    FString JsonString = JSONHandlerInstance->SerializeJSON(JsonObject);

    // ######################### DEBUG #########################
    //UE_LOG(LogTemp, Error, TEXT("JsonObject: %s\n"), *JsonString)

    if (!ApiKey.IsEmpty())
    {
        TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = HTTPRequestHandlerInstance->CreateRequest(
            TEXT("https://api.openai.com/v1/chat/completions"),
            TEXT("POST"),
            TEXT("application/json"),
            ApiKey
        );

        HTTPRequestHandlerInstance->SetRequestPayload(Request, JsonString);
        Request->OnProcessRequestComplete().BindLambda([this, JSONHandlerInstance, ConversationManager, OnInfoAboutConversationResponseReceived](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
            {
                if (bWasSuccessful && Response.IsValid())
                {
                    FString ResponseString = Response->GetContentAsString();

                    if (TextResponseManagerInstance)
                    {
                        TextResponseManagerInstance->InfoAboutConversationResponse(ResponseString, JSONHandlerInstance, ConversationManager, OnInfoAboutConversationResponseReceived);
                    }
                }
                else
                {
                    UE_LOG(LogTemp, Error, TEXT("Fehler beim Kontaktieren von OpenAI."));
                    OnInfoAboutConversationResponseReceived(TEXT("Fehler beim Kontaktieren von OpenAI."));
                }
            });
        Request->ProcessRequest();
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("API-Schlüssel ist leer in SendSummaryRequest"));
    }
}

// ######################### Suggestions From Conversation Request #########################
void UNN_Cpp_GPTTextRequestManager::SendSuggestionsFromConversationRequest(
    const FString& ApiKey,
    const FGPTRequestSuggestionsFromConversationParams& Params,
    UNN_Cpp_JSONHandler* JSONHandlerInstance,
    UNN_Cpp_HTTPRequestHandler* HTTPRequestHandlerInstance,
    UNN_Cpp_GPTConversationManager* ConversationManager,
    TFunction<void(const FString&)> OnSuggestionsFromConversationResponseReceived)
{
    if (!JSONHandlerInstance || !HTTPRequestHandlerInstance)
    {
        UE_LOG(LogTemp, Error, TEXT("JSONHandlerInstance oder HTTPRequestHandlerInstance ist nullptr in SendSummaryRequest"));
        return;
    }
    
    TArray<TSharedPtr<FJsonValue>> JsonArray;

    TSharedPtr<FJsonObject> InstructionMessageObject = MakeShareable(new FJsonObject());
    InstructionMessageObject->SetStringField(TEXT("role"), TEXT("system"));
    InstructionMessageObject->SetStringField(TEXT("content"), Params.Instruction);
    JsonArray.Add(MakeShareable(new FJsonValueObject(InstructionMessageObject)));

    const TArray<TSharedPtr<FJsonObject>>& ConversationHistory = ConversationManager->GetConversationHistory();
    for (const TSharedPtr<FJsonObject>& JsonObject : ConversationHistory)
    {
        JsonArray.Add(MakeShareable(new FJsonValueObject(JsonObject)));
    }

    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
    JsonObject->SetStringField(TEXT("model"), TEXT("gpt-4o-mini"));
    JsonObject->SetArrayField(TEXT("messages"), JsonArray);
    JsonObject->SetNumberField(TEXT("max_tokens"), Params.MaxTokens);

    FString JsonString = JSONHandlerInstance->SerializeJSON(JsonObject);

    // ######################### DEBUG #########################
    UE_LOG(LogTemp, Error, TEXT("JsonObject: %s\n"), *JsonString)

    if (!ApiKey.IsEmpty())
    {
        TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = HTTPRequestHandlerInstance->CreateRequest(
            TEXT("https://api.openai.com/v1/chat/completions"),
            TEXT("POST"),
            TEXT("application/json"),
            ApiKey
        );

        HTTPRequestHandlerInstance->SetRequestPayload(Request, JsonString);
        Request->OnProcessRequestComplete().BindLambda([this, JSONHandlerInstance, ConversationManager, OnSuggestionsFromConversationResponseReceived](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
            {
                if (bWasSuccessful && Response.IsValid())
                {
                    FString ResponseString = Response->GetContentAsString();

                    if (TextResponseManagerInstance)
                    {
                        TextResponseManagerInstance->SuggestionsFromConversationResponse(ResponseString, JSONHandlerInstance, ConversationManager, OnSuggestionsFromConversationResponseReceived);
                    }
                }
                else
                {
                    UE_LOG(LogTemp, Error, TEXT("Fehler beim Kontaktieren von OpenAI."));
                    OnSuggestionsFromConversationResponseReceived(TEXT("Fehler beim Kontaktieren von OpenAI."));
                }
            });
        Request->ProcessRequest();
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("API-Schlüssel ist leer in SendSummaryRequest"));
    }
}
