// NN_Cpp_GPTImageResponseManager.h

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Misc/Base64.h"
#include "ImageUtils.h"
#include "GPT/NN_Cpp_JSONHandler.h"
#include "NN_Cpp_GPTImageResponseManager.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_GPTImageResponseManager : public UObject
{
	GENERATED_BODY()
	
public:
	void ProcessImageResponse(
		const FString& ResponseString,
		UNN_Cpp_JSONHandler* JSONHandlerInstance,
		TFunction<void(UTexture2D*)> OnImageGenerated
	);

private:
	UTexture2D* ConvertBase64ToTexture(const FString& Base64String);
};
