// NN_Cpp_GPTResponseProcessor.cpp

#include "GPT/NN_Cpp_GPTResponseProcessor.h"

UNN_Cpp_GPTResponseProcessor::UNN_Cpp_GPTResponseProcessor()
{
	//UE_LOG(LogTemp, Warning, TEXT("UNN_Cpp_GPTResponseProcessor Constructor - Objekt: %p"), this);
}

void UNN_Cpp_GPTResponseProcessor::ProcessTextPesponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	UE_LOG(LogTemp, Warning, TEXT("ProcessTextPesponse - Objekt: %p"), this);

	// Ensure that the response processing takes place in the main thread
	AsyncTask(ENamedThreads::GameThread, [this, bWasSuccessful, Response]()
	{
		if (IsValid(this))
		{
			UE_LOG(LogTemp, Warning, TEXT("ProcessTextPesponse: Valid Object"));

			if (!bWasSuccessful || !Response.IsValid())
			{
				UE_LOG(LogTemp, Error, TEXT("Failed to contact OpenAI"));
				LastResponse = TEXT("Empty response in case of error");
				return;
			}

			FString ResponseString = Response->GetContentAsString();

			// DEBUG
			UE_LOG(LogTemp, Warning, TEXT("Response: %s"), *ResponseString);

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

						LastResponse = Reply;

						//OnGPTResponseReceived.Broadcast(Reply);
						UE_LOG(LogTemp, Warning, TEXT("Broadcast wurde durchgefuehrt."));
						UE_LOG(LogTemp, Warning, TEXT("Broadcast - Objekt: %p"), this);
					}
					else
					{
						LastResponse = TEXT("No answer received");
					}
				}
				else
				{
					LastResponse = TEXT("No answer received");
				}
			}
			else
			{
				LastResponse = TEXT("Error parsing the JSON");
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("UNN_Cpp_GPTResponseProcessor ist ungültig."));
		}
	});
}

void UNN_Cpp_GPTResponseProcessor::ProcessImageResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful, TFunction<void(UTexture2D*)> OnImageGenerated)
{
}

FString UNN_Cpp_GPTResponseProcessor::GetLastResponse() const
{
	return LastResponse;
}
