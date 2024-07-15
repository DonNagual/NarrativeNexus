// Fill out your copyright notice in the Description page of Project Settings.


#include "General/NN_Cpp_HUD.h"

void ANN_Cpp_HUD::BeginPlay()
{
	Super::BeginPlay();

	// Initialize the CategoryWidget using the interface
	if (CategoryWidgetClass)
	{
		if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
		{
			if (INN_Cpp_IF_PlayerController* Interface = Cast<INN_Cpp_IF_PlayerController>(PC))
			{
				CategoryWidget = Interface->CreateAndAddWidget(CategoryWidgetClass);
				// Debug-Ausgabe
				FString lc_text = FString::Printf(TEXT("Open Category Widget"));
				GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, lc_text);
			}
		}
	}
}
