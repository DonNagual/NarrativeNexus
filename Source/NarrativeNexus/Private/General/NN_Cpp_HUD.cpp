// Fill out your copyright notice in the Description page of Project Settings.


#include "General/NN_Cpp_HUD.h"

void ANN_Cpp_HUD::BeginPlay()
{
	Super::BeginPlay();

	// Initialize the MainWidget
	if (CategoryWidget)
	{
		auto MainWidget = Cast<UNN_Cpp_Widget_Main>(CreateAndAddWidget(CategoryWidget));
		if (MainWidget)
		{
			auto MainMenuWidget = Cast<UNN_Cpp_Widget_MainMenu>(MainWidget->MainMenuWidget);
			if(MainMenuWidget)
			{
				MainMenuWidget->SetMainWidget(MainWidget);
			}

			auto MainOptionsWidget = Cast<UNN_Cpp_Widget_MainOptions>(MainWidget->MainOptionsWidget);
			if (MainOptionsWidget)
			{
				MainOptionsWidget->SetMainWidget(MainWidget);
			}

			// Set the category widget in the player controller
			if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
			{
				if (INN_Cpp_IF_PlayerController* Interface = Cast<INN_Cpp_IF_PlayerController>(PC))
				{
					Interface->SetCategoryWidget(MainWidget);
				}
			}
		}
	}
	/*
	// Initialize the CreatorWidget
	if (CreatorWidgetClass)
	{
		auto CreatorWidget = Cast<UNN_Cpp_Widget_Creator>(CreateAndAddWidget(CreatorWidgetClass));
		if (CreatorWidget)
		{
			auto CreatorMenudWidget = Cast<UNN_Cpp_Widget_CreatorMenu>(CreatorWidget->CreatorWorldWidget);
			if (CreatorMenudWidget)
			{
				CreatorMenudWidget->SetCtreatorWidget(CreatorWidget);
			}

			// Set the category widget in the player controller
			if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
			{
				if (INN_Cpp_IF_PlayerController* Interface = Cast<INN_Cpp_IF_PlayerController>(PC))
				{
					Interface->SetCategoryWidget(CreatorWidget);
				}
			}
		}
	}
	*/
	
}

UUserWidget* ANN_Cpp_HUD::CreateAndAddWidget(TSubclassOf<UUserWidget> WidgetClass)
{
	if (!WidgetClass) return nullptr;
	
	UUserWidget** WidgetPtr = WidgetInstances.Find(WidgetClass);
	UUserWidget* Widget = WidgetPtr ? *WidgetPtr : nullptr;

	if (!Widget)
	{
		Widget = CreateWidget<UUserWidget>(GetWorld(), WidgetClass);
		if (Widget)
		{
			WidgetInstances.Add(WidgetClass, Widget);
			Widget->AddToViewport();
		}
	}
	else
	{
		Widget->SetVisibility(ESlateVisibility::Visible);
	}
	return Widget;
}

void ANN_Cpp_HUD::ShowCategoryWidget()
{
	auto MainWidget = Cast<UNN_Cpp_Widget_Main>(CreateAndAddWidget(CategoryWidget));
	if (MainWidget)
	{
		MainWidget->ShowSubWidget(MainWidget->MainMenuWidget);
	}
}
/*
void ANN_Cpp_HUD::ShowCreatorWidget()
{
	auto CreatorWidget = Cast<UNN_Cpp_Widget_Creator>(CreateAndAddWidget(CreatorWidgetClass));
	if (CreatorWidget)
	{
		CreatorWidget->ShowSubWidget(CreatorWidget->CreatorWorldWidget);
	}
}
*/