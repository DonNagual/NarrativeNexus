// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interface/NN_Cpp_IF_PlayerController.h"
#include "Blueprint/UserWidget.h"
#include "NN_Cpp_Widget_Creator.generated.h"

/**
 * 
 */
UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_Widget_Creator : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

	void ShowSubWidget(UUserWidget* SubWidget);
	void HideAllSubWidgets();

	UPROPERTY(meta = (BindWidget))
	class UPanelWidget* CreatorContainer;

	UPROPERTY(meta = (BindwIDGET))
	class UUserWidget* CreatorMenuWidget;

	UPROPERTY(meta = (BindWidget))
	class UUserWidget* CreatorWorldWidget;

	UPROPERTY(meta = (BindWidget))
	class UUserWidget* CreatorCharacterWidget;

	UPROPERTY(META = (BindWidget))
	class UUserWidget* CreatorStoryWidget;
};
