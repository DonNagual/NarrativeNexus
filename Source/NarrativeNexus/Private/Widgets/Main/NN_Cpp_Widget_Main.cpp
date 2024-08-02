// Fill out your copyright notice in the Description page of Project Settings.
// NN_Cpp_Widget_Main.cpp

#include "Widgets/Main/NN_Cpp_Widget_Main.h"

void UNN_Cpp_Widget_Main::NativeConstruct()
{
	Super::NativeConstruct();

	// Hide all sub-widgets initially
	HideAllWidgets();
}

void UNN_Cpp_Widget_Main::HideAllWidgets()
{
	HideMainSubWidget(MainMenuWidget);
	HideMainSubWidget(MainGuideWidget);
	HideMainSubWidget(MainOptionsWidget);
	HideMainSubWidget(MainTutorialWidget);
	HideMainSubWidget(MainCreditsWidget);
}

void UNN_Cpp_Widget_Main::HideMainSubWidget(UUserWidget* SubWidget)
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->HideWidget(SubWidget);
	}
}

void UNN_Cpp_Widget_Main::ShowMainMenuWidget()
{
	HideAllWidgets();
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->ShowWidget(MainMenuWidget);
	}
}

void UNN_Cpp_Widget_Main::ShowMainGuideWidget()
{
	HideAllWidgets();
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->ShowWidget(MainGuideWidget);
	}
}

void UNN_Cpp_Widget_Main::ShowMainOptionsWidget()
{
	HideAllWidgets();
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->ShowWidget(MainOptionsWidget);
	}
}

void UNN_Cpp_Widget_Main::ShowMainTutorialWidget()
{
	HideAllWidgets();
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->ShowWidget(MainTutorialWidget);
	}
}

void UNN_Cpp_Widget_Main::ShowMainCreditsWidget()
{
	HideAllWidgets();
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->ShowWidget(MainCreditsWidget);
	}
}