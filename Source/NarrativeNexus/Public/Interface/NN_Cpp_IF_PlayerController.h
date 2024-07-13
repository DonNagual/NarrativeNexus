// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "NN_Cpp_IF_PlayerController.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UNN_Cpp_IF_PlayerController : public UInterface
{
	GENERATED_BODY()
};

class NARRATIVENEXUS_API INN_Cpp_IF_PlayerController
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void QuitGame() = 0;

	virtual void ShowSubWidget(UUserWidget* SubWidget) = 0;
	virtual void HideAllSubWidgets() = 0;

	virtual UUserWidget* GetMainMenuWidget() = 0;
	virtual UUserWidget* GetMainOptionsWidget() = 0;
	virtual void SetCategoryWidget(class UUserWidget* InCategoryWidget) = 0;
};
