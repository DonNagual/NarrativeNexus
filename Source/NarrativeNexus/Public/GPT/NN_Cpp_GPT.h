// NN_Cpp_GPT.h

#pragma once

#include "CoreMinimal.h"
#include "Misc/Base64.h"
#include "ImageUtils.h"
#include "Http.h"
#include "Structs/NN_Cpp_GPTRequestParams.h"
#include "GPT/NN_Cpp_JSONHandler.h"
#include "GPT/NN_Cpp_HTTPRequestHandler.h"
#include "GPT/NN_Cpp_GPTRequestManager.h"
#include "GPT/NN_Cpp_GPTResponseManager.h"
#include "Delegates/DelegateCombinations.h"
#include "NN_Cpp_GPT.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_GPT : public UObject
{
	GENERATED_BODY()

public:

	// The response received delegate
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGPTResponseReceived, const FString&, Response);
	FOnGPTResponseReceived OnGPTResponseReceived;

	void SetAPIKey(const FString& InApiKey);
	void SetJSONHandler(UNN_Cpp_JSONHandler* InJSONHandler);
	void SetHTTPRequestHandler(UNN_Cpp_HTTPRequestHandler* InHTTPRequestHandler);
	void SetRequestManager(UNN_Cpp_GPTRequestManager* InRequestManager);
	void SetResponseManager(UNN_Cpp_GPTResponseManager* InResponseManager);
	void SetConversationManager(UNN_Cpp_GPTConversationManager* InConversationManager);

	void SendMessageToGPT(const FString& Message);
	void ResetConversation();
	FString GetLastResponse() const;
	const TArray<TSharedPtr<FJsonObject>>& GetConversationHistory() const;
	TArray<TSharedPtr<FJsonObject>>& GetMutableConversationHistory();
	void GenerateShortSummaryFromConversation(const FString& Summary, TFunction<void(const FString&)> OnShortSummaryGenerated);
	void GenerateMaxSummaryFromConversation(const FString& Summary, TFunction<void(const FString&)> OnMaxSummaryGenerated);
	void GenerateImageSummaryFromConversation(const FString& Summary, TFunction<void(const FString&)> OnImageSummaryGenerated);
	void GenerateChatImageFromConversation(const FString& Summary, TFunction<void(UTexture2D*)> OnChatImageGenerated);

private:
	// Callback method when a response is received
	void OnImageResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful, TFunction<void(UTexture2D*)> OnImageGenerated);

	// The response from GPT will be stored here for further use
	FString LastResponse;

	// Store the entire conversation history
	TArray<TSharedPtr<FJsonObject>> ConversationHistory;

	FString ApiKey;

	UPROPERTY()
	UNN_Cpp_JSONHandler* JSONHandlerInstance;

	UPROPERTY()
	UNN_Cpp_HTTPRequestHandler* HTTPRequestHandlerInstance;

	UPROPERTY()
	UNN_Cpp_GPTRequestManager* RequestManagerInstance;

	UPROPERTY()
	UNN_Cpp_GPTResponseManager* ResponseManagerInstance;

	UPROPERTY()
	UNN_Cpp_GPTConversationManager* ConversationManagerInstance;
};
