// Fill out your copyright notice in the Description page of Project Settings.
// NN_Cpp_GameModeBase.cpp
#include "General/NN_Cpp_GameModeBase.h"

ANN_Cpp_GameModeBase::ANN_Cpp_GameModeBase()
{
	// Set the PlayerController class to our custom controller
	PlayerControllerClass = ANN_Cpp_PlayerController::StaticClass();
}

// Check if MainMenuWidgetClass is valid
void ANN_Cpp_GameModeBase::BeginPlay()
{
	Super::BeginPlay();
	
	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	if (PC)
	{
		// Show the mouse cursor
		PC->bShowMouseCursor = true;

		// Set input mode to UI only
		FInputModeUIOnly InputMode;
		InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
		PC->SetInputMode(InputMode);
	}
}
