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
		Interface->ShowMainGuideViaInterface();

		FString lc_text = FString::Printf(TEXT("Guide"));
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Cyan, lc_text);
	}
	
	//if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
	//{
	//	if (INN_Cpp_IF_WidgetController* Interface = Cast<INN_Cpp_IF_WidgetController>(PC))
	//	{
	//		Interface->ShowMainGuideViaInterface();

	//		FString lc_text = FString::Printf(TEXT("Guide"));
	//		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, lc_text);
	//	}
	//}
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
