// NN_Cpp_GPTConversationManager.cpp

#include "GPT/NN_Cpp_GPTConversationManager.h"

//void UNN_Cpp_GPTConversationManager::SetGPT(UNN_Cpp_GPT* InGPT)
//{
//	GPTInstance = InGPT;
//}

// ############################## Conversation History ##############################

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

// ############################## Summary History ##############################

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

// ############################## Image Description ##############################

void UNN_Cpp_GPTConversationManager::AddImageDescriptionToHistory(const FString& ImageDescriptionContent)
{
	TSharedPtr<FJsonObject> NewImageDescriptionObject = MakeShareable(new FJsonObject());
	NewImageDescriptionObject->SetStringField(TEXT("role"), TEXT("Painter"));
	NewImageDescriptionObject->SetStringField(TEXT("content"), ImageDescriptionContent);

	// Separate history for summaries
	ImageDescriptionHistory.Add(NewImageDescriptionObject);
	TrimImageDescriptionHistory();

	// DEBUG
	FString HistoryString;
	for (const TSharedPtr<FJsonObject>& MessageObj : ImageDescriptionHistory)
	{
		FString Role, Content;
		MessageObj->TryGetStringField(TEXT("role"), Role);
		MessageObj->TryGetStringField(TEXT("content"), Content);

		HistoryString += FString::Printf(TEXT("-- %s: %s\n"), *Role, *Content);
	}
	UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_ConversationManager - ImageDescriptionHistory: %p\n%s\n"), this, *HistoryString);
}

const TArray<TSharedPtr<FJsonObject>>& UNN_Cpp_GPTConversationManager::GetImageDescriptionHistory() const
{
	return ImageDescriptionHistory;
}

void UNN_Cpp_GPTConversationManager::ClearImageDescriptionHistory()
{
	ImageDescriptionHistory.Empty();
}

void UNN_Cpp_GPTConversationManager::TrimImageDescriptionHistory()
{
	if (ImageDescriptionHistory.Num() > MaxImageDescriptionHistorySize)
	{
		ImageDescriptionHistory.RemoveAt(0, ImageDescriptionHistory.Num() - MaxImageDescriptionHistorySize);
	}
}

// ############################## Info About Conversation ##############################

void UNN_Cpp_GPTConversationManager::AddInfoAboutConversationToHistory(const FString& InfoAboutConversationContent)
{
	TSharedPtr<FJsonObject> NewInfoAboutConversationObject = MakeShareable(new FJsonObject());
	NewInfoAboutConversationObject->SetStringField(TEXT("role"), TEXT("Researcher"));
	NewInfoAboutConversationObject->SetStringField(TEXT("content"), InfoAboutConversationContent);

	InfoAboutConversationHistory.Add(NewInfoAboutConversationObject);
	TrimInfoAboutConversationHistory();

	// DEBUG
	FString HistoryString;
	for (const TSharedPtr<FJsonObject>& MessageObj : InfoAboutConversationHistory)
	{
		FString Role, Content;
		MessageObj->TryGetStringField(TEXT("role"), Role);
		MessageObj->TryGetStringField(TEXT("content"), Content);

		HistoryString += FString::Printf(TEXT("-- %s: %s\n"), *Role, *Content);
	}
	UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_ConversationManager - InfoAboutConversationHistory: %p\n%s\n"), this, *HistoryString);
}

const TArray<TSharedPtr<FJsonObject>>& UNN_Cpp_GPTConversationManager::GetInfoAboutConversationHistory() const
{
	return InfoAboutConversationHistory;
}

void UNN_Cpp_GPTConversationManager::ClearInfoAboutConversationHistory()
{
	InfoAboutConversationHistory.Empty();
}

void UNN_Cpp_GPTConversationManager::TrimInfoAboutConversationHistory()
{
	if (InfoAboutConversationHistory.Num() > MaxInfoAboutConversationHistorySize)
	{
		InfoAboutConversationHistory.RemoveAt(0, InfoAboutConversationHistory.Num() - MaxInfoAboutConversationHistorySize);
	}
}

// ############################## Suggestions From Conversation ##############################

void UNN_Cpp_GPTConversationManager::AddSuggestionsFromConversationToHistory(const FString& SuggestionsFromConversationContent)
{
	// Delete old values
	PositiveSuggestion.Empty();
	NeutralSuggestion.Empty();
	NegativeSuggestion.Empty();

	TSharedPtr<FJsonObject> NewSuggestionsFromConversationObject = MakeShareable(new FJsonObject());
	NewSuggestionsFromConversationObject->SetStringField(TEXT("role"), TEXT("Suggestor"));
	NewSuggestionsFromConversationObject->SetStringField(TEXT("content"), SuggestionsFromConversationContent);

	SuggestionsFromConversationHistory.Add(NewSuggestionsFromConversationObject);
	TrimSuggestionsFromConversationHistory();

	// Remove backticks and spaces
	FString CleanedContent = SuggestionsFromConversationContent.Replace(TEXT("```json"), TEXT("")).Replace(TEXT("```"), TEXT("")).TrimStartAndEnd();

	// Parse the JSON object and save the new values
	TSharedPtr<FJsonObject> SuggestionsObject;
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(CleanedContent);

	// DEBUG
	UE_LOG(LogTemp, Warning, TEXT("Cleaned JSON: %s"), *CleanedContent);

	if (FJsonSerializer::Deserialize(Reader, SuggestionsObject) && SuggestionsObject.IsValid())
	{
		// Extrahiere die neuen Werte und speichere sie in den globalen Variablen
		SuggestionsObject->TryGetStringField(TEXT("positive"), PositiveSuggestion);
		SuggestionsObject->TryGetStringField(TEXT("neutral"), NeutralSuggestion);
		SuggestionsObject->TryGetStringField(TEXT("negative"), NegativeSuggestion);

		// DEBUG
		UE_LOG(LogTemp, Warning, TEXT("Extracted Positive: %s"), *PositiveSuggestion);
		UE_LOG(LogTemp, Warning, TEXT("Extracted Neutral: %s"), *NeutralSuggestion);
		UE_LOG(LogTemp, Warning, TEXT("Extracted Negative: %s"), *NegativeSuggestion);
	}

	// DEBUG
	FString HistoryString;
	for (const TSharedPtr<FJsonObject>& MessageObj : SuggestionsFromConversationHistory)
	{
		FString Role, Content;
		MessageObj->TryGetStringField(TEXT("role"), Role);
		MessageObj->TryGetStringField(TEXT("content"), Content);

		HistoryString += FString::Printf(TEXT("-- %s: %s\n"), *Role, *Content);
	}
	UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_ConversationManager - SuggestionsFromConversationHistory: %p\n%s\n"), this, *HistoryString);
}

const TArray<TSharedPtr<FJsonObject>>& UNN_Cpp_GPTConversationManager::GetSuggestionsFromConversationHistory() const
{
	return SuggestionsFromConversationHistory;
}

void UNN_Cpp_GPTConversationManager::ClearSuggestionsFromConversationHistory()
{
	SuggestionsFromConversationHistory.Empty();
}

void UNN_Cpp_GPTConversationManager::TrimSuggestionsFromConversationHistory()
{
	if (SuggestionsFromConversationHistory.Num() > MaxSuggestionsFromConversationHistorySize)
	{
		SuggestionsFromConversationHistory.RemoveAt(0, SuggestionsFromConversationHistory.Num() - MaxSuggestionsFromConversationHistorySize);
	}
}
