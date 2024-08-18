// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/Main/NN_Cpp_Widget_MainTutorial.h"

void UNN_Cpp_Widget_MainTutorial::NativeConstruct()
{
	Super::NativeConstruct();

	BackButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_MainTutorial::OnBackButtonClicked);
}

void UNN_Cpp_Widget_MainTutorial::OnBackButtonClicked()
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->HideWidget(this);
		Interface->ShowMainMenuWidgetViaInterface();
	}
}