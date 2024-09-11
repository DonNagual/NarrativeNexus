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

// Send Message To GPT
void UNN_Cpp_GPT::SendMessageToGPT(const FString& Message)
{
	FGPTRequestParams Params(Message, TEXT("Bitte begrenzen Sie die Antwort auf maximal 1000 Zeichen."), 250);
	TextRequestManagerInstance->SendTextRequest(ApiKey, Params, JSONHandlerInstance, HTTPRequestHandlerInstance, ConversationManagerInstance,
		[this](const FString& Response)
		{
			LastResponse = Response;
			OnGPTResponseReceived.Broadcast(Response);
		});
}

// Generate Short Summary From Conversation
void UNN_Cpp_GPT::GenerateShortSummaryFromConversation(TFunction<void(const FString&)> OnShortSummaryGenerated)
{
	FGPTRequestHistoryParams Params(TEXT("Bitte fassen Sie das obige Gespräch zusammen und begrenzen Sie die Antwort auf maximal 500 Zeichen."), 150);
	TextRequestManagerInstance->SendSummaryRequest(ApiKey, Params, JSONHandlerInstance, HTTPRequestHandlerInstance, ConversationManagerInstance, OnShortSummaryGenerated);
}

// Generate Max Summary From Conversation
void UNN_Cpp_GPT::GenerateMaxSummaryFromConversation(TFunction<void(const FString&)> OnMaxSummaryGenerated)
{
	FGPTRequestHistoryParams Params(TEXT("Bitte fassen Sie das obige Gespräch in weniger als 5000 Zeichen zusammen."), 150);
	TextRequestManagerInstance->SendSummaryRequest(ApiKey, Params, JSONHandlerInstance, HTTPRequestHandlerInstance, ConversationManagerInstance, OnMaxSummaryGenerated);
}

// Generate Image Description From Conversation
void UNN_Cpp_GPT::GenerateImageDescriptionFromConversation(const FString& Summary, TFunction<void(const FString&)> OnImageSummaryGenerated)
{
	FGPTRequestParams Params(Summary, TEXT("Bitte fassen Sie das obige Gespräch in weniger als 950 Zeichen zusammen."), 150);
	TextRequestManagerInstance->SendTextRequest(ApiKey, Params, JSONHandlerInstance, HTTPRequestHandlerInstance, ConversationManagerInstance, OnImageSummaryGenerated);
}

// Generate Image From Description
void UNN_Cpp_GPT::GenerateImageFromDescription(const FString& Summary, TFunction<void(UTexture2D*)> OnImageGenerated)
{
	ImageRequestManagerInstance->SendImageRequest(ApiKey, Summary, TEXT("512x512"), JSONHandlerInstance, HTTPRequestHandlerInstance, OnImageGenerated);
}

FString UNN_Cpp_GPT::GetLastResponse() const
{
	return LastResponse;
}

UNN_Cpp_GPTConversationManager* UNN_Cpp_GPT::GetConversationManager() const
{
	return ConversationManagerInstance;
}
