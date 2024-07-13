// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/Creator/NN_Cpp_Widget_CreatorMenu.h"

void UNN_Cpp_Widget_CreatorMenu::NativeConstruct()
{
	Super::NativeConstruct();
}

void UNN_Cpp_Widget_CreatorMenu::SetCtreatorWidget(UNN_Cpp_Widget_Creator* InCreatorWidget)
{
	CreatorWidget = InCreatorWidget;
}