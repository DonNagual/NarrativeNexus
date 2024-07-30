// Fill out your copyright notice in the Description page of Project Settings.
// NN_Cpp_Widget_Main.cpp
#include "Widgets/Main/NN_Cpp_Widget_Main.h"

void UNN_Cpp_Widget_Main::NativeConstruct()
{
	Super::NativeConstruct();

	// Hide all sub-widgets initially
	HideMainSubWidget(MainGuideWidget);
	HideMainSubWidget(MainOptionsWidget);
	HideMainSubWidget(MainTutorialWidget);
	HideMainSubWidget(MainCreditsWidget);
}

void UNN_Cpp_Widget_Main::HideMainSubWidget(UUserWidget* SubWidget)
{
	if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
	{
		if (INN_Cpp_IF_WidgetController* Interface = Cast<INN_Cpp_IF_WidgetController>(PC))
		{
			Interface->HideWidget(SubWidget);
		}
	}
}

void UNN_Cpp_Widget_Main::ShowMainMenuWidget()
{
	if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
	{
		if (INN_Cpp_IF_WidgetController* Interface = Cast<INN_Cpp_IF_WidgetController>(PC))
		{
			Interface->ShowWidget(MainMenuWidget);

			Interface->HideWidget(MainGuideWidget);
			Interface->HideWidget(MainOptionsWidget);
			Interface->HideWidget(MainTutorialWidget);
			Interface->HideWidget(MainCreditsWidget);
		}
	}
}

void UNN_Cpp_Widget_Main::ShowMainGuideWidget()
{
	if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
	{
		if (INN_Cpp_IF_WidgetController* Interface = Cast<INN_Cpp_IF_WidgetController>(PC))
		{
			Interface->ShowWidget(MainGuideWidget);
			
			Interface->HideWidget(MainMenuWidget);
			Interface->HideWidget(MainOptionsWidget);
			Interface->HideWidget(MainTutorialWidget);
			Interface->HideWidget(MainCreditsWidget);
		}
	}
}
