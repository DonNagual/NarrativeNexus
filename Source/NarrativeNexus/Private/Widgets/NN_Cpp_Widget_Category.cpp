// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/NN_Cpp_Widget_Category.h"

void UNN_Cpp_Widget_Category::NativeConstruct()
{
	Super::NativeConstruct();

	// DEBUG
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Widget Category Constructed"));
	
	// Hide all sub-widgets initially
	HideSubWidget(MainWidget);
	HideSubWidget(GameWidget);
	HideSubWidget(CreatorWidget);


	MainButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_Category::OnMainButtonClicked);
	GameButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_Category::OnGameButtonClicked);
	CreatorButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_Category::OnCreatorButtonClicked);
}

void UNN_Cpp_Widget_Category::HideSubWidget(UUserWidget* SubWidget)
{
	if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
	{
		if (INN_Cpp_IF_PlayerController* Interface = Cast<INN_Cpp_IF_PlayerController>(PC))
		{
			Interface->HideSubWidget(MainWidget);
			Interface->HideSubWidget(GameWidget);
			Interface->HideSubWidget(CreatorWidget);
		}
	}
}

void UNN_Cpp_Widget_Category::OnMainButtonClicked()
{
	if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
	{
		if (INN_Cpp_IF_PlayerController* Interface = Cast<INN_Cpp_IF_PlayerController>(PC))
		{
			Interface->ShowSubWidget(MainWidget);
		}
	}

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
