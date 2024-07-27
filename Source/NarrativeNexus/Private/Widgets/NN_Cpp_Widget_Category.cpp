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
			Interface->HideSubWidget(SubWidget);
		}
	}
}

void UNN_Cpp_Widget_Category::ShowCategorySubWidget(UUserWidget* SubWidget)
{
	if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
	{
		if (INN_Cpp_IF_WidgetController* Interface = Cast<INN_Cpp_IF_WidgetController>(PC))
		{
			Interface->ShowSubWidget(SubWidget);
		}
	}
}

void UNN_Cpp_Widget_Category::OnMainButtonClicked()
{
	HideCategorySubWidget(GameWidget);
	HideCategorySubWidget(CreatorWidget);

	if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
	{
		if (INN_Cpp_IF_WidgetController* Interface = Cast<INN_Cpp_IF_WidgetController>(PC))
		{
			Interface->ShowSubWidget(MainWidget);
		}
	}
}

void UNN_Cpp_Widget_Category::OnGameButtonClicked()
{
	HideCategorySubWidget(MainWidget);
	HideCategorySubWidget(CreatorWidget);
	ShowCategorySubWidget(GameWidget);
}

void UNN_Cpp_Widget_Category::OnCreatorButtonClicked()
{
	HideCategorySubWidget(MainWidget);
	HideCategorySubWidget(GameWidget);
	ShowCategorySubWidget(CreatorWidget);
}

void UNN_Cpp_Widget_Category::OnHelpButtonClicked()
{
	FString lc_text = FString::Printf(TEXT("Help"));
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, lc_text);
}

void UNN_Cpp_Widget_Category::OnQuitButtonClicked()
{
	if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
	{
		if (INN_Cpp_IF_WidgetController* Interface = Cast<INN_Cpp_IF_WidgetController>(PC))
		{
			Interface->QuitGame();
		}
	}
	FString lc_text = FString::Printf(TEXT("Quit Game"));
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, lc_text);
}
