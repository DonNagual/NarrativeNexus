// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/Main/NN_Cpp_Widget_Main.h"

void UNN_Cpp_Widget_Main::NativeConstruct()
{
	Super::NativeConstruct();
}
	// Initially hide all sub - widgets
	//HideAllSubWidgets();

	// Show the MainMenuWidget
	//ShowSubWidget(MainMenuWidget);

	// Set the reference to the MainWidget in the PlayerController
//	if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
//	{
//		if (INN_Cpp_IF_PlayerController* Interface = Cast<INN_Cpp_IF_PlayerController>(PC))
//		{
//			Interface->SetCategoryWidget(this);
//		}
//	}


//void UNN_Cpp_Widget_Main::ShowSubWidget(UUserWidget* SubWidget)
//{
//	if (SubWidget)
//	{
//		SubWidget->SetVisibility(ESlateVisibility::Visible);
//	}
//}

//void UNN_Cpp_Widget_Main::HideAllSubWidgets()
//{
//	if (MainMenuWidget)
//	{
//		MainMenuWidget->SetVisibility(ESlateVisibility::Collapsed);
//	}
//	
//	if (MainOptionsWidget)
//	{
//		MainOptionsWidget->SetVisibility(ESlateVisibility::Collapsed);
//	}
//}
