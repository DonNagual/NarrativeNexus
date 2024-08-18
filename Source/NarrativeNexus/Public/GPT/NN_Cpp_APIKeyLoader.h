// NN_Cpp_APIKeyLoader.h

#pragma once

#include "CoreMinimal.h"
#include "NN_Cpp_APIKeyLoader.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_APIKeyLoader : public UObject
{
	GENERATED_BODY()
	
public:
	FString LoadAPIKey(const FString& FilePath) const;

};
