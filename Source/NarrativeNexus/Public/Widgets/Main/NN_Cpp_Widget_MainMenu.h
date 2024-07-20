// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "Blueprint/UserWidget.h"
#include "Interface/NN_Cpp_IF_PlayerController.h"
#include "NN_Cpp_Widget_MainMenu.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_Widget_MainMenu : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

protected:

	// ############### Buttons ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> GuideButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> OptionsButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> TutorialButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> CreditsButton;

private:

	// ############### Functions ###############

	UFUNCTION()
	void OnGuideButtonClicked();

	UFUNCTION()
	void OnOptionsButtonClicked();

	UFUNCTION()
	void OnTutorialButtonClicked();

	UFUNCTION()
	void OnCreditsButtonClicked();

};
