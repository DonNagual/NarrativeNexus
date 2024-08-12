// NN_Cpp_ChatGPT.h
#pragma once

#include "CoreMinimal.h"
#include "Misc/Base64.h"
#include "ImageUtils.h"
#include "Http.h"
#include "Interface/NN_Cpp_IF_ChatGPT.h"
#include "NN_Cpp_ChatGPT.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_ChatGPT : public UObject, public INN_Cpp_IF_ChatGPT
{
	GENERATED_BODY()

public:
	// Interface methods
	virtual FOnChatGPTResponseReceived& GetOnChatGPTResponseReceived() override;

	virtual void SendMessageToChatGPT(const FString& Message) override;
	virtual void ResetConversation() override;
	virtual FString GetLastResponse() const override;
	virtual const TArray<TSharedPtr<FJsonObject>>& GetConversationHistory() const override;
	virtual TArray<TSharedPtr<FJsonObject>>& GetMutableConversationHistory() override;
	virtual void GenerateShortSummaryFromConversation(const FString& Summary, TFunction<void(const FString&)> OnShortSummaryGenerated) override;
	virtual void GenerateMaxSummaryFromConversation(const FString& Summary, TFunction<void(const FString&)> OnMaxSummaryGenerated) override;
	virtual void GenerateImageSummaryFromConversation(const FString& Summary, TFunction<void(const FString&)> OnImageSummaryGenerated) override;
	virtual void GenerateChatImageFromConversation(const FString& Summary, TFunction<void(UTexture2D*)> OnChatImageGenerated) override;

	// Static method to create an instance of the ChatGPT
	static UNN_Cpp_ChatGPT* CreateChatGPT(UObject* Outer);

private:
	// Callback method when a response is received
	void OnTextResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
	void OnImageResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful, TFunction<void(UTexture2D*)> OnImageGenerated);
	
	// The response received delegate
	FOnChatGPTResponseReceived OnChatGPTResponseReceived;

	// The response from ChatGPT will be stored here for further use
	FString LastResponse;

	// Store the entire conversation history
	TArray<TSharedPtr<FJsonObject>> ConversationHistory;
};
