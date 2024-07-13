// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/Main/NN_Cpp_Widget_MainOptions.h"

void UNN_Cpp_Widget_MainOptions::NativeConstruct()
{
	BackButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_MainOptions::OnBackButtonClicked);

}

void UNN_Cpp_Widget_MainOptions::SetMainWidget(UNN_Cpp_Widget_Main* InMainWidget)
{
	MainWidget = InMainWidget;
}

void UNN_Cpp_Widget_MainOptions::OnBackButtonClicked()
{
	if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
	{
		if (INN_Cpp_IF_PlayerController* Interface = Cast<INN_Cpp_IF_PlayerController>(PC))
		{
			Interface->ShowSubWidget(Interface->GetMainMenuWidget());
		}
	}

	FString lc_text = FString::Printf(TEXT("Back to Main Menu"));
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, lc_text);
}
