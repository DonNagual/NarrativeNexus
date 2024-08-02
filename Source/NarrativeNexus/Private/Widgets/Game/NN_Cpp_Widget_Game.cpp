// Fill out your copyright notice in the Description page of Project Settings.
// NN_Cpp_Widget_Game.cpp

#include "Widgets/Game/NN_Cpp_Widget_Game.h"

void UNN_Cpp_Widget_Game::NativeConstruct()
{
	Super::NativeConstruct();

	// Hide all sub-widgets initially
	HideAllWidgets();
}

void UNN_Cpp_Widget_Game::HideAllWidgets()
{
	HideGameSubWidget(GameMenuWidget);
	HideGameSubWidget(GameChatWidget);
	HideGameSubWidget(GameInventoryWidget);
}

void UNN_Cpp_Widget_Game::HideGameSubWidget(UUserWidget* SubWidget)
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->HideWidget(SubWidget);
	}
}

void UNN_Cpp_Widget_Game::ShowGameMenuWidget()
{
	HideAllWidgets();
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->ShowWidget(GameMenuWidget);
	}
}

void UNN_Cpp_Widget_Game::ShowGameChatWidget()
{
	HideAllWidgets();
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->ShowWidget(GameChatWidget);
	}
}

void UNN_Cpp_Widget_Game::ShowGameInventoryWidget()
{
	HideAllWidgets();
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->ShowWidget(GameInventoryWidget);
	}
}

