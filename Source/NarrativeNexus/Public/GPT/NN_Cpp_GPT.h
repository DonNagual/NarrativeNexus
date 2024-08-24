// NN_Cpp_GPT.h

#pragma once

#include "CoreMinimal.h"
#include "Misc/Base64.h"
#include "ImageUtils.h"
#include "Http.h"
#include "Structs/NN_Cpp_GPTRequestParams.h"
#include "GPT/NN_Cpp_JSONHandler.h"
#include "GPT/NN_Cpp_HTTPRequestHandler.h"
#include "GPT/NN_Cpp_GPTTextRequestManager.h"
#include "GPT/NN_Cpp_GPTTextResponseManager.h"
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
	void SetTextRequestManager(UNN_Cpp_GPTTextRequestManager* InTextRequestManager);
	void SetTextResponseManager(UNN_Cpp_GPTTextResponseManager* InTextResponseManager);
	void SetConversationManager(UNN_Cpp_GPTConversationManager* InConversationManager);

	void SendMessageToGPT(const FString& Message);
	FString GetLastResponse() const;

	void GenerateShortSummaryFromConversation(const FString& Summary, TFunction<void(const FString&)> OnShortSummaryGenerated);
	void GenerateMaxSummaryFromConversation(const FString& Summary, TFunction<void(const FString&)> OnMaxSummaryGenerated);
	void GenerateImageSummaryFromConversation(const FString& Summary, TFunction<void(const FString&)> OnImageSummaryGenerated);
	void GenerateChatImageFromConversation(const FString& Summary, TFunction<void(UTexture2D*)> OnChatImageGenerated);

private:
	// Callback method when a response is received
	void OnImageResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful, TFunction<void(UTexture2D*)> OnImageGenerated);

	// The response from GPT will be stored here for further use
	FString LastResponse;

	FString ApiKey;

	UPROPERTY()
	UNN_Cpp_JSONHandler* JSONHandlerInstance;

	UPROPERTY()
	UNN_Cpp_HTTPRequestHandler* HTTPRequestHandlerInstance;

	UPROPERTY()
	UNN_Cpp_GPTTextRequestManager* TextRequestManagerInstance;

	UPROPERTY()
	UNN_Cpp_GPTTextResponseManager* TextResponseManagerInstance;

	UPROPERTY()
	UNN_Cpp_GPTConversationManager* ConversationManagerInstance;
};
