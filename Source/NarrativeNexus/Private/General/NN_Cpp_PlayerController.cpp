// Fill out your copyright notice in the Description page of Project Settings.
// NN_Cpp_PlayerController.cpp
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
	CategoryWidget = Cast<UNN_Cpp_Widget_Category>(Widget);
	return Widget;
}

void ANN_Cpp_PlayerController::ShowSubWidget(UUserWidget* SubWidget)
{
	if (SubWidget)
	{
		SubWidget->SetVisibility(ESlateVisibility::Visible);
		
		FString widgetName = SubWidget->GetName();
		if (widgetName == TEXT("MainWidget"))
		{
			(Cast<UNN_Cpp_Widget_Main>(CategoryWidget->MainWidget))->ShowMainMenuSubWidget();
		}
		
		//if (UNN_Cpp_Widget_Main* Main = Cast<UNN_Cpp_Widget_Main>(SubWidget))
		//{
		//	FString widgetName = SubWidget->GetName();
		//	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Purple, widgetName);

		//	Main->ShowMainMenuSubWidget();
		//}
	}
}

void ANN_Cpp_PlayerController::HideSubWidget(UUserWidget* SubWidget)
{
	if (SubWidget)
	{
		SubWidget->SetVisibility(ESlateVisibility::Collapsed);

		FString widgetName = SubWidget->GetName();
		if (widgetName == TEXT("MainMenuWidget"))
		{
			(Cast<UNN_Cpp_Widget_Main>(CategoryWidget->MainWidget))->ShowMainGuideSubWidget();
		}
	}
}

UUserWidget* ANN_Cpp_PlayerController::GetMainGuideWidget()
{
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::White, "F00");	
	
	(Cast<UNN_Cpp_Widget_Main>(CategoryWidget->MainWidget))->ShowMainGuideSubWidget();
	
	return 0;
}
