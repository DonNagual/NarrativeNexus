// NN_Cpp_GPTSummaryGenerator.h

#pragma once

#include "CoreMinimal.h"
#include "NN_Cpp_GPTSummaryGenerator.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_GPTSummaryGenerator : public UObject
{
	GENERATED_BODY()
	
public:
	void GenerateShortSummary(const FString& Summary, TFunction<void(const FString&)> OnShortSummaryGenerated);
	void GenerateMaxSummary(const FString& Summary, TFunction<void(const FString&)> OnMaxSummaryGenerated);
	void GenerateImageSummary(const FString& Summary, TFunction<void(const FString&)> OnImageSummaryGenerated);
};
