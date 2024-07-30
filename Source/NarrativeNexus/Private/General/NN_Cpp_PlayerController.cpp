// Fill out your copyright notice in the Description page of Project Settings.
// NN_Cpp_PlayerController.cpp
#include "General/NN_Cpp_PlayerController.h"

void ANN_Cpp_PlayerController::BeginPlay()
{
	Super::BeginPlay();

	InitializeWidgets();
}

void ANN_Cpp_PlayerController::InitializeWidgets()
{
	UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), CategoryWidgetClass);
	if (Widget)
	{
		Widget->AddToViewport();
		CategoryWidget = Cast<UNN_Cpp_Widget_Category>(Widget);
	}
}

void ANN_Cpp_PlayerController::ShowWidget(UUserWidget* SubWidget)
{
	if (SubWidget)
	{
		SubWidget->SetVisibility(ESlateVisibility::Visible);
	}
}

void ANN_Cpp_PlayerController::HideWidget(UUserWidget* SubWidget)
{
	if (SubWidget)
	{
		SubWidget->SetVisibility(ESlateVisibility::Collapsed);
	}
}

void ANN_Cpp_PlayerController::ShowMainMenuViaInterface()
{
	(Cast<UNN_Cpp_Widget_Main>(CategoryWidget->MainWidget))->ShowMainMenuWidget();
}

void ANN_Cpp_PlayerController::ShowMainGuideViaInterface()
{
	(Cast<UNN_Cpp_Widget_Main>(CategoryWidget->MainWidget))->ShowMainGuideWidget();
}
