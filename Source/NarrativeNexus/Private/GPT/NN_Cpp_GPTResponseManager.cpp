// NN_Cpp_GPTResponseManager.cpp

#include "GPT/NN_Cpp_GPTResponseManager.h"

void UNN_Cpp_GPTResponseManager::ProcessResponse(const FString& ResponseString,
	UNN_Cpp_JSONHandler* JSONHandlerInstance,
	UNN_Cpp_GPTConversationManager* ConversationManager,
	TFunction<void(const FString&)> OnResponseProcessed
)
{
	if (!JSONHandlerInstance)
	{
		UE_LOG(LogTemp, Error, TEXT("JSONHandlerInstance is nullptr in ProcessResponse"));
		OnResponseProcessed(TEXT("Error: JSONHandlerInstance is nullptr"));
		return;
	}

	TSharedPtr<FJsonObject> JsonObject = JSONHandlerInstance->DeserializeJSON(ResponseString);

	if (JsonObject.IsValid())
	{
		const TArray<TSharedPtr<FJsonValue>>* ChoicesArray;
		if (JsonObject->TryGetArrayField(TEXT("choices"), ChoicesArray) && ChoicesArray != nullptr && ChoicesArray->Num() > 0)
		{
			TSharedPtr<FJsonObject> FirstChoice = (*ChoicesArray)[0]->AsObject();
			if (FirstChoice.IsValid() && FirstChoice->HasField(TEXT("message")))
			{
				FString Reply = FirstChoice->GetObjectField(TEXT("message"))->GetStringField(TEXT("content"));

				ConversationManager->AddMessageToHistory(TEXT("assistant"), Reply);

				OnResponseProcessed(Reply);
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("Failed to find 'message' field in the first choice."));
				OnResponseProcessed(TEXT("No message found in response."));
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Failed to find 'choices' array or it is empty."));
			OnResponseProcessed(TEXT("No choices found in response."));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to deserialize JSON response."));
		OnResponseProcessed(TEXT("Error parsing the JSON response."));
	}
}
