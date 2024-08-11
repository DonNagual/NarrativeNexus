// NN_Cpp_ChatGPT.cpp

#include "ChatGPT/NN_Cpp_ChatGPT.h"

UNN_Cpp_ChatGPT* UNN_Cpp_ChatGPT::CreateChatGPT(UObject* Outer)
{
	if (!Outer)
	{
		UE_LOG(LogTemp, Error, TEXT("Outer object is null in CreateChatGPTClient"));
		return nullptr;
	}
	return NewObject<UNN_Cpp_ChatGPT>(Outer);
}

void UNN_Cpp_ChatGPT::SendMessageToChatGPT(const FString& Message)
{
	// Validate the input message
	if (Message.IsEmpty())
	{
		UE_LOG(LogTemp, Error, TEXT("Message to ChatGPT is empty"));
		return;
	}

	// Add the user´s message to the conversation history
	TSharedPtr<FJsonObject> UserMessageObject = MakeShareable(new FJsonObject());
	UserMessageObject->SetStringField(TEXT("role"), TEXT("user"));
	UserMessageObject->SetStringField(TEXT("content"), Message);
	ConversationHistory.Add(UserMessageObject);

	// Limit the conversation history to the last 20 messages
	const int32 MaxHistorySize = 20;
	if (ConversationHistory.Num() > MaxHistorySize)
	{
		ConversationHistory.RemoveAt(0, ConversationHistory.Num() - MaxHistorySize);
	}

	// Convert ConversationHistory to an array of FJsonValue
	TArray<TSharedPtr<FJsonValue>> JsonArray;
	for (const TSharedPtr<FJsonObject>& JsonObject : ConversationHistory)
	{
		JsonArray.Add(MakeShareable(new FJsonValueObject(JsonObject)));
	}

	// Add instruction to limit the response to X characters
	TSharedPtr<FJsonObject> InstructionMessageObject = MakeShareable(new FJsonObject());
	InstructionMessageObject->SetStringField(TEXT("role"), TEXT("system"));
	InstructionMessageObject->SetStringField(TEXT("content"), TEXT("Bitte begrenzen Sie die Antwort auf maximal 1000 Zeichen."));

	JsonArray.Add(MakeShareable(new FJsonValueObject(InstructionMessageObject)));
	
	// Create the HTTP request
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
	Request->OnProcessRequestComplete().BindUObject(this, &UNN_Cpp_ChatGPT::OnResponseReceived);
	Request->SetURL(TEXT("https://api.openai.com/v1/chat/completions"));
	Request->SetVerb(TEXT("POST"));
	Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));

	// Load the API key from the file
	FString KeyFilePath = FPaths::ProjectDir() + TEXT("config/keys.txt");
	FString ApiKey;
	if (FFileHelper::LoadFileToString(ApiKey, *KeyFilePath))
	{
		// Trim the API key to remove any newline characters
		ApiKey = ApiKey.TrimStartAndEnd();
		Request->SetHeader(TEXT("Authorization"), FString::Printf(TEXT("Bearer %s"), *ApiKey));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to load API key from file"));
		return;
	}

	// Create the JSON payload
	TSharedPtr<FJsonObject> JsonPayload = MakeShareable(new FJsonObject());
	JsonPayload->SetStringField(TEXT("model"), TEXT("gpt-4o-mini"));
	JsonPayload->SetArrayField(TEXT("messages"), JsonArray);
	JsonPayload->SetNumberField(TEXT("max_tokens"), 250);

	FString JsonString;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonString);
	FJsonSerializer::Serialize(JsonPayload.ToSharedRef(), Writer);

	Request->SetContentAsString(JsonString);
	Request->ProcessRequest();
}

