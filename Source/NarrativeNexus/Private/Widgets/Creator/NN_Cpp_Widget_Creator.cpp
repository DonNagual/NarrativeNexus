// Fill out your copyright notice in the Description page of Project Settings.
// NN_Cpp_Widget_Creator.cpp

#include "Widgets/Creator/NN_Cpp_Widget_Creator.h"

void UNN_Cpp_Widget_Creator::NativeConstruct()
{
	Super::NativeConstruct();

	// Hide all sub-widgets initially
	HideAllWidgets();
}

void UNN_Cpp_Widget_Creator::HideAllWidgets()
{
	HideCreatorSubWidget(CreatorMenuWidget);
	HideCreatorSubWidget(CreatorWorldWidget);
	HideCreatorSubWidget(CreatorCharacterWidget);
	HideCreatorSubWidget(CreatorStoryWidget);
}

void UNN_Cpp_Widget_Creator::HideCreatorSubWidget(UUserWidget* SubWidget)
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->HideWidget(SubWidget);
	}
}

void UNN_Cpp_Widget_Creator::ShowCreatorMenuWidget()
{
	HideAllWidgets();
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->ShowWidget(CreatorMenuWidget);
	}
}

void UNN_Cpp_Widget_Creator::ShowCreatorWorlWidget()
{
	HideAllWidgets();
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->ShowWidget(CreatorWorldWidget);
	}
}

void UNN_Cpp_Widget_Creator::ShowCreatorCharacterWidget()
{
	HideAllWidgets();
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->ShowWidget(CreatorCharacterWidget);
	}
}

void UNN_Cpp_Widget_Creator::ShowCreatorStoryWidget()
{
	HideAllWidgets();
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->ShowWidget(CreatorStoryWidget);
	}
}