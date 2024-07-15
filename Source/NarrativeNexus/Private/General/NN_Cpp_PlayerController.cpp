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

//UUserWidget* ANN_Cpp_PlayerController::GetMainWidget()
//{
//	if (CategoryWidget)
//	{
//		auto MainWidget = Cast<UNN_Cpp_Widget_Category>(CategoryWidget);
//		if (MainWidget)
//		{
//			return MainWidget->GetMainWidget();
//		}
//	}
//	return nullptr;
//}

//void ANN_Cpp_PlayerController::ShowSubWidget(UUserWidget* SubWidget)
//{
//	if (CategoryWidget)
//	{
//		if (auto MainWidget = Cast<UNN_Cpp_Widget_Main>(CategoryWidget))
//		{
//			MainWidget->HideAllSubWidgets();
//			MainWidget->ShowSubWidget(SubWidget);
//		}
//		else if (auto CreatorWidget = Cast<UNN_Cpp_Widget_Creator>(CategoryWidget))
//		{
//			CreatorWidget->HideAllSubWidgets();
//			CreatorWidget->ShowSubWidget(SubWidget);
//		}
//	}
//}

//void ANN_Cpp_PlayerController::HideAllSubWidgets()
//{
//	if (CategoryWidget)
//	{
//		if (auto MainWidget = Cast<UNN_Cpp_Widget_Main>(CategoryWidget))
//		{
//			MainWidget->HideAllSubWidgets();
//		}
//		else if (auto CreatorWidget = Cast<UNN_Cpp_Widget_Creator>(CategoryWidget))
//		{
//			CreatorWidget->HideAllSubWidgets();
//		}
//		/*else if (auto GameWidget = Cast<UNN_Cpp_Widget_Game>(CategoryWidget))
//		{
//			GameWidget->HideAllSubWidgets();
//		}*/
//	}
//}


//UUserWidget* ANN_Cpp_PlayerController::GetMainMenuWidget()
//{
//	if (auto MainWidget = Cast<UNN_Cpp_Widget_Main>(CategoryWidget))
//	{
//		return MainWidget->MainMenuWidget;
//	}
//	return nullptr;
//}
//
//UUserWidget* ANN_Cpp_PlayerController::GetMainOptionsWidget()
//{
//	if (auto MainWidget = Cast<UNN_Cpp_Widget_Main>(CategoryWidget))
//	{
//		return MainWidget->MainOptionsWidget;
//	}
//	return nullptr;
//}

void ANN_Cpp_PlayerController::SetCategoryWidget(UUserWidget* InCategoryWidget)
{
	CategoryWidget = InCategoryWidget;
}

