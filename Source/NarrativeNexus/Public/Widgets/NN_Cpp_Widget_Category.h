// Fill out your copyright notice in the Description page of Project Settings.
// NN_Cpp_Widget_Category.h
#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "Components/PanelWidget.h"
#include "Blueprint/UserWidget.h"
#include "General/NN_Cpp_GameInstance.h"
#include "Interface/NN_Cpp_IF_WidgetController.h"
#include "NN_Cpp_Widget_Category.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_Widget_Category : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget))
	class UUserWidget* MainWidget;

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

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> HelpButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> QuitButton;

private:

	// ############### Functions ###############

	UFUNCTION()
	void HideCategorySubWidget(UUserWidget* SubWidget);

	UFUNCTION()
	void OnMainButtonClicked();

	UFUNCTION()
	void OnGameButtonClicked();

	UFUNCTION()
	void OnCreatorButtonClicked();

	UFUNCTION()
	void OnHelpButtonClicked();

	UFUNCTION()
	void OnQuitButtonClicked();

	// ############### Widgets ###############

	UPROPERTY(meta = (BindWidget))
	class UUserWidget* GameWidget;

	UPROPERTY(meta = (BindWidget))
	class UUserWidget* CreatorWidget;

};
