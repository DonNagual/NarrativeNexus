// Fill out your copyright notice in the Description page of Project Settings.
// NN_Cpp_Widget_Help.cpp
#include "Widgets/NN_Cpp_Widget_Help.h"

void UNN_Cpp_Widget_Help::NativeConstruct()
{
	Super::NativeConstruct();

	BackButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_Help::OnBackButtonClicked);
}

void UNN_Cpp_Widget_Help::OnBackButtonClicked()
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
			Interface->HideWidget(this);
	}
}