// NN_Cpp_GPTConversationManager.h

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NN_Cpp_GPTConversationManager.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_GPTConversationManager : public UObject
{
	GENERATED_BODY()
	
public:
	void AddMessageToHistory(const FString& Role, const FString Content);
	const TArray<TSharedPtr<FJsonObject>>& GetConversationHistory() const;
	void ClearHistory();

private:
	TArray<TSharedPtr<FJsonObject>> ConversationHistory;
	const int32 MaxHistorySize = 20;

	void TrimHistory();
};
