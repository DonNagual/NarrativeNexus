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

	virtual void ShowMainMenuViaInterface() = 0;
	virtual void ShowMainGuideViaInterface() = 0;
	
};
