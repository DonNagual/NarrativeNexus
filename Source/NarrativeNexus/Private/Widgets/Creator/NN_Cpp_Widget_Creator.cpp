// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/Creator/NN_Cpp_Widget_Creator.h"

void UNN_Cpp_Widget_Creator::NativeConstruct()
{
	Super::NativeConstruct();

	//HideAllSubWidgets();

	//ShowSubWidget(CreatorMenuWidget);

	/*if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
	{
		if (INN_Cpp_IF_PlayerController* Interface = Cast<INN_Cpp_IF_PlayerController>(PC))
		{
			Interface->SetCategoryWidget(this);
		}
	}*/
}

//void UNN_Cpp_Widget_Creator::ShowSubWidget(UUserWidget* SubWidget)
//{
//	if (SubWidget)
//	{
//		SubWidget->SetVisibility(ESlateVisibility::Visible);
//	}
//}

//void UNN_Cpp_Widget_Creator::HideAllSubWidgets()
//{
//	if (CreatorWorldWidget)
//	{
//		CreatorWorldWidget->SetVisibility(ESlateVisibility::Collapsed);
//	}
//	if (CreatorCharacterWidget)
//	{
//		CreatorCharacterWidget->SetVisibility(ESlateVisibility::Collapsed);
//	}
//	if (CreatorStoryWidget)
//	{
//		CreatorStoryWidget->SetVisibility(ESlateVisibility::Collapsed);
//	}
//}