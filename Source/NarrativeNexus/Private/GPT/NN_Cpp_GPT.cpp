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

// ######################### Send Message To ChatGPT #########################

void UNN_Cpp_GPT::SendMessageToGPT(const FString& Message)
{
	if (!JSONHandlerInstance || !HTTPRequestHandlerInstance)
	{
		UE_LOG(LogTemp, Error, TEXT("JSONHandlerInstance or HTTPRequestHandlerInstance is nullptr in SendMessageToGPT"));
		return;
	}

	// Validate the input message
	if (Message.IsEmpty())
	{
		UE_LOG(LogTemp, Error, TEXT("Message to GPT is empty"));
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

	// Create the JSON payload
	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
	JsonObject->SetStringField(TEXT("model"), TEXT("gpt-4o-mini"));
	JsonObject->SetArrayField(TEXT("messages"), JsonArray);
	JsonObject->SetNumberField(TEXT("max_tokens"), 250);

	FString JsonString = JSONHandlerInstance->SerializeJSON(JsonObject);

	// Load the API key from the file and Create the HTTP request
	if (!ApiKey.IsEmpty())
	{
		TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = HTTPRequestHandlerInstance->CreateRequest(
			TEXT("https://api.openai.com/v1/chat/completions"),
			TEXT("POST"),
			TEXT("application/json"),
			ApiKey
		);

		HTTPRequestHandlerInstance->SetRequestPayload(Request, JsonString);
		Request->OnProcessRequestComplete().BindUObject(this, &UNN_Cpp_GPT::OnTextResponseReceived);
		Request->ProcessRequest();
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("API key is empty in SendMessageToGPT"));
	}
}

// ######################### Generate Short Summary From Conversation #########################

void UNN_Cpp_GPT::GenerateShortSummaryFromConversation(const FString& Summary, TFunction<void(const FString&)> OnShortSummaryGenerated)
{
	if (!JSONHandlerInstance || !HTTPRequestHandlerInstance)
	{
		UE_LOG(LogTemp, Error, TEXT("JSONHandlerInstance or HTTPRequestHandlerInstance is nullptr in GenerateShortSummaryFromConversation"));
		return;
	}

	if (Summary.IsEmpty())
	{
		UE_LOG(LogTemp, Error, TEXT("Summary is empty in GenerateShortSummaryFromConversation"));
		return;
	}

	// Prepare the messages array for the API request
	TSharedPtr<FJsonObject> UserMessageObject = MakeShareable(new FJsonObject());
	UserMessageObject->SetStringField(TEXT("role"), TEXT("user"));
	UserMessageObject->SetStringField(TEXT("content"), Summary);

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

	FString JsonString = JSONHandlerInstance->SerializeJSON(JsonObject);

	// Load the API key from the file
	if (!ApiKey.IsEmpty())
	{
		TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = HTTPRequestHandlerInstance->CreateRequest(
			TEXT("https://api.openai.com/v1/chat/completions"),
			TEXT("POST"),
			TEXT("application/json"),
			ApiKey
		);

		HTTPRequestHandlerInstance->SetRequestPayload(Request, JsonString);
		Request->OnProcessRequestComplete().BindLambda([OnShortSummaryGenerated](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
			{
				if (bWasSuccessful && Response.IsValid())
				{
					TSharedPtr<FJsonObject> JsonObject;
					FString ResponseString = Response->GetContentAsString();
					UE_LOG(LogTemp, Error, TEXT("Full JSON Response: %s"), *ResponseString);

					TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(ResponseString);
					if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
					{
						const TArray<TSharedPtr<FJsonValue>>* ChoicesArray;
						if (JsonObject->TryGetArrayField(TEXT("choices"), ChoicesArray) && ChoicesArray != nullptr && ChoicesArray->Num() > 0)
						{
							TSharedPtr<FJsonObject> FirstChoice = (*ChoicesArray)[0]->AsObject();
							if (FirstChoice.IsValid() && FirstChoice->HasField(TEXT("message")))
							{
								FString Summary = FirstChoice->GetObjectField(TEXT("message"))->GetStringField(TEXT("content"));
								OnShortSummaryGenerated(Summary);
							}
							else
							{
								UE_LOG(LogTemp, Error, TEXT("Failed to find 'message' field in the first choice."));
								OnShortSummaryGenerated(TEXT("Failed to summarize conversation."));
							}
						}
						else
						{
							UE_LOG(LogTemp, Error, TEXT("Failed to find 'choices' array or it is empty."));
							OnShortSummaryGenerated(TEXT("Failed to summarize conversation."));
						}
					}
					else
					{
						UE_LOG(LogTemp, Error, TEXT("Failed to summarize conversation."));
						OnShortSummaryGenerated(TEXT("Failed to summarize conversation."));
					}
				}
				else
				{
					UE_LOG(LogTemp, Error, TEXT("Failed to contact OpenAI."));
					OnShortSummaryGenerated(TEXT("Failed to contact OpenAI."));
				}
			});
		Request->ProcessRequest();
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("API key is empty in GenerateShortSummaryFromConversation"));
	}
}

