// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/NN_Cpp_Widget_Category.h"

void UNN_Cpp_Widget_Category::NativeConstruct()
{
	Super::NativeConstruct();

	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Widget Category Constructed"));
		
	HideAllSubWidgets();
	//ShowSubWidget(CreatorWidget);

	MainButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_Category::OnMainButtonClicked);
	GameButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_Category::OnGameButtonClicked);
	CreatorButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_Category::OnCreatorButtonClicked);
}

void UNN_Cpp_Widget_Category::HideAllSubWidgets()
{
	if (MainWidget)
	{
		MainWidget->SetVisibility(ESlateVisibility::Collapsed);
	}
	if (CreatorWidget)
	{
		CreatorWidget->SetVisibility(ESlateVisibility::Collapsed);
	}
	if (GameWidget)
	{
		GameWidget->SetVisibility(ESlateVisibility::Collapsed);
	}
	// Debug-Ausgabe
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Hide all Widgets in CategoryWidget"));
}

//void UNN_Cpp_Widget_Category::ShowSubWidget(UUserWidget* SubWidget)
//{
//	if (SubWidget)
//	{
//		SubWidget->SetVisibility(ESlateVisibility::Visible);
//	}
//}



void UNN_Cpp_Widget_Category::OnMainButtonClicked()
{
	/*if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
	{
		if (INN_Cpp_IF_PlayerController* Interface = Cast<INN_Cpp_IF_PlayerController>(PC))
		{
			Interface->ShowSubWidget(Interface->GetMainWidget());
		}
	}*/

	FString lc_text = FString::Printf(TEXT("Main Category"));
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, lc_text);
}

void UNN_Cpp_Widget_Category::OnGameButtonClicked()
{
	FString lc_text = FString::Printf(TEXT("Game Category"));
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, lc_text);
}

void UNN_Cpp_Widget_Category::OnCreatorButtonClicked()
{
	FString lc_text = FString::Printf(TEXT("Creator Category"));
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, lc_text);
}
