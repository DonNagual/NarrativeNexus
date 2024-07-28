// Fill out your copyright notice in the Description page of Project Settings.
// NN_Cpp_Widget_MainGuide.cpp
#include "Widgets/Main/NN_Cpp_Widget_MainGuide.h"

void UNN_Cpp_Widget_MainGuide::NativeConstruct()
{
	Super::NativeConstruct();

	BackButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_MainGuide::OnBackButtonClicked);
}

void UNN_Cpp_Widget_MainGuide::OnBackButtonClicked()
{
	if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
	{
		if (INN_Cpp_IF_WidgetController* Interface = Cast<INN_Cpp_IF_WidgetController>(PC))
		{
			Interface->HideWidget(this);
			Interface->ShowMainMenuViaInterface();

			FString lc_text = FString::Printf(TEXT("Guide"));
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, lc_text);
		}
	}
}
