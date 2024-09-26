// NN_Cpp_IF_GPT.h

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
//#include "GPT/NN_Cpp_GPT.h"
#include "NN_Cpp_IF_GPT.generated.h"

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
	virtual void InitializeGPT() = 0;
	virtual void DestroyGPT() = 0;
	virtual class UNN_Cpp_GPT* GetGPT() const = 0;
	virtual void SetGPT(UNN_Cpp_GPT* InGPT) = 0;
};