void UNN_Cpp_ChatGPT::GenerateSummaryFromConversation(const FString& Messages, TFunction<void(const FString&)> OnSummaryGenerated)
{
	// Create the HTTP request for generating a summary
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();

	// Set the API endpoint for ChatGPT
	Request->SetURL(TEXT("https://api.openai.com/v1/chat/completions"));
	Request->SetVerb(TEXT("POST"));
	Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));

	FString KeyFilePath = FPaths::ProjectDir() + TEXT("config/keys.txt");
	FString ApiKey;
	if (FFileHelper::LoadFileToString(ApiKey, *KeyFilePath))
	{
		// Trim the API key to remove any newline characters
		ApiKey = ApiKey.TrimStartAndEnd();
		Request->SetHeader(TEXT("Authorization"), FString::Printf(TEXT("Bearer %s"), *ApiKey));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to load API key from file"));
		return;
	}

	// Prepare the messages array for the API request
	TSharedPtr<FJsonObject> UserMessageObject = MakeShareable(new FJsonObject());
	UserMessageObject->SetStringField(TEXT("role"), TEXT("user"));
	UserMessageObject->SetStringField(TEXT("content"), Messages);

	TSharedPtr<FJsonObject> InstructionMessageObject = MakeShareable(new FJsonObject());
	InstructionMessageObject->SetStringField(TEXT("role"), TEXT("system"));
	InstructionMessageObject->SetStringField(TEXT("content"), TEXT("Bitte fassen Sie das obige Gespräch in weniger als 500 Zeichen zusammen."));

	TArray<TSharedPtr<FJsonValue>> MessagesArray;
	MessagesArray.Add(MakeShareable(new FJsonValueObject(UserMessageObject)));
	MessagesArray.Add(MakeShareable(new FJsonValueObject(InstructionMessageObject)));

	// Create the JSON payload with the conversation messages and the instruction to summarize
	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
	JsonObject->SetStringField(TEXT("model"), TEXT("gpt-4o-mini"));
	JsonObject->SetArrayField(TEXT("messages"), MessagesArray);
	JsonObject->SetNumberField(TEXT("max_tokens"), 150);

	FString JsonString;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonString);
	FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);

	Request->SetContentAsString(JsonString);
	Request->OnProcessRequestComplete().BindLambda([OnSummaryGenerated](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
	{
		if (bWasSuccessful && Response.IsValid())
		{
			FString FullResponse = Response->GetContentAsString();
			UE_LOG(LogTemp, Error, TEXT("Full JSON Response: %s"), *FullResponse);

			TSharedPtr<FJsonObject> JsonObject;
			TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());
			if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
			{
				const TArray<TSharedPtr<FJsonValue>>* ChoicesArray;
				if (JsonObject->TryGetArrayField(TEXT("choices"), ChoicesArray) && ChoicesArray != nullptr && ChoicesArray->Num() > 0)
				{
					TSharedPtr<FJsonObject> FirstChoice = (*ChoicesArray)[0]->AsObject();
					if (FirstChoice.IsValid() && FirstChoice->HasField(TEXT("message")))
					{
						FString Summary = FirstChoice->GetObjectField(TEXT("message"))->GetStringField(TEXT("content"));
						OnSummaryGenerated(Summary);
					}
					else
					{
						UE_LOG(LogTemp, Error, TEXT("Failed to find 'message' field in the first choice."));
						OnSummaryGenerated(TEXT("Failed to summarize conversation."));
					}
				}
				else
				{
					UE_LOG(LogTemp, Error, TEXT("Failed to find 'choices' array or it is empty."));
					OnSummaryGenerated(TEXT("Failed to summarize conversation."));
				}
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("Failed to summarize conversation."));
				OnSummaryGenerated(TEXT("Failed to summarize conversation."));
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Failed to contact OpenAI."));
			OnSummaryGenerated(TEXT("Failed to contact OpenAI."));
		}
	});
	Request->ProcessRequest();
}

void UNN_Cpp_ChatGPT::GenerateImageFromConversation(const FString& Messages, TFunction<void(UTexture2D*)> OnImageGenerated)
{
	// Create the HTTP request for DALL-E image generation
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
	Request->OnProcessRequestComplete().BindUObject(this, &UNN_Cpp_ChatGPT::OnImageResponseReceived, OnImageGenerated);

	// Set the API endpoint for DALL-E 2
	Request->SetURL(TEXT("https://api.openai.com/v1/images/generations"));
	Request->SetVerb(TEXT("POST"));
	Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));

	// Load the API key from the file
	FString KeyFilePath = FPaths::ProjectDir() + TEXT("config/keys.txt");
	FString ApiKey;
	if (FFileHelper::LoadFileToString(ApiKey, *KeyFilePath))
	{
		// Trim the API key to remove any newline characters
		ApiKey = ApiKey.TrimStartAndEnd();
		Request->SetHeader(TEXT("Authorization"), FString::Printf(TEXT("Bearer %s"), *ApiKey));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to load API key from file"));
		return;
	}

	// Create the JSON payload with the prompt (Messages)
	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
	JsonObject->SetStringField(TEXT("prompt"), Messages);
	JsonObject->SetNumberField(TEXT("n"), 1);
	JsonObject->SetStringField(TEXT("size"), TEXT("512x512"));
	JsonObject->SetStringField(TEXT("response_format"), TEXT("b64_json"));

	FString JsonString;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonString);
	FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);

	Request->SetContentAsString(JsonString);
	Request->ProcessRequest();
}

