// Fill out your copyright notice in the Description page of Project Settings.
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

	// Create the HTTP request
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
	Request->OnProcessRequestComplete().BindUObject(this, &UNN_Cpp_ChatGPT::OnResponseReceived);
	Request->SetURL(TEXT("https://api.openai.com/v1/chat/completions"));
	Request->SetVerb(TEXT("POST"));
	Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));

	// Create the JSON payload
	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
	JsonObject->SetStringField(TEXT("model"), TEXT("gpt-3.5-turbo"));

	// Create the messages array
	TArray<TSharedPtr<FJsonValue>> MessagesArray;
	TSharedPtr<FJsonObject> MessageObject = MakeShareable(new FJsonObject());
	MessageObject->SetStringField(TEXT("role"), TEXT("user"));
	MessageObject->SetStringField(TEXT("content"), Message);
	MessagesArray.Add(MakeShareable(new FJsonValueObject(MessageObject)));

	JsonObject->SetArrayField(TEXT("messages"), MessagesArray);
	JsonObject->SetNumberField(TEXT("max_tokens"), 150);

	FString JsonString;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonString);
	FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);

	Request->SetContentAsString(JsonString);
	Request->ProcessRequest();
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
