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
	if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
	{
		if (INN_Cpp_IF_WidgetController* Interface = Cast<INN_Cpp_IF_WidgetController>(PC))
		{
			Interface->HideSubWidget(this);
			//Interface->ShowSubWidget(Interface->GetMainWidget());
			Interface->GetMainGuideWidget();

			FString lc_text = FString::Printf(TEXT("Guide"));
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, lc_text);
		}
	}
}

void UNN_Cpp_Widget_MainMenu::OnOptionsButtonClicked()
{
	FString lc_text = FString::Printf(TEXT("Options"));
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, lc_text);
}

void UNN_Cpp_Widget_MainMenu::OnTutorialButtonClicked()
{
	FString lc_text = FString::Printf(TEXT("Tutorial"));
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, lc_text);
}

void UNN_Cpp_Widget_MainMenu::OnCreditsButtonClicked()
{
	FString lc_text = FString::Printf(TEXT("Credits"));
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, lc_text);
}
