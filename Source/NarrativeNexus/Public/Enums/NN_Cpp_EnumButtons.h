// NN_Cpp_EnumButtons.h

#pragma once

#include "CoreMinimal.h"
#include "NN_Cpp_EnumButtons.generated.h"

UENUM(BlueprintType)
enum class ETriggeredButton : uint8
{
	None UMETA(DisplayName = "None"),
	MainButton UMETA(DisplayName = "MainButton"),
	RepeatButton UMETA(DisplayName = "RepeatButton"),
	BackButton UMETA(DisplayName = "BackButton")
};