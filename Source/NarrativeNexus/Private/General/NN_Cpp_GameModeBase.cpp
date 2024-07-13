// Fill out your copyright notice in the Description page of Project Settings.

#include "General/NN_Cpp_GameModeBase.h"

ANN_Cpp_GameModeBase::ANN_Cpp_GameModeBase()
{
	// Set the PlayerController class to our custom controller
	PlayerControllerClass = ANN_Cpp_PlayerController::StaticClass();

	// Set the HUD class to our custom class
    HUDClass = ANN_Cpp_HUD::StaticClass();
}

// Check if MainMenuWidgetClass is valid
void ANN_Cpp_GameModeBase::BeginPlay()
{
	Super::BeginPlay();
	
}
