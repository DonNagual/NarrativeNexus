// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "Components/PanelWidget.h"
#include "Interface/NN_Cpp_IF_PlayerController.h"
#include "Blueprint/UserWidget.h"
#include "NN_Cpp_Widget_Category.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_Widget_Category : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;

	//void ShowSubWidget(UUserWidget* SubWidget);
	void HideAllSubWidgets();

protected:
	UPROPERTY(meta = (BindWidget))
	class UPanelWidget* CategoryContainer;

	//UPROPERTY(meta = (BindWidget))
	//TObjectPtr<UButton> MainButton;

	UPROPERTY(meta = (BindWidget))
	class UUserWidget* MainWidget;

	UPROPERTY(meta = (BindWidget))
	class UUserWidget* CreatorWidget;

	UPROPERTY(meta = (GameWidget))
	class UUserWidget* GameWidget;

};