void UNN_Cpp_ChatGPT::OnImageResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful, TFunction<void(UTexture2D*)> OnImageGenerated)
{
	UE_LOG(LogTemp, Error, TEXT("Full JSON Response: %s"), *Response->GetContentAsString());

	if (bWasSuccessful && Response.IsValid())
	{
		TSharedPtr<FJsonObject> JsonObject;
		TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());

		if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
		{
			const TArray<TSharedPtr<FJsonValue>>* DataArray;
			if (JsonObject->TryGetArrayField(TEXT("data"), DataArray))
			{
				if (DataArray != nullptr && DataArray->Num() > 0)
				{
					// Extract the base64-encoded image from the response
					FString Base64Image = (*DataArray)[0]->AsObject()->GetStringField(TEXT("b64_json"));

					// Convert Base64 string to byte array
					TArray<uint8> ImageData;
					FBase64::Decode(Base64Image, ImageData);

					// Convert the byte array to UTexture2D
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

void UNN_Cpp_ChatGPT::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	// Ensure that the response processing takes place in the main thread
	AsyncTask(ENamedThreads::GameThread, [this, bWasSuccessful, Response]()
	{

		UE_LOG(LogTemp, Log, TEXT("Entering OnResponseReceived"));

		if (!bWasSuccessful || !Response.IsValid())
		{
			UE_LOG(LogTemp, Error, TEXT("Failed to contact OpenAI"));
			LastResponse = TEXT("Empty response in case of error");
			OnChatGPTResponseReceived.Broadcast(LastResponse);
			return;
		}

		FString ResponseString = Response->GetContentAsString();
		UE_LOG(LogTemp, Log, TEXT("Response: %s"), *ResponseString);

		TSharedPtr<FJsonObject> JsonObject;
		TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(ResponseString);

		if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
		{
			const TArray<TSharedPtr<FJsonValue>>* ChoicesArray;
			if (JsonObject->TryGetArrayField(TEXT("choices"), ChoicesArray) && ChoicesArray != nullptr && ChoicesArray->Num() > 0)
			{
				TSharedPtr<FJsonObject> MessageObject = (*ChoicesArray)[0]->AsObject();
				if (MessageObject.IsValid())
				{
					FString Reply = (*ChoicesArray)[0]->AsObject()->GetObjectField(TEXT("message"))->GetStringField(TEXT("content"));
					UE_LOG(LogTemp, Log, TEXT("ChatGPT Reply: %s"), *Reply);

					LastResponse = Reply;

					// Add ChatGPT´s reply to the conversation history
					TSharedPtr<FJsonObject> GPTMessageObject = MakeShareable(new FJsonObject());
					GPTMessageObject->SetStringField(TEXT("role"), TEXT("assistant"));
					GPTMessageObject->SetStringField(TEXT("content"), Reply);
					ConversationHistory.Add(GPTMessageObject);

					// Trigger the delegate to notify about the response
					OnChatGPTResponseReceived.Broadcast(Reply);
				}
				else
				{
					LastResponse = TEXT("No answer received");
					OnChatGPTResponseReceived.Broadcast(LastResponse);
				}
			}
			else
			{
				LastResponse = TEXT("No answer received");
				OnChatGPTResponseReceived.Broadcast(LastResponse);
			}
		}
		else
		{
			LastResponse = TEXT("Error parsing the JSON");
			OnChatGPTResponseReceived.Broadcast(LastResponse);
		}
	});
}

void UNN_Cpp_ChatGPT::ResetConversation()
{
	ConversationHistory.Empty();
	LastResponse = TEXT("");
}

FString UNN_Cpp_ChatGPT::GetLastResponse() const
{
	return LastResponse;
}

const TArray<TSharedPtr<FJsonObject>>& UNN_Cpp_ChatGPT::GetConversationHistory() const
{
	return ConversationHistory;
}

TArray<TSharedPtr<FJsonObject>>& UNN_Cpp_ChatGPT::GetMutableConversationHistory()
{
	return ConversationHistory;
}

FOnChatGPTResponseReceived& UNN_Cpp_ChatGPT::GetOnChatGPTResponseReceived()
{
	return OnChatGPTResponseReceived;
}
