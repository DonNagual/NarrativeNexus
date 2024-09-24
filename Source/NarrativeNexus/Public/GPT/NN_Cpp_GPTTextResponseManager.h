// NN_Cpp_GPTTextResponseManager.h

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GPT/NN_Cpp_JSONHandler.h"
#include "GPT/NN_Cpp_GPTConversationManager.h"
#include "Structs/NN_Cpp_GPTRequestParams.h"
#include "NN_Cpp_GPTTextResponseManager.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_GPTTextResponseManager : public UObject
{
	GENERATED_BODY()
	
public:
	void ProcessResponse(
		const FString& ResponseString,
		UNN_Cpp_JSONHandler* JSONHandlerInstance,
		UNN_Cpp_GPTConversationManager* ConversationManager,
		TFunction<void(const FString&)> OnResponseProcessed
	);

	void SummaryResponse(
		const FString& ResponseString,
		UNN_Cpp_JSONHandler* JSONHandlerInstance,
		UNN_Cpp_GPTConversationManager* ConversationManager,
		TFunction<void(const FString&)> OnSummaryResponseProcessed
	);

	void ImageDescriptionResponse(
		const FString& ResponseString,
		UNN_Cpp_JSONHandler* JSONHandlerInstance,
		UNN_Cpp_GPTConversationManager* ConversationManager,
		TFunction<void(const FString&)> OnImageDescriptionResponseReceived
	);

	void InfoAboutConversationResponse(
		const FString& ResponseString,
		UNN_Cpp_JSONHandler* JSONHandlerInstance,
		UNN_Cpp_GPTConversationManager* ConversationManager,
		TFunction<void(const FString&)> OnInfoAboutConversationResponseReceived
	);
};
