// NN_Cpp_GPTConversationManager.cpp

#include "GPT/NN_Cpp_GPTConversationManager.h"

//void UNN_Cpp_GPTConversationManager::SetGPT(UNN_Cpp_GPT* InGPT)
//{
//	GPTInstance = InGPT;
//}

// ############### Conversation History ###############

void UNN_Cpp_GPTConversationManager::AddMessageToHistory(const FString& Role, const FString Content)
{
	if (ConversationHistory.Num() > 0 && ConversationHistory.Last()->GetStringField(TEXT("content")) == Content)
	{
		return;
	}

	TSharedPtr<FJsonObject> NewMessageObject = MakeShareable(new FJsonObject());
	NewMessageObject->SetStringField(TEXT("role"), Role);
	NewMessageObject->SetStringField(TEXT("content"), Content);

	ConversationHistory.Add(NewMessageObject);
	TrimConversationHistory();

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

void UNN_Cpp_GPTConversationManager::RemoveLastMessageFromAssistant()
{
	if (ConversationHistory.Last()->GetStringField(TEXT("role")) == TEXT("assistant"))
	{
		ConversationHistory.RemoveAt(ConversationHistory.Num() - 1);
	}
}

const TArray<TSharedPtr<FJsonObject>>& UNN_Cpp_GPTConversationManager::GetConversationHistory() const
{
	return ConversationHistory;
}

void UNN_Cpp_GPTConversationManager::ClearConversationHistory()
{
	ConversationHistory.Empty();
}

void UNN_Cpp_GPTConversationManager::TrimConversationHistory()
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		int MaxSize = Interface->GetMaxConversationHistorySizeViaInterface();
		if (ConversationHistory.Num() > MaxSize)
		{
			//if (GPTInstance)
			//{
			//	// DOTO
			//	UE_LOG(LogTemp, Error, TEXT("NN_Cpp_GPTConversationManager: "))
			//}
			ConversationHistory.RemoveAt(0, ConversationHistory.Num() - MaxSize);
		}
	}
}

// ############### Summary History ###############

void UNN_Cpp_GPTConversationManager::AddSummaryToHistory(const FString& SummaryContent)
{
	TSharedPtr<FJsonObject> NewSummaryObject = MakeShareable(new FJsonObject());
	NewSummaryObject->SetStringField(TEXT("role"), TEXT("Historian"));
	NewSummaryObject->SetStringField(TEXT("content"), SummaryContent);

	// Separate history for summaries
	SummaryHistory.Add(NewSummaryObject);
	TrimSummaryHistory();

	// DEBUG
	FString HistoryString;
	for (const TSharedPtr<FJsonObject>& MessageObj : SummaryHistory)
	{
		FString Role, Content;
		MessageObj->TryGetStringField(TEXT("role"), Role);
		MessageObj->TryGetStringField(TEXT("content"), Content);

		HistoryString += FString::Printf(TEXT("-- %s: %s\n"), *Role, *Content);
	}
	UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_ConversationManager - SummaryHistory: %p\n%s\n"), this, *HistoryString);
}

const TArray<TSharedPtr<FJsonObject>>& UNN_Cpp_GPTConversationManager::GetSummaryHistory() const
{
	return SummaryHistory;
}

void UNN_Cpp_GPTConversationManager::ClearSummaryHistory()
{
	SummaryHistory.Empty();
}

void UNN_Cpp_GPTConversationManager::TrimSummaryHistory()
{
	if (SummaryHistory.Num() > MaxSummaryHistorySize)
	{
		SummaryHistory.RemoveAt(0, SummaryHistory.Num() - MaxSummaryHistorySize);
	}
}