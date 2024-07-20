// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/Main/NN_Cpp_Widget_Main.h"

void UNN_Cpp_Widget_Main::NativeConstruct()
{
	Super::NativeConstruct();

	// Hide all sub-widgets initially
	HideSubWidget(MainGuideWidget);
	HideSubWidget(MainOptionsWidget);
	HideSubWidget(MainTutorialWidget);
	HideSubWidget(MainCreditsWidget);
}

void UNN_Cpp_Widget_Main::HideSubWidget(UUserWidget* SubWidget)
{
	if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
	{
		if (INN_Cpp_IF_PlayerController* Interface = Cast<INN_Cpp_IF_PlayerController>(PC))
		{
			Interface->HideSubWidget(SubWidget);
		}
	}
}

void UNN_Cpp_Widget_Main::ShowSubWidget(UUserWidget* SubWidget)
{
	if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
	{
		if (INN_Cpp_IF_PlayerController* Interface = Cast<INN_Cpp_IF_PlayerController>(PC))
		{
			Interface->ShowSubWidget(SubWidget);
		}
	}
}