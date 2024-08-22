// NN_Cpp_HTTPRequestHandler.cpp

#include "GPT/NN_Cpp_HTTPRequestHandler.h"

TSharedRef<IHttpRequest, ESPMode::ThreadSafe> UNN_Cpp_HTTPRequestHandler::CreateRequest(const FString& URL, const FString& Verb, const FString& ContentType, const FString& AuthorizationToken)
{
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
	Request->SetURL(URL);
	Request->SetVerb(Verb);
	Request->SetHeader(TEXT("Content-Type"), ContentType);
	Request->SetHeader(TEXT("Authorization"), FString::Printf(TEXT("Bearer %s"), *AuthorizationToken));
	return Request;
}

void UNN_Cpp_HTTPRequestHandler::SetRequestPayload(TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request, const FString& JsonString)
{
	Request->SetContentAsString(JsonString);
}
