// Fill out your copyright notice in the Description page of Project Settings.
// NN_Cpp_Widget_Main.h
#pragma once

#include "CoreMinimal.h"
#include "Components/PanelWidget.h"
#include "Blueprint/UserWidget.h"
#include "Interface/NN_Cpp_IF_WidgetController.h"
#include "NN_Cpp_Widget_Main.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_Widget_Main : public UUserWidget
{
	GENERATED_BODY()

public:

	virtual void NativeConstruct() override;

	// ############### Widgets ###############

	UPROPERTY(meta = (BindWidget))
	class UUserWidget* MainMenuWidget;

	UPROPERTY(meta = (BindWidget))
	class UUserWidget* MainGuideWidget;

	UPROPERTY(meta = (BindWidget))
	class UUserWidget* MainOptionsWidget;

	UPROPERTY(meta = (BindWidget))
	class UUserWidget* MainTutorialWidget;

	UPROPERTY(meta = (BindWidget))
	class UUserWidget* MainCreditsWidget;

	// ############### Functions ###############

	UFUNCTION()
	virtual void ShowMainMenuWidget();

	UFUNCTION()
	virtual void ShowMainGuideWidget();

	UFUNCTION()
	virtual void ShowMainOptionsWidget();

	UFUNCTION()
	virtual void ShowMainTutorialWidget();

	UFUNCTION()
	virtual void ShowMainCreditsWidget();

protected:
	
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UPanelWidget> MainContainer;

private:

	// ############### Functions ###############

	UFUNCTION()
	void HideMainSubWidget(UUserWidget* SubWidget);

	UFUNCTION()
	void HideAllWidgets();

};
