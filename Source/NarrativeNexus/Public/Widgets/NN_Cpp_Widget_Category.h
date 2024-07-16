// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/GameplayStatics.h"
#include "Components/Button.h"
#include "Components/PanelWidget.h"
#include "Blueprint/UserWidget.h"
#include "Interface/NN_Cpp_IF_PlayerController.h"
#include "NN_Cpp_Widget_Category.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_Widget_Category : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;

	void HideAllSubWidgets();

protected:
	UPROPERTY(meta = (BindWidget))
	class UPanelWidget* CategoryContainer;

	// ############### Buttons ###############
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> MainButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> GameButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> CreatorButton;

	// ############### Functions ###############
	UFUNCTION()
	void OnMainButtonClicked();

	UFUNCTION()
	void OnGameButtonClicked();

	UFUNCTION()
	void OnCreatorButtonClicked();

	// ############### Widgets ###############

	UPROPERTY(meta = (BindWidget))
	class UUserWidget* MainWidget;

	UPROPERTY(meta = (BindWidget))
	class UUserWidget* CreatorWidget;

	UPROPERTY(meta = (BindWidget))
	class UUserWidget* GameWidget;

};
