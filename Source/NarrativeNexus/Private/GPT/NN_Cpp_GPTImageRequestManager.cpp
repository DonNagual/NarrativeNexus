// NN_Cpp_GPTImageRequestManager.cpp

#include "GPT/NN_Cpp_GPTImageRequestManager.h"

void UNN_Cpp_GPTImageRequestManager::SetImageResponseManager(UNN_Cpp_GPTImageResponseManager* InImageResponseManager)
{
	ImageResponseManagerInstance = InImageResponseManager;
}

void UNN_Cpp_GPTImageRequestManager::SendImageRequest(
	const FString& ApiKey,
	const FString& Prompt,
	const FString& Size,
	UNN_Cpp_JSONHandler* JSONHandlerInstance,
	UNN_Cpp_HTTPRequestHandler* HTTPRequestHandlerInstance,
	TFunction<void(UTexture2D*)> OnImageResponseReceived
)
{
	if (!JSONHandlerInstance || !HTTPRequestHandlerInstance)
	{
		UE_LOG(LogTemp, Error, TEXT("JSONHandlerInstance or HTTPRequestHandlerInstance is nullptr in SendImageRequest"));
		return;
	}

	// Create the JSON payload with the prompt
	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
	JsonObject->SetStringField(TEXT("prompt"), Prompt);
	JsonObject->SetNumberField(TEXT("n"), 1);
	JsonObject->SetStringField(TEXT("size"), Size);
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
		Request->OnProcessRequestComplete().BindLambda([this, JSONHandlerInstance, OnImageResponseReceived](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
			{
				if (bWasSuccessful && Response.IsValid())
				{
					FString ResponseString = Response->GetContentAsString();

					// Übergabe der Bildantwort-Verarbeitung an den ImageResponseManager
					if (ImageResponseManagerInstance)
					{
						ImageResponseManagerInstance->ProcessImageResponse(ResponseString, JSONHandlerInstance, OnImageResponseReceived);
					}
				}
				else
				{
					UE_LOG(LogTemp, Error, TEXT("Failed to contact OpenAI for image generation."));
					OnImageResponseReceived(nullptr);
				}
			});
		Request->ProcessRequest();
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("API key is empty in SendImageRequest"));
	}
}
