// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/PanelWidget.h"
#include "Blueprint/UserWidget.h"
#include "Interface/NN_Cpp_IF_PlayerController.h"
#include "NN_Cpp_Widget_Main.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_Widget_Main : public UUserWidget
{
	GENERATED_BODY()

public:

	virtual void NativeConstruct() override;

	void HideSubWidget(UUserWidget* SubWidget);
	void ShowSubWidget(UUserWidget* SubWidget);

protected:
	
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UPanelWidget> MainContainer;	
	
private:

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
};
