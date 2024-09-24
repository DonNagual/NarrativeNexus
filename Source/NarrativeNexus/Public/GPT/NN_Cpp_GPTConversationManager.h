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

private:

	TArray<TSharedPtr<FJsonObject>> ConversationHistory;
	TArray<TSharedPtr<FJsonObject>> SummaryHistory;
	TArray<TSharedPtr<FJsonObject>> ImageDescriptionHistory;
	TArray<TSharedPtr<FJsonObject>> InfoAboutConversationHistory;

	void TrimConversationHistory();

	void TrimSummaryHistory();

	void TrimImageDescriptionHistory();

	void TrimInfoAboutConversationHistory();

	const int32 MaxSummaryHistorySize = 10;
	const int32 MaxImageDescriptionHistorySize = 20;
	const int32 MaxInfoAboutConversationHistorySize = 20;

	// GPT-Instanz
	//UPROPERTY()
	//UNN_Cpp_GPT* GPTInstance;
};
