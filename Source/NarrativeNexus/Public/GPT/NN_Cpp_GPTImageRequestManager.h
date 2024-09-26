// NN_Cpp_GPTImageRequestManager.h

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GPT/NN_Cpp_JSONHandler.h"
#include "GPT/NN_Cpp_HTTPRequestHandler.h"
#include "GPT/NN_Cpp_GPTConversationManager.h"
#include "GPT/NN_Cpp_GPTImageResponseManager.h"
#include "Structs/NN_Cpp_GPTRequestParams.h"
#include "NN_Cpp_GPTImageRequestManager.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_GPTImageRequestManager : public UObject
{
	GENERATED_BODY()
	
public:
	void SendImageRequest(
		const FString& ApiKey,
		const FGPTRequestImageParams& Params,
		UNN_Cpp_JSONHandler* JSONHandlerInstance,
		UNN_Cpp_HTTPRequestHandler* HTTPRequestHandlerInstnce,
		UNN_Cpp_GPTConversationManager* ConversationManager,
		TFunction<void(UTexture2D*)> OnImageResponseReceived
	);

	void SetImageResponseManager(UNN_Cpp_GPTImageResponseManager* InImageResponseManager);

private:

	UNN_Cpp_GPTImageResponseManager* ImageResponseManagerInstance;
};
