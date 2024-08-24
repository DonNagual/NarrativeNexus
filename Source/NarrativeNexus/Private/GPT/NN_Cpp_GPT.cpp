// NN_Cpp_GPT.cpp

#include "GPT/NN_Cpp_GPT.h"

void UNN_Cpp_GPT::SetAPIKey(const FString& InApiKey)
{
	ApiKey = InApiKey;
}

void UNN_Cpp_GPT::SetJSONHandler(UNN_Cpp_JSONHandler* InJSONHandler)
{
	JSONHandlerInstance = InJSONHandler;
}

void UNN_Cpp_GPT::SetHTTPRequestHandler(UNN_Cpp_HTTPRequestHandler* InHTTPRequestHandler)
{
	HTTPRequestHandlerInstance = InHTTPRequestHandler;
}

void UNN_Cpp_GPT::SetTextRequestManager(UNN_Cpp_GPTTextRequestManager* InTextRequestManager)
{
	TextRequestManagerInstance = InTextRequestManager;
}

void UNN_Cpp_GPT::SetTextResponseManager(UNN_Cpp_GPTTextResponseManager* InTextResponseManager)
{
	TextResponseManagerInstance = InTextResponseManager;
}

void UNN_Cpp_GPT::SetImageRequestManager(UNN_Cpp_GPTImageRequestManager* InImageRequestManager)
{
	ImageRequestManagerInstance = InImageRequestManager;
}

void UNN_Cpp_GPT::SetImageResponseManager(UNN_Cpp_GPTImageResponseManager* InImageResponseManager)
{
	ImageResponseManagerInstance = InImageResponseManager;
}

void UNN_Cpp_GPT::SetConversationManager(UNN_Cpp_GPTConversationManager* InConversationManager)
{
	ConversationManagerInstance = InConversationManager;
}

// ######################### Send Message To ChatGPT #########################

void UNN_Cpp_GPT::SendMessageToGPT(const FString& Message)
{
	FGPTRequestParams Params(Message, TEXT("Bitte begrenzen Sie die Antwort auf maximal 1000 Zeichen."), 250);
	//Params.ConversationHistory = ConversationHistory;
	
	TextRequestManagerInstance->SendTextRequest(ApiKey, Params, JSONHandlerInstance, HTTPRequestHandlerInstance, ConversationManagerInstance,
		[this](const FString& Response)
		{
			LastResponse = Response;
			OnGPTResponseReceived.Broadcast(Response);
		});
}

// ######################### Generate Short Summary From Conversation #########################

void UNN_Cpp_GPT::GenerateShortSummaryFromConversation(const FString& Summary, TFunction<void(const FString&)> OnShortSummaryGenerated)
{
	FGPTRequestParams Params(Summary, TEXT("Bitte fassen Sie das obige Gespräch in weniger als 500 Zeichen zusammen."), 150);
	TextRequestManagerInstance->SendTextRequest(ApiKey, Params, JSONHandlerInstance, HTTPRequestHandlerInstance, ConversationManagerInstance, OnShortSummaryGenerated);
}

// ######################### Generate Max Summary From Conversation #########################

void UNN_Cpp_GPT::GenerateMaxSummaryFromConversation(const FString& Summary, TFunction<void(const FString&)> OnMaxSummaryGenerated)
{
	FGPTRequestParams Params(Summary, TEXT("Bitte fassen Sie das obige Gespräch in weniger als 5000 Zeichen zusammen."), 150);
	TextRequestManagerInstance->SendTextRequest(ApiKey, Params, JSONHandlerInstance, HTTPRequestHandlerInstance, ConversationManagerInstance, OnMaxSummaryGenerated);
}

// ######################### Generate Image Description From Conversation #########################

void UNN_Cpp_GPT::GenerateImageSummaryFromConversation(const FString& Summary, TFunction<void(const FString&)> OnImageSummaryGenerated)
{
	FGPTRequestParams Params(Summary, TEXT("Bitte fassen Sie das obige Gespräch in weniger als 950 Zeichen zusammen."), 150);
	TextRequestManagerInstance->SendTextRequest(ApiKey, Params, JSONHandlerInstance, HTTPRequestHandlerInstance, ConversationManagerInstance, OnImageSummaryGenerated);
}

// ######################### Generate Image From Conversation #########################

void UNN_Cpp_GPT::GenerateChatImageFromConversation(const FString& Summary, TFunction<void(UTexture2D*)> OnChatImageGenerated)
{
	if (!JSONHandlerInstance || !HTTPRequestHandlerInstance)
	{
		UE_LOG(LogTemp, Error, TEXT("JSONHandlerInstance or HTTPRequestHandlerInstance is nullptr in GenerateChatImageFromConversation"));
		return;
	}

	if (Summary.IsEmpty())
	{
		UE_LOG(LogTemp, Error, TEXT("Summary is empty in GenerateChatImageFromConversation"));
		return;
	}
	
	// Create the JSON payload with the prompt (Messages)
	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
	JsonObject->SetStringField(TEXT("prompt"), Summary);
	JsonObject->SetNumberField(TEXT("n"), 1);
	JsonObject->SetStringField(TEXT("size"), TEXT("512x512"));
	JsonObject->SetStringField(TEXT("response_format"), TEXT("b64_json"));

	FString JsonString = JSONHandlerInstance->SerializeJSON(JsonObject);

	if (!ApiKey.IsEmpty())
	{
		TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = HTTPRequestHandlerInstance->CreateRequest(
			TEXT("https://api.openai.com/v1/images/generations"),
			TEXT("POST"),
			TEXT("application/json"),
			ApiKey
		);

		HTTPRequestHandlerInstance->SetRequestPayload(Request, JsonString);
		Request->OnProcessRequestComplete().BindUObject(this, &UNN_Cpp_GPT::OnImageResponseReceived, OnChatImageGenerated);
		Request->ProcessRequest();
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("API key is empty in GenerateChatImageFromConversation"));
	}
}

// ######################### On Image Response Received #########################

void UNN_Cpp_GPT::OnImageResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful, TFunction<void(UTexture2D*)> OnImageGenerated)
{
	UE_LOG(LogTemp, Error, TEXT("Full JSON Response: %s"), *Response->GetContentAsString());

	if (bWasSuccessful && Response.IsValid())
	{
		TSharedPtr<FJsonObject> JsonObject = JSONHandlerInstance->DeserializeJSON(Response->GetContentAsString());

		if (JsonObject.IsValid())
		{
			const TArray<TSharedPtr<FJsonValue>>* DataArray;
			if (JsonObject->TryGetArrayField(TEXT("data"), DataArray))
			{
				if (DataArray != nullptr && DataArray->Num() > 0)
				{
					FString Base64Image = (*DataArray)[0]->AsObject()->GetStringField(TEXT("b64_json"));

					TArray<uint8> ImageData;
					FBase64::Decode(Base64Image, ImageData);

					UTexture2D* GeneratedTexture = FImageUtils::ImportBufferAsTexture2D(ImageData);

					OnImageGenerated(GeneratedTexture);
				}
				else
				{
					UE_LOG(LogTemp, Error, TEXT("Data array is empty or missing in the response."));
					OnImageGenerated(nullptr);
				}
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("Failed to find 'data' array in the JSON response."));
				OnImageGenerated(nullptr);
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Failed to deserialize JSON response."));
			OnImageGenerated(nullptr);
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Image request was not successful or response was invalid."));
		OnImageGenerated(nullptr);
	}
}

FString UNN_Cpp_GPT::GetLastResponse() const
{
	return LastResponse;
}