// ######################### Generate Max Summary From Conversation #########################

void UNN_Cpp_GPT::GenerateMaxSummaryFromConversation(const FString& Summary, TFunction<void(const FString&)> OnMaxSummaryGenerated)
{
	if (!JSONHandlerInstance || !HTTPRequestHandlerInstance)
	{
		UE_LOG(LogTemp, Error, TEXT("JSONHandlerInstance or HTTPRequestHandlerInstance is nullptr in GenerateMaxSummaryFromConversation"));
		return;
	}

	if (Summary.IsEmpty())
	{
		UE_LOG(LogTemp, Error, TEXT("Summary is empty in GenerateMaxSummaryFromConversation"));
		return;
	}

	// Prepare the messages array for the API request
	TSharedPtr<FJsonObject> UserMessageObject = MakeShareable(new FJsonObject());
	UserMessageObject->SetStringField(TEXT("role"), TEXT("user"));
	UserMessageObject->SetStringField(TEXT("content"), Summary);

	TSharedPtr<FJsonObject> InstructionMessageObject = MakeShareable(new FJsonObject());
	InstructionMessageObject->SetStringField(TEXT("role"), TEXT("system"));
	InstructionMessageObject->SetStringField(TEXT("content"), TEXT("Bitte fassen Sie das obige Gespräch in weniger als 5000 Zeichen zusammen."));

	TArray<TSharedPtr<FJsonValue>> MessagesArray;
	MessagesArray.Add(MakeShareable(new FJsonValueObject(UserMessageObject)));
	MessagesArray.Add(MakeShareable(new FJsonValueObject(InstructionMessageObject)));

	// Create the JSON payload with the conversation messages and the instruction to summarize
	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
	JsonObject->SetStringField(TEXT("model"), TEXT("gpt-4o-mini"));
	JsonObject->SetArrayField(TEXT("messages"), MessagesArray);
	JsonObject->SetNumberField(TEXT("max_tokens"), 150);

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
		Request->OnProcessRequestComplete().BindLambda([OnMaxSummaryGenerated](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
			{
				if (bWasSuccessful && Response.IsValid())
				{
					TSharedPtr<FJsonObject> JsonObject;
					FString ResponseString = Response->GetContentAsString();
					UE_LOG(LogTemp, Error, TEXT("Full JSON Response: %s"), *ResponseString);

					TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(ResponseString);
					if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
					{
						const TArray<TSharedPtr<FJsonValue>>* ChoicesArray;
						if (JsonObject->TryGetArrayField(TEXT("choices"), ChoicesArray) && ChoicesArray != nullptr && ChoicesArray->Num() > 0)
						{
							TSharedPtr<FJsonObject> FirstChoice = (*ChoicesArray)[0]->AsObject();
							if (FirstChoice.IsValid() && FirstChoice->HasField(TEXT("message")))
							{
								FString Summary = FirstChoice->GetObjectField(TEXT("message"))->GetStringField(TEXT("content"));
								OnMaxSummaryGenerated(Summary);
							}
							else
							{
								UE_LOG(LogTemp, Error, TEXT("Failed to find 'message' field in the first choice."));
								OnMaxSummaryGenerated(TEXT("Failed to summarize conversation."));
							}
						}
						else
						{
							UE_LOG(LogTemp, Error, TEXT("Failed to find 'choices' array or it is empty."));
							OnMaxSummaryGenerated(TEXT("Failed to summarize conversation."));
						}
					}
					else
					{
						UE_LOG(LogTemp, Error, TEXT("Failed to summarize conversation."));
						OnMaxSummaryGenerated(TEXT("Failed to summarize conversation."));
					}
				}
				else
				{
					UE_LOG(LogTemp, Error, TEXT("Failed to contact OpenAI."));
					OnMaxSummaryGenerated(TEXT("Failed to contact OpenAI."));
				}
			});
		Request->ProcessRequest();
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("API key is empty in GenerateMaxSummaryFromConversation"));
	}
}

