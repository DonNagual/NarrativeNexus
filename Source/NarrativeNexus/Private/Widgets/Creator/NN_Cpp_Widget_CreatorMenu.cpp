// Fill out your copyright notice in the Description page of Project Settings.
// NN_Cpp_Widget_CreatorMenu.cpp

#include "Widgets/Creator/NN_Cpp_Widget_CreatorMenu.h"

void UNN_Cpp_Widget_CreatorMenu::NativeConstruct()
{
	Super::NativeConstruct();

	WorldButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CreatorMenu::OnWorldButtonClicked);
	StoryButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CreatorMenu::OnStoryButtonClicked);
	CharacterButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CreatorMenu::OnCharacterButtonClicked);
}

void UNN_Cpp_Widget_CreatorMenu::OnWorldButtonClicked()
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->ShowCreatorWorlWidgetViaInterface();
	}
}

void UNN_Cpp_Widget_CreatorMenu::OnStoryButtonClicked()
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->ShowCreatorCharacterWidgetViaInterface();
	}
}

void UNN_Cpp_Widget_CreatorMenu::OnCharacterButtonClicked()
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->ShowCreatorStoryWidgetViaInterface();
	}
}
