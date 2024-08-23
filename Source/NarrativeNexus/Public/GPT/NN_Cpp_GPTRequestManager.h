// NN_Cpp_GPTRequestManager.h

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GPT/NN_Cpp_JSONHandler.h"
#include "GPT/NN_Cpp_HTTPRequestHandler.h"
#include "GPT/NN_Cpp_GPTConversationManager.h"
#include "GPT/NN_Cpp_GPTResponseManager.h"
#include "Structs/NN_Cpp_GPTRequestParams.h"
#include "NN_Cpp_GPTRequestManager.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_GPTRequestManager : public UObject
{
	GENERATED_BODY()
	
public:
	void SendRequest(
		const FString& ApiKey,
		const FGPTRequestParams& Params,
		UNN_Cpp_JSONHandler* JSONHandlerInstance,
		UNN_Cpp_HTTPRequestHandler* HTTPRequestHandlerInstance,
		UNN_Cpp_GPTConversationManager* ConversationManager,
		TFunction<void(const FString&)> OnResponseReceived
	);

	void SetResponseManager(UNN_Cpp_GPTResponseManager* InResponseManager);

private:

	UNN_Cpp_GPTResponseManager* ResponseManagerInstance;
};
