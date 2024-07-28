// Fill out your copyright notice in the Description page of Project Settings.
// NN_Cpp_Widget_Category.cpp
#include "Widgets/NN_Cpp_Widget_Category.h"

void UNN_Cpp_Widget_Category::NativeConstruct()
{
	Super::NativeConstruct();

	// DEBUG
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Widget Category Constructed"));
	
	// Hide all sub-widgets initially
	HideCategorySubWidget(MainWidget);
	HideCategorySubWidget(GameWidget);
	HideCategorySubWidget(CreatorWidget);

	MainButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_Category::OnMainButtonClicked);
	GameButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_Category::OnGameButtonClicked);
	CreatorButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_Category::OnCreatorButtonClicked);
	HelpButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_Category::OnHelpButtonClicked);
	QuitButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_Category::OnQuitButtonClicked);
}

void UNN_Cpp_Widget_Category::HideCategorySubWidget(UUserWidget* SubWidget)
{
	if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
	{
		if (INN_Cpp_IF_WidgetController* Interface = Cast<INN_Cpp_IF_WidgetController>(PC))
		{
			Interface->HideWidget(SubWidget);
		}
	}
}

void UNN_Cpp_Widget_Category::OnMainButtonClicked()
{
	if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
	{
		if (INN_Cpp_IF_WidgetController* Interface = Cast<INN_Cpp_IF_WidgetController>(PC))
		{
			Interface->ShowWidget(MainWidget);
			Interface->ShowMainMenuViaInterface();

			Interface->HideWidget(GameWidget);
			Interface->HideWidget(CreatorWidget);
		}
	}
}

void UNN_Cpp_Widget_Category::OnGameButtonClicked()
{
	if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
	{
		if (INN_Cpp_IF_WidgetController* Interface = Cast<INN_Cpp_IF_WidgetController>(PC))
		{
			Interface->ShowWidget(GameWidget);

			Interface->HideWidget(MainWidget);
			Interface->HideWidget(CreatorWidget);
		}
	}
}

void UNN_Cpp_Widget_Category::OnCreatorButtonClicked()
{
	if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
	{
		if (INN_Cpp_IF_WidgetController* Interface = Cast<INN_Cpp_IF_WidgetController>(PC))
		{
			Interface->ShowWidget(CreatorWidget);

			Interface->HideWidget(MainWidget);
			Interface->HideWidget(GameWidget);
		}
	}
}

void UNN_Cpp_Widget_Category::OnHelpButtonClicked()
{
	FString lc_text = FString::Printf(TEXT("Help"));
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, lc_text);
}

// #################### QuitGame ####################

void UNN_Cpp_Widget_Category::OnQuitButtonClicked()
{
	if (UGameInstance* GI = GetWorld()->GetGameInstance())
	{
		if (UNN_Cpp_GameInstance* NN_GI = Cast<UNN_Cpp_GameInstance>(GI))
		{
			NN_GI->QuitGame();
		}
	}
}
