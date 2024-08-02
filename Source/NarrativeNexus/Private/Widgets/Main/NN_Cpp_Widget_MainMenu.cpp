// Fill out your copyright notice in the Description page of Project Settings.
// NN_Cpp_Widget_MainMenu.cpp

#include "Widgets/Main/NN_Cpp_Widget_MainMenu.h"

void UNN_Cpp_Widget_MainMenu::NativeConstruct()
{
	Super::NativeConstruct();

	GuideButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_MainMenu::OnGuideButtonClicked);
	OptionsButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_MainMenu::OnOptionsButtonClicked);
	TutorialButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_MainMenu::OnTutorialButtonClicked);
	CreditsButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_MainMenu::OnCreditsButtonClicked);
}

void UNN_Cpp_Widget_MainMenu::OnGuideButtonClicked()
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->ShowMainGuideWidgetViaInterface();
	}
}

void UNN_Cpp_Widget_MainMenu::OnOptionsButtonClicked()
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->ShowMainOptionsWidgetViaInterface();
	}
}

void UNN_Cpp_Widget_MainMenu::OnTutorialButtonClicked()
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->ShowMainTutorialWidgetViaInterface();
	}
}

void UNN_Cpp_Widget_MainMenu::OnCreditsButtonClicked()
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->ShowMainCreditsWidgetViaInterface();
	}
}
