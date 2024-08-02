// Fill out your copyright notice in the Description page of Project Settings.
// NN_Cpp_IF_WidgetController.h
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "NN_Cpp_IF_WidgetController.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UNN_Cpp_IF_WidgetController : public UInterface
{
	GENERATED_BODY()
};

class NARRATIVENEXUS_API INN_Cpp_IF_WidgetController
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void ShowWidget(UUserWidget* SubWidget) = 0;
	virtual void HideWidget(UUserWidget* SubWidget) = 0;

	// ############### Main ###############

	virtual void ShowMainMenuWidgetViaInterface() = 0;
	virtual void ShowMainGuideWidgetViaInterface() = 0;
	virtual void ShowMainOptionsWidgetViaInterface() = 0;
	virtual void ShowMainTutorialWidgetViaInterface() = 0;
	virtual void ShowMainCreditsWidgetViaInterface() = 0;

	// ############### Creator ###############

	virtual void ShowCreatorMenuWidgetViaInterface() = 0;
	virtual void ShowCreatorWorlWidgetViaInterface() = 0;
	virtual void ShowCreatorCharacterWidgetViaInterface() = 0;
	virtual void ShowCreatorStoryWidgetViaInterface() = 0;

	// ############### Game ###############

	virtual void ShowGameMenuWidgetViaInterface() = 0;
	virtual void ShowGameChatWidgetViaInterface() = 0;
	virtual void ShowGameInventoryWidgetViaInterface() = 0;
	
};