// ######################### Generate Image Description From Conversation #########################

void UNN_Cpp_GPT::GenerateImageSummaryFromConversation(const FString& Summary, TFunction<void(const FString&)> OnImageSummaryGenerated)
{
	if (!JSONHandlerInstance || !HTTPRequestHandlerInstance)
	{
		UE_LOG(LogTemp, Error, TEXT("JSONHandlerInstance or HTTPRequestHandlerInstance is nullptr in GenerateImageSummaryFromConversation"));
		return;
	}

	if (Summary.IsEmpty())
	{
		UE_LOG(LogTemp, Error, TEXT("Summary is empty in GenerateImageSummaryFromConversation"));
		return;
	}

	// Prepare the messages array for the API request
	TSharedPtr<FJsonObject> UserMessageObject = MakeShareable(new FJsonObject());
	UserMessageObject->SetStringField(TEXT("role"), TEXT("user"));
	UserMessageObject->SetStringField(TEXT("content"), Summary);

	TSharedPtr<FJsonObject> InstructionMessageObject = MakeShareable(new FJsonObject());
	InstructionMessageObject->SetStringField(TEXT("role"), TEXT("system"));
	InstructionMessageObject->SetStringField(TEXT("content"), TEXT("Bitte fassen Sie das obige Gespräch in weniger als 950 Zeichen zusammen."));

	TArray<TSharedPtr<FJsonValue>> MessagesArray;
	MessagesArray.Add(MakeShareable(new FJsonValueObject(UserMessageObject)));
	MessagesArray.Add(MakeShareable(new FJsonValueObject(InstructionMessageObject)));

	// Create the JSON payload with the conversation messages and the instruction to summarize
	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
	JsonObject->SetStringField(TEXT("model"), TEXT("gpt-4o-mini"));
	JsonObject->SetArrayField(TEXT("messages"), MessagesArray);
	JsonObject->SetNumberField(TEXT("max_tokens"), 150);

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
		Request->OnProcessRequestComplete().BindLambda([OnImageSummaryGenerated](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
			{
				if (bWasSuccessful && Response.IsValid())
				{
					TSharedPtr<FJsonObject> JsonObject;
					FString ResponseString = Response->GetContentAsString();
					UE_LOG(LogTemp, Error, TEXT("Full JSON Response: %s"), *ResponseString);

					TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(ResponseString);
					if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
					{
						const TArray<TSharedPtr<FJsonValue>>* ChoicesArray;
						if (JsonObject->TryGetArrayField(TEXT("choices"), ChoicesArray) && ChoicesArray != nullptr && ChoicesArray->Num() > 0)
						{
							TSharedPtr<FJsonObject> FirstChoice = (*ChoicesArray)[0]->AsObject();
							if (FirstChoice.IsValid() && FirstChoice->HasField(TEXT("message")))
							{
								FString Summary = FirstChoice->GetObjectField(TEXT("message"))->GetStringField(TEXT("content"));
								OnImageSummaryGenerated(Summary);
							}
							else
							{
								UE_LOG(LogTemp, Error, TEXT("Failed to find 'message' field in the first choice."));
								OnImageSummaryGenerated(TEXT("Failed to summarize conversation."));
							}
						}
						else
						{
							UE_LOG(LogTemp, Error, TEXT("Failed to find 'choices' array or it is empty."));
							OnImageSummaryGenerated(TEXT("Failed to summarize conversation."));
						}
					}
					else
					{
						UE_LOG(LogTemp, Error, TEXT("Failed to summarize conversation."));
						OnImageSummaryGenerated(TEXT("Failed to summarize conversation."));
					}
				}
				else
				{
					UE_LOG(LogTemp, Error, TEXT("Failed to contact OpenAI."));
					OnImageSummaryGenerated(TEXT("Failed to contact OpenAI."));
				}
			});
		Request->ProcessRequest();
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("API key is empty in GenerateImageSummaryFromConversation"));
	}
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

