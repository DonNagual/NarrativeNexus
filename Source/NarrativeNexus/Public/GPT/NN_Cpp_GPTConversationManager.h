// NN_Cpp_GPTConversationManager.h

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Interface/NN_Cpp_IF_WidgetController.h"
#include "NN_Cpp_GPTConversationManager.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_GPTConversationManager : public UObject
{
	GENERATED_BODY()
	
public:
	//void SetGPT(UNN_Cpp_GPT* InGPT);

	void AddMessageToHistory(const FString& Role, const FString Content);
	void RemoveLastMessageFromAssistant();
	const TArray<TSharedPtr<FJsonObject>>& GetConversationHistory() const;
	void ClearConversationHistory();

	void AddSummaryToHistory(const FString& SummaryContent);
	const TArray<TSharedPtr<FJsonObject>>& GetSummaryHistory() const;
	void ClearSummaryHistory();

	void AddImageDescriptionToHistory(const FString& ImageDescriptionContent);
	const TArray<TSharedPtr<FJsonObject>>& GetImageDescriptionHistory() const;
	void ClearImageDescriptionHistory();

	void AddInfoAboutConversationToHistory(const FString& InfoAboutConversationContent);
	const TArray<TSharedPtr<FJsonObject>>& GetInfoAboutConversationHistory() const;
	void ClearInfoAboutConversationHistory();

	void AddSuggestionsFromConversationToHistory(const FString& SuggestionsFromConversationContent);
	const TArray<TSharedPtr<FJsonObject>>& GetSuggestionsFromConversationHistory() const;
	void ClearSuggestionsFromConversationHistory();

	// Getter for the Suggestion-Strings
	FString GetPositiveSuggestion() const { return PositiveSuggestion; }
	FString GetNeutralSuggestion() const { return NeutralSuggestion; }
	FString GetNegativeSuggestion() const { return NegativeSuggestion; }

private:

	TArray<TSharedPtr<FJsonObject>> ConversationHistory;
	TArray<TSharedPtr<FJsonObject>> SummaryHistory;
	TArray<TSharedPtr<FJsonObject>> ImageDescriptionHistory;
	TArray<TSharedPtr<FJsonObject>> InfoAboutConversationHistory;
	TArray<TSharedPtr<FJsonObject>> SuggestionsFromConversationHistory;

	void TrimConversationHistory();

	void TrimSummaryHistory();

	void TrimImageDescriptionHistory();

	void TrimInfoAboutConversationHistory();

	void TrimSuggestionsFromConversationHistory();

	const int32 MaxSummaryHistorySize = 10;
	const int32 MaxImageDescriptionHistorySize = 20;
	const int32 MaxInfoAboutConversationHistorySize = 20;
	const int32 MaxSuggestionsFromConversationHistorySize = 20;

	FString PositiveSuggestion;
	FString NeutralSuggestion;
	FString NegativeSuggestion;


};
