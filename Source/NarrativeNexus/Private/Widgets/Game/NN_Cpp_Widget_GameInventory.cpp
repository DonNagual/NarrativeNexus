// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/Game/NN_Cpp_Widget_GameInventory.h"

void UNN_Cpp_Widget_GameInventory::NativeConstruct()
{
	Super::NativeConstruct();

	BackButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_GameInventory::OnBackButtonClicked);
}

void UNN_Cpp_Widget_GameInventory::OnBackButtonClicked()
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->HideWidget(this);
		Interface->ShowGameMenuWidgetViaInterface();
	}
}
