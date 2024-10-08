// NN_Cpp_GPTTextRequestManager.h

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GPT/NN_Cpp_JSONHandler.h"
#include "GPT/NN_Cpp_HTTPRequestHandler.h"
#include "GPT/NN_Cpp_GPTConversationManager.h"
#include "GPT/NN_Cpp_GPTTextResponseManager.h"
#include "Structs/NN_Cpp_GPTRequestParams.h"
#include "NN_Cpp_GPTTextRequestManager.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_GPTTextRequestManager : public UObject
{
	GENERATED_BODY()
	
public:
	void SendTextRequest(
		const FString& ApiKey,
		const FGPTRequestParams& Params,
		UNN_Cpp_JSONHandler* JSONHandlerInstance,
		UNN_Cpp_HTTPRequestHandler* HTTPRequestHandlerInstance,
		UNN_Cpp_GPTConversationManager* ConversationManager,
		TFunction<void(const FString&)> OnTextResponseReceived
	);

	void SendSummaryRequest(
		const FString& ApiKey,
		const FGPTRequestHistoryParams& Params,
		UNN_Cpp_JSONHandler* JSONHandlerInstance,
		UNN_Cpp_HTTPRequestHandler* HTTPRequestHandlerInstance,
		UNN_Cpp_GPTConversationManager* ConversationManager,
		TFunction<void(const FString&)> OnSummaryResponseReceived
	);

	void SendImageDescriptionRequest(
		const FString& ApiKey,
		const FGPTRequestImageDescriptionParams& Params,
		UNN_Cpp_JSONHandler* JSONHandlerInstance,
		UNN_Cpp_HTTPRequestHandler* HTTPRequestHandlerInstance,
		UNN_Cpp_GPTConversationManager* ConversationManager,
		TFunction<void(const FString&)> OnImageDescriptionResponseReceived
	);

	void SendInfoAboutConversationRequest(
		const FString& ApiKey,
		const FGPTRequestInfoAboutConversationParams& Params,
		UNN_Cpp_JSONHandler* JSONHandlerInstance,
		UNN_Cpp_HTTPRequestHandler* HTTPRequestHandlerInstance,
		UNN_Cpp_GPTConversationManager* ConversationManager,
		TFunction<void(const FString&)> OnInfoAboutConversationResponseReceived
	);

	void SendSuggestionsFromConversationRequest(
		const FString& ApiKey,
		const FGPTRequestSuggestionsFromConversationParams& Params,
		UNN_Cpp_JSONHandler* JSONHandlerInstance,
		UNN_Cpp_HTTPRequestHandler* HTTPRequestHandlerInstance,
		UNN_Cpp_GPTConversationManager* ConversationManager,
		TFunction<void(const FString&)> OnSuggestionsFromConversationResponseReceived
	);

	void SetTextResponseManager(UNN_Cpp_GPTTextResponseManager* InTextResponseManager);

private:

	UNN_Cpp_GPTTextResponseManager* TextResponseManagerInstance;
};
