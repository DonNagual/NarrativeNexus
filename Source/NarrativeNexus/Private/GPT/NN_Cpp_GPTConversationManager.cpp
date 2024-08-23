// NN_Cpp_GPTConversationManager.cpp

#include "GPT/NN_Cpp_GPTConversationManager.h"

void UNN_Cpp_GPTConversationManager::AddMessageToHistory(const FString& Role, const FString Content)
{
	TSharedPtr<FJsonObject> NewMessageObject = MakeShareable(new FJsonObject());
	NewMessageObject->SetStringField(TEXT("role"), Role);
	NewMessageObject->SetStringField(TEXT("content"), Content);

	ConversationHistory.Add(NewMessageObject);
	TrimHistory();

	// DEBUG
	FString HistoryString;
	for (const TSharedPtr<FJsonObject>& MessageObj : ConversationHistory)
	{
		FString Role, Content;
		MessageObj->TryGetStringField(TEXT("role"), Role);
		MessageObj->TryGetStringField(TEXT("content"), Content);

		HistoryString += FString::Printf(TEXT("-- %s: %s\n"), *Role, *Content);
	}
	UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_ConversationManager - ConversationHistory: %p\n%s\n"), this, *HistoryString);
}

const TArray<TSharedPtr<FJsonObject>>& UNN_Cpp_GPTConversationManager::GetConversationHistory() const
{
	return ConversationHistory;
}

void UNN_Cpp_GPTConversationManager::ClearHistory()
{
	ConversationHistory.Empty();
}

void UNN_Cpp_GPTConversationManager::TrimHistory()
{
	if (ConversationHistory.Num() > MaxHistorySize)
	{
		ConversationHistory.RemoveAt(0, ConversationHistory.Num() - MaxHistorySize);
	}
}