// ######################### On Text Response Received #########################

void UNN_Cpp_GPT::OnTextResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	// Ensure that the response processing takes place in the main thread
	AsyncTask(ENamedThreads::GameThread, [this, bWasSuccessful, Response]()
	{
		if (!bWasSuccessful || !Response.IsValid())
		{
			UE_LOG(LogTemp, Error, TEXT("Failed to contact OpenAI"));
			LastResponse = TEXT("Empty response in case of error");
			OnGPTResponseReceived.Broadcast(LastResponse);
			return;
		}

		TSharedPtr<FJsonObject> JsonObject = JSONHandlerInstance->DeserializeJSON(Response->GetContentAsString());
		
		if (JsonObject.IsValid())
		{
			const TArray<TSharedPtr<FJsonValue>>* ChoicesArray;
			if (JsonObject->TryGetArrayField(TEXT("choices"), ChoicesArray) && ChoicesArray != nullptr && ChoicesArray->Num() > 0)
			{
				TSharedPtr<FJsonObject> MessageObject = (*ChoicesArray)[0]->AsObject();
				if (MessageObject.IsValid())
				{
					FString Reply = (*ChoicesArray)[0]->AsObject()->GetObjectField(TEXT("message"))->GetStringField(TEXT("content"));

					LastResponse = Reply;

					// Add GPT´s reply to the conversation history
					TSharedPtr<FJsonObject> GPTMessageObject = MakeShareable(new FJsonObject());
					GPTMessageObject->SetStringField(TEXT("role"), TEXT("assistant"));
					GPTMessageObject->SetStringField(TEXT("content"), Reply);
					ConversationHistory.Add(GPTMessageObject);

					// Trigger the delegate to notify about the response
					OnGPTResponseReceived.Broadcast(Reply);

					// DEBUG
					UE_LOG(LogTemp, Warning, TEXT("ChatGPT - Reply: %p\n-- %s\n"), this, *Reply);

					// DEBUG
					FString HistoryString;
					for (const TSharedPtr<FJsonObject>& MessageObj : ConversationHistory)
					{
						FString Role, Content;
						MessageObj->TryGetStringField(TEXT("role"), Role);
						MessageObj->TryGetStringField(TEXT("content"), Content);

						HistoryString += FString::Printf(TEXT("-- %s: %s\n"), *Role, *Content);
					}
					UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_GPT - ConversationHistory: %p\n%s\n"), this, *HistoryString);
				}
				else
				{
					LastResponse = TEXT("No answer received");
					OnGPTResponseReceived.Broadcast(LastResponse);
				}
			}
			else
			{
				LastResponse = TEXT("No answer received");
				OnGPTResponseReceived.Broadcast(LastResponse);
			}
		}
		else
		{
			LastResponse = TEXT("Error parsing the JSON");
			OnGPTResponseReceived.Broadcast(LastResponse);
		}
	});
}

void UNN_Cpp_GPT::ResetConversation()
{
	ConversationHistory.Empty();
	LastResponse = TEXT("");
}

FString UNN_Cpp_GPT::GetLastResponse() const
{
	return LastResponse;
}

const TArray<TSharedPtr<FJsonObject>>& UNN_Cpp_GPT::GetConversationHistory() const
{
	return ConversationHistory;
}

TArray<TSharedPtr<FJsonObject>>& UNN_Cpp_GPT::GetMutableConversationHistory()
{
	return ConversationHistory;
}
