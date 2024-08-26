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
#include "GPT/NN_Cpp_GPTImageRequestManager.h"
#include "GPT/NN_Cpp_GPTImageResponseManager.h"
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
	void SetImageRequestManager(UNN_Cpp_GPTImageRequestManager* InImageRequestManager);
	void SetImageResponseManager(UNN_Cpp_GPTImageResponseManager* InImageResponseManager);
	void SetConversationManager(UNN_Cpp_GPTConversationManager* InConversationManager);

	void SendMessageToGPT(const FString& Message);
	FString GetLastResponse() const;
	UNN_Cpp_GPTConversationManager* GetConversationManager() const;

	void GenerateShortSummaryFromConversation(const FString& Summary, TFunction<void(const FString&)> OnShortSummaryGenerated);
	void GenerateMaxSummaryFromConversation(const FString& Summary, TFunction<void(const FString&)> OnMaxSummaryGenerated);
	void GenerateImageDescriptionFromConversation(const FString& Summary, TFunction<void(const FString&)> OnImageSummaryGenerated);
	
	void GenerateImageFromDescription(const FString& Summary, TFunction<void(UTexture2D*)> OnImageGenerated);

private:

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
	UNN_Cpp_GPTImageRequestManager* ImageRequestManagerInstance;

	UPROPERTY()
	UNN_Cpp_GPTImageResponseManager* ImageResponseManagerInstance;

	UPROPERTY()
	UNN_Cpp_GPTConversationManager* ConversationManagerInstance;
};
