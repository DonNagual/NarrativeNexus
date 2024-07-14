// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "Interface/NN_Cpp_IF_PlayerController.h"
#include "Blueprint/UserWidget.h"
#include "NN_Cpp_Widget_MainMenu.generated.h"

/**
 * 
 */
UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_Widget_MainMenu : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

	// Method to set the Reference
	void SetMainWidget(class UNN_Cpp_Widget_Main* InCategoryMainWidget);

protected:

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> GameButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> OptionsButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> QuitButton;

	UFUNCTION()
	void OnPlayButtonClicked();

	//UFUNCTION()
	//void OnOptionsButtonClicked();

	UFUNCTION()
	void OnQuitButtonClicked();

private:
	// Reference to the MainWidget
	UPROPERTY()
	class UNN_Cpp_Widget_Main* MainWidget;

};
