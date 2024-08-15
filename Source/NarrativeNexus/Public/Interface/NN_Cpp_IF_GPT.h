// NN_Cpp_IF_GPT.h
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
//#include "Delegates/DelegateCombinations.h"
#include "GPT/NN_Cpp_GPT.h"
#include "NN_Cpp_IF_GPT.generated.h"

//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGPTResponseReceived, const FString&, Response);

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
	//virtual FOnGPTResponseReceived& GetOnGPTResponseReceived() = 0;
	
	virtual void InitializeGPT() = 0;
	virtual void DestroyGPT() = 0;

	virtual class UNN_Cpp_GPT* GetGPT() const = 0;
};
