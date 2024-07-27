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

void UNN_Cpp_Widget_Main::ShowMainMenuSubWidget()
{
	if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
	{
		if (INN_Cpp_IF_WidgetController* Interface = Cast<INN_Cpp_IF_WidgetController>(PC))
		{
			Interface->ShowSubWidget(MainMenuWidget);
		}
	}
}

void UNN_Cpp_Widget_Main::HideMainSubWidget(UUserWidget* SubWidget)
{
	if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
	{
		if (INN_Cpp_IF_WidgetController* Interface = Cast<INN_Cpp_IF_WidgetController>(PC))
		{
			Interface->HideSubWidget(SubWidget);
		}
	}
}

void UNN_Cpp_Widget_Main::ShowMainGuideSubWidget()
{
	if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
	{
		if (INN_Cpp_IF_WidgetController* Interface = Cast<INN_Cpp_IF_WidgetController>(PC))
		{
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, "FOO FOO");
			Interface->ShowSubWidget(MainGuideWidget);
		}
	}
}