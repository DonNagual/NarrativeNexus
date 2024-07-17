// Fill out your copyright notice in the Description page of Project Settings.


#include "General/NN_Cpp_PlayerController.h"

void ANN_Cpp_PlayerController::BeginPlay()
{
	Super::BeginPlay();

	// Show the mouse cursor
	bShowMouseCursor = true;

	// Set input mode to UI only
	FInputModeUIOnly InputMode;
	InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	SetInputMode(InputMode);
}

void ANN_Cpp_PlayerController::QuitGame()
{
	// Exit the game
	ConsoleCommand("quit");
}

UUserWidget* ANN_Cpp_PlayerController::CreateAndAddWidget(TSubclassOf<UUserWidget> WidgetClass)
{
	if (!WidgetClass) return nullptr;

	UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), WidgetClass);
	if (Widget)
	{
		Widget->AddToViewport();
	}
	return Widget;
}

void ANN_Cpp_PlayerController::ShowSubWidget(UUserWidget* SubWidget)
{
	if (SubWidget)
	{
		SubWidget->SetVisibility(ESlateVisibility::Visible);
	}
}

void ANN_Cpp_PlayerController::HideSubWidget(UUserWidget* SubWidget)
{
	if (SubWidget)
	{
		SubWidget->SetVisibility(ESlateVisibility::Collapsed);
	}
}
