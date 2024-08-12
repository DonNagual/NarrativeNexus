// NN_Cpp_IF_GPT.h
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Delegates/DelegateCombinations.h"
#include "NN_Cpp_IF_GPT.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGPTResponseReceived, const FString&, Response);

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UNN_Cpp_IF_GPT : public UInterface
{
	GENERATED_BODY()
};

class NARRATIVENEXUS_API INN_Cpp_IF_GPT
{
	GENERATED_BODY()

public:
	// Method to get the delegate for ChatGPT responses
	virtual FOnGPTResponseReceived& GetOnGPTResponseReceived() = 0;

	// Method to send a message to ChatGPT
	virtual void SendMessageToGPT(const FString& Message) = 0;
	// Reset the complete conservation 
	virtual void ResetConversation() = 0;
	// Getter for the last response
	virtual FString GetLastResponse() const = 0;
	// Access to the conversation history (const)
	virtual const TArray<TSharedPtr<FJsonObject>>& GetConversationHistory() const = 0;
	// Access to the conversation history (mutable)
	virtual TArray<TSharedPtr<FJsonObject>>& GetMutableConversationHistory() = 0;
	// Method to generate short summary from conversation
	virtual void GenerateShortSummaryFromConversation(const FString& Summary, TFunction<void(const FString&)> OnShortSummaryGenerated) = 0;
	// Method to generate max summary from conversation
	virtual void GenerateMaxSummaryFromConversation(const FString& Summary, TFunction<void(const FString&)> OnMaxSummaryGenerated) = 0;
	// Method to generate image summary from conversation
	virtual void GenerateImageSummaryFromConversation(const FString& Summary, TFunction<void(const FString&)> OnImageSummaryGenerated) = 0;
	// Method to generate an image from conversation
	virtual void GenerateChatImageFromConversation(const FString& Summary, TFunction<void(UTexture2D*)> OnChatImageGenerated) = 0;

};
