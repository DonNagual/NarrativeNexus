// NN_Cpp_GPTRequestParams.h

#pragma once

#include "CoreMinimal.h"
#include "NN_Cpp_GPTRequestParams.generated.h"

USTRUCT()
struct FGPTRequestParams
{
    GENERATED_BODY()

    // Standardconstructor
    FGPTRequestParams()
        : MaxTokens(0) {}

    // Constructor with parameters
    FGPTRequestParams(const FString& InSummary, const FString& InInstruction, int32 InMaxTokens)
        : Summary(InSummary), Instruction(InInstruction), MaxTokens(InMaxTokens) {}

    // The main content of the request
    FString Summary;

    // The instruction to the model on how it should process the request
    FString Instruction;

    // The maximum number of tokens to be used for the response
    int32 MaxTokens;

    TArray<TSharedPtr<FJsonObject>> ConversationHistory;
};
