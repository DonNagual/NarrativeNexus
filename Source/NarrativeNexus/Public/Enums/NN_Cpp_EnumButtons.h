// NN_Cpp_EnumButtons.h

#pragma once

#include "CoreMinimal.h"
#include "NN_Cpp_EnumButtons.generated.h"

UENUM(BlueprintType)
enum class ETriggeredButton : uint8
{
	// ############### GameChat Buttons ###############

	None UMETA(DisplayName = "None"),
	MainButton UMETA(DisplayName = "MainButton"),
	GameButton UMETA(DisplayName = "GameButton"),
	CreatorButton UMETA(DisplayName = "CreatorButton"),
	ResetButton UMETA(DisplayName = "ResetButton"),
	ReaktionButton UMETA(DisplayName = "ReaktionButton"),
	BackButton UMETA(DisplayName = "BackButton")
};
