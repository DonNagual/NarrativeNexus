// Fill out your copyright notice in the Description page of Project Settings.


#include "General/NN_Cpp_HUD.h"

void ANN_Cpp_HUD::BeginPlay()
{
	Super::BeginPlay();

	// Debug-Ausgabe
	FString lc_text = FString::Printf(TEXT("Open Category Widget"));
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, lc_text);

	// Initialize the CategoryWidget
	if (CategoryWidgetClass)
	{
		CategoryWidget = CreateAndAddWidget(CategoryWidgetClass);
	}
}

UUserWidget* ANN_Cpp_HUD::CreateAndAddWidget(TSubclassOf<UUserWidget> WidgetClass)
{
	if (!WidgetClass) return nullptr;
	
	UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), WidgetClass);
	if (Widget)
	{
		Widget->AddToViewport();
	}
	return Widget;
}
