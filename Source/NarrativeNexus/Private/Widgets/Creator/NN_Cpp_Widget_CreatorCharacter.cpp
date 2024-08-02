// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/Creator/NN_Cpp_Widget_CreatorCharacter.h"

void UNN_Cpp_Widget_CreatorCharacter::NativeConstruct()
{
	Super::NativeConstruct();

	BackButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CreatorCharacter::OnBackButtonClicked);
}

void UNN_Cpp_Widget_CreatorCharacter::OnBackButtonClicked()
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->HideWidget(this);
		Interface->ShowCreatorMenuWidgetViaInterface();
	}
}