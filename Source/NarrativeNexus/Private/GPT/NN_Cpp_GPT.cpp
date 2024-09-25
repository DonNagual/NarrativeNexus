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

// Generate Info From Converation Partner
void UNN_Cpp_GPT::GenerateInfoAboutConversation(TFunction<void(const FString&)> OnInfoAboutConversationGenerated)
{
	FGPTRequestInfoAboutConversationParams Params(TEXT("Bitte formuliere eine prägnante Beschreibung der Person, mit der ich chatte, die als Grundlage dient, um mehr über diese zu erfahren. Die Beschreibung sollte klar und unter 500 Zeichen sein."), 150);
	TextRequestManagerInstance->SendInfoAboutConversationRequest(ApiKey, Params, JSONHandlerInstance, HTTPRequestHandlerInstance, ConversationManagerInstance, OnInfoAboutConversationGenerated);
}

// Generate Suggestions From Conversation
void UNN_Cpp_GPT::GenerateSuggestionsFromConversation(TFunction<void(const FString&)> OnSuggestionsFromConversationGenerated)
{
	FGPTRequestSuggestionsFromConversationParams Params(TEXT(
		"Generiere, als JSON-Objekt, drei mögliche Nachrichten, aus der Perspektive des Users, bezogen auf die Unterhaltung. "
		"Das Format sollte so aussehen: "
		"{'positive': 'Positive Nachricht', 'neutral': 'Neutrale Nachricht', 'negative': 'Negative Nachricht'}. "
		"Jede Antwort sollte nicht länger als 50 Zeichen sein."), 100);
	TextRequestManagerInstance->SendSuggestionsFromConversationRequest(ApiKey, Params, JSONHandlerInstance, HTTPRequestHandlerInstance, ConversationManagerInstance, OnSuggestionsFromConversationGenerated);
}

// Generate Image Description From Conversation
void UNN_Cpp_GPT::GenerateImageDescriptionFromConversation(TFunction<void(const FString&)> OnImageDescriptionGenerated)
{
	FGPTRequestImageDescriptionParams Params(TEXT("Bitte formuliere eine detaillierte Bildbeschreibung basierend auf dem obigen Gespräch, die als Grundlage zur Erstellung eines Bildes dient. Die Beschreibung sollte prägnant sein und weniger als 500 Zeichen umfassen."), 150);
	TextRequestManagerInstance->SendImageDescriptionRequest(ApiKey, Params, JSONHandlerInstance, HTTPRequestHandlerInstance, ConversationManagerInstance, OnImageDescriptionGenerated);
}

// Generate Image From Description
void UNN_Cpp_GPT::GenerateImageFromDescription(TFunction<void(UTexture2D*)> OnImageGenerated)
{
	FGPTRequestImageParams Params(TEXT("512x512"));
	ImageRequestManagerInstance->SendImageRequest(ApiKey, Params, JSONHandlerInstance, HTTPRequestHandlerInstance, ConversationManagerInstance, OnImageGenerated);
}

FString UNN_Cpp_GPT::GetLastResponse() const
{
	return LastResponse;
}

UNN_Cpp_GPTConversationManager* UNN_Cpp_GPT::GetConversationManager() const
{
	return ConversationManagerInstance;
}
