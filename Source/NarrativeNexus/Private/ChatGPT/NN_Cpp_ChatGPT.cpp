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

	// Create the HTTP request
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
	Request->OnProcessRequestComplete().BindUObject(this, &UNN_Cpp_ChatGPT::OnResponseReceived);
	Request->SetURL(TEXT("https://api.openai.com/v1/chat/completions"));
	Request->SetVerb(TEXT("POST"));
	Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));

	// Load the API kay from the file
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

	// Send the entire conversation history
	JsonPayload->SetArrayField(TEXT("messages"), JsonArray);

	JsonPayload->SetNumberField(TEXT("max_tokens"), 150);

	FString JsonString;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonString);
	FJsonSerializer::Serialize(JsonPayload.ToSharedRef(), Writer);

	Request->SetContentAsString(JsonString);
	Request->ProcessRequest();
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
