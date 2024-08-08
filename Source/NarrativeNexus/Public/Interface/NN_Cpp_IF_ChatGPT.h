// NN_Cpp_IF_ChatGPT.h
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Delegates/DelegateCombinations.h"
#include "NN_Cpp_IF_ChatGPT.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChatGPTResponseReceived, const FString&, Response);

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UNN_Cpp_IF_ChatGPT : public UInterface
{
	GENERATED_BODY()
};

class NARRATIVENEXUS_API INN_Cpp_IF_ChatGPT
{
	GENERATED_BODY()

public:

	// Method to send a message to ChatGPT
	virtual void SendMessageToChatGPT(const FString& Message) = 0;
	// Reset the complete conservation 
	virtual void ResetConversation() = 0;
	// Getter for the last response
	virtual FString GetLastResponse() const = 0;
	// Access to the conversation history (const)
	virtual const TArray<TSharedPtr<FJsonObject>>& GetConversationHistory() const = 0;
	// Access to the conversation history (mutable)
	virtual TArray<TSharedPtr<FJsonObject>>& GetMutableConversationHistory() = 0;
	// Method to get the delegate for ChatGPT responses
	virtual FOnChatGPTResponseReceived& GetOnChatGPTResponseReceived() = 0;

};
