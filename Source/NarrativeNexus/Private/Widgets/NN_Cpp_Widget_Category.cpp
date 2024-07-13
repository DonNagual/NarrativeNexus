// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/NN_Cpp_Widget_Category.h"

void UNN_Cpp_Widget_Category::NativeConstruct()
{
	Super::NativeConstruct();

	HideAllSubWidgets();
	ShowSubWidget(MainWidget);
}

void UNN_Cpp_Widget_Category::ShowSubWidget(UUserWidget* SubWidget)
{
	if (SubWidget)
	{
		SubWidget->SetVisibility(ESlateVisibility::Visible);
	}
}

void UNN_Cpp_Widget_Category::HideAllSubWidgets()
{
	if (MainWidget)
	{
		MainWidget->SetVisibility(ESlateVisibility::Collapsed);
	}
	if (CreatorWidget)
	{
		CreatorWidget->SetVisibility(ESlateVisibility::Collapsed);
	}
}
