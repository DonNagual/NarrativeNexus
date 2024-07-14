// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/Main/NN_Cpp_Widget_MainMenu.h"

void UNN_Cpp_Widget_MainMenu::NativeConstruct()
{
	Super::NativeConstruct();

	GameButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_MainMenu::OnPlayButtonClicked);
	//OptionsButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_MainMenu::OnOptionsButtonClicked);
	QuitButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_MainMenu::OnQuitButtonClicked);

}

void UNN_Cpp_Widget_MainMenu::SetMainWidget(UNN_Cpp_Widget_Main* InMainWidget)
{
	MainWidget = InMainWidget;
}

void UNN_Cpp_Widget_MainMenu::OnPlayButtonClicked()
{
	FString lc_text = FString::Printf(TEXT("Start Game"));
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, lc_text);
	// UGameplayStatics::OpenLevel(GetWorld(), FName(TEXT("Main_lvl")));
}

//void UNN_Cpp_Widget_MainMenu::OnOptionsButtonClicked()
//{
//	if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
//	{
//		if (INN_Cpp_IF_PlayerController* Interface = Cast<INN_Cpp_IF_PlayerController>(PC))
//		{
//			Interface->ShowSubWidget(Interface->GetMainOptionsWidget());
//		}
//	}
//
//	FString lc_text = FString::Printf(TEXT("Open Options"));
//	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, lc_text);
//}

void UNN_Cpp_Widget_MainMenu::OnQuitButtonClicked()
{
	if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
	{
		if (INN_Cpp_IF_PlayerController* Interface = Cast<INN_Cpp_IF_PlayerController>(PC))
		{
			Interface->QuitGame();
		}
	}
}
