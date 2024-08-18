// NN_Cpp_JSONHandler.h

#pragma once

#include "CoreMinimal.h"
#include "NN_Cpp_JSONHandler.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_JSONHandler : public UObject
{
	GENERATED_BODY()
	
public:
	FString SerializeJSON(TSharedPtr<FJsonObject> JsonObject) const;

	TSharedPtr<FJsonObject> DeserializeJSON(const FString& JsonString) const;

};
