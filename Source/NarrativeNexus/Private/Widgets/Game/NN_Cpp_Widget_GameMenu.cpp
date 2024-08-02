// Fill out your copyright notice in the Description page of Project Settings.
// NN_Cpp_Widget_GameMenu.cpp

#include "Widgets/Game/NN_Cpp_Widget_GameMenu.h"

void UNN_Cpp_Widget_GameMenu::NativeConstruct()
{
	Super::NativeConstruct();

	ChatButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_GameMenu::OnChatButtonClicked);
	InventoryButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_GameMenu::OnInventoryButtonClicked);
}

void UNN_Cpp_Widget_GameMenu::OnChatButtonClicked()
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->ShowGameChatWidgetViaInterface();
	}
}

void UNN_Cpp_Widget_GameMenu::OnInventoryButtonClicked()
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->ShowGameInventoryWidgetViaInterface();
	}
}
