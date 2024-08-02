// Fill out your copyright notice in the Description page of Project Settings.
// NN_Cpp_Widget_Game.h
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Interface/NN_Cpp_IF_WidgetController.h"
#include "NN_Cpp_Widget_Game.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_Widget_Game : public UUserWidget
{
	GENERATED_BODY()
	
public:

	virtual void NativeConstruct() override;

	// ############### Widgets ###############

	UPROPERTY(meta = (BindWidget))
	class UUserWidget* GameMenuWidget;

	UPROPERTY(meta = (BindWidget))
	class UUserWidget* GameChatWidget;

	UPROPERTY(meta = (BindWidget))
	class UUserWidget* GameInventoryWidget;

	// ############### Functions ###############

	UFUNCTION()
	virtual void ShowGameMenuWidget();

	UFUNCTION()
	virtual void ShowGameChatWidget();

	UFUNCTION()
	virtual void ShowGameInventoryWidget();

protected:

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UPanelWidget> GameContainer;

private:
	// ############### Functions ###############

	UFUNCTION()
	void HideGameSubWidget(UUserWidget* SubWidget);

	UFUNCTION()
	void HideAllWidgets();
};
