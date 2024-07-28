// Fill out your copyright notice in the Description page of Project Settings.
// NN_Cpp_Widget_MainGuide.cpp
#include "Widgets/Main/NN_Cpp_Widget_MainGuide.h"

void UNN_Cpp_Widget_MainGuide::NativeConstruct()
{
	Super::NativeConstruct();

	BackButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_MainGuide::OnBackButtonClicked);
}

void UNN_Cpp_Widget_MainGuide::OnBackButtonClicked()
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
			Interface->HideWidget(this);
			Interface->ShowMainMenuViaInterface();
	}
}
