// Fill out your copyright notice in the Description page of Project Settings.
// NN_Cpp_HUD.cpp
#include "General/NN_Cpp_HUD.h"

void ANN_Cpp_HUD::BeginPlay()
{
	Super::BeginPlay();

	CreateAndAddBaseWidget();
}

void ANN_Cpp_HUD::CreateAndAddBaseWidget()
{
	if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
	{
		if (INN_Cpp_IF_WidgetController* Interface = Cast<INN_Cpp_IF_WidgetController>(PC))
		{
			Interface->CreateAndAddWidget(CategoryWidgetClass);
		}
	}
}