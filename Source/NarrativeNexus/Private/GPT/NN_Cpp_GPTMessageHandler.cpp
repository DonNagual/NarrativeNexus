// NN_Cpp_GPTMessageHandler.cpp

#include "GPT/NN_Cpp_GPTMessageHandler.h"

//void UNN_Cpp_GPTMessageHandler::SendMessageToGPT(const FString& Message)
//{
//	// Validation of the input
//	if (Message.IsEmpty())
//	{
//		UE_LOG(LogTemp, Error, TEXT("Message to GPT is empty"));
//		return;
//	}
//
//	// Add the user's message to the entertainment story
//	TSharedPtr<FJsonObject> UserMessageObject = MakeShareable(new FJsonObject());
//	UserMessageObject->SetStringField(TEXT("role"), TEXT("user"));
//	UserMessageObject->SetStringField(TEXT("content"), Message);
//	ConversationHistory.Add(UserMessageObject);
//
//	// Limit the conversation history to the last 20 messages
//	const int32 MaxHistorySize = 20;
//	if (ConversationHistory.Num() > MaxHistorySize)
//	{
//		ConversationHistory.RemoveAt(0, ConversationHistory.Num() - MaxHistorySize);
//	}
//
//	// JSON handler for creating JSON objects
//	UNN_Cpp_JSONHandler* JsonHandler = NewObject<UNN_Cpp_JSONHandler>();
//
//	// Convert ConversationHistory to a JSON array
//	TArray<TSharedPtr<FJsonValue>> JsonArray;
//	for (const TSharedPtr<FJsonObject>& JsonObject : ConversationHistory)
//	{
//		JsonArray.Add(MakeShareable(new FJsonValueObject(JsonObject)));
//	}
//
//	// Add the instruction to limit the response to X characters
//	TSharedPtr<FJsonObject> InstructionMessageObject = MakeShareable(new FJsonObject());
//	InstructionMessageObject->SetStringField(TEXT("role"), TEXT("system"));
//	InstructionMessageObject->SetStringField(TEXT("content"), TEXT("Please limit your answer to a maximum of 1000 characters."));
//
//	JsonArray.Add(MakeShareable(new FJsonValueObject(InstructionMessageObject)));
//
//	// Create the JSON payload
//	TSharedPtr<FJsonObject> JsonPayload = MakeShareable(new FJsonObject());
//	JsonPayload->SetStringField(TEXT("model"), TEXT("gpt-4o-mini"));
//	JsonPayload->SetArrayField(TEXT("messages"), JsonArray);
//	JsonPayload->SetNumberField(TEXT("max_tokens"), 250);
//
//	// Serialize the JSON object into a string
//	FString JsonString = JsonHandler->SerializeJSON(JsonPayload);
//
//	// HTTP request handler
//	UNN_Cpp_HTTPRequestHandler* HttpRequestHandler = NewObject<UNN_Cpp_HTTPRequestHandler>();
//
//	// Load API key
//	UNN_Cpp_APIKeyLoader* ApiKeyLoader = NewObject<UNN_Cpp_APIKeyLoader>();
//	FString KeyFilePath = FPaths::ProjectDir() + TEXT("config/keys.txt");
//	FString ApiKey = ApiKeyLoader->LoadAPIKey(KeyFilePath);
//
//	if (ApiKey.IsEmpty())
//	{
//		UE_LOG(LogTemp, Error, TEXT("Failed to load API key from file"));
//		return;
//	}
//
//	// Create and configure the HTTP request
//	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = HttpRequestHandler->CreateRequest(
//		TEXT("https://api.openai.com/v1/chat/completions"),
//		TEXT("POST"),
//		TEXT("application/json"),
//		ApiKey
//	);
//
//	// Set the JSON payload
//	HttpRequestHandler->SetRequestPayload(Request, JsonString);
//
//	// Create a response processor
//	UNN_Cpp_GPTResponseProcessor* ResponseProcessor = NewObject<UNN_Cpp_GPTResponseProcessor>();
//
//	// Bind the callback function for processing the text response
//	Request->OnProcessRequestComplete().BindUObject(ResponseProcessor, &UNN_Cpp_GPTResponseProcessor::ProcessTextPesponse);
//
//	// Send the request
//	Request->ProcessRequest();
//}
//
//void UNN_Cpp_GPTMessageHandler::ResetConversation()
//{
//	ConversationHistory.Empty();
//}
//
//const TArray<TSharedPtr<FJsonObject>>& UNN_Cpp_GPTMessageHandler::GetConversationHistory() const
//{
//	return ConversationHistory;
//}
//
//TArray<TSharedPtr<FJsonObject>>& UNN_Cpp_GPTMessageHandler::GetMutableConversationHistory()
//{
//	return ConversationHistory;
//}
