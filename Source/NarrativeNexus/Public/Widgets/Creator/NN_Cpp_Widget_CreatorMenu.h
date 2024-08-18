// Fill out your copyright notice in the Description page of Project Settings.
// NN_Cpp_Widget_CreatorMenu.h
#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "Blueprint/UserWidget.h"
#include "Interface/NN_Cpp_IF_WidgetController.h"
#include "NN_Cpp_Widget_CreatorMenu.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_Widget_CreatorMenu : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;

protected:
	// ############### Buttons ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> WorldButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> StoryButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> CharacterButton;

private:

	// ############### Functions ###############

	UFUNCTION()
	void OnWorldButtonClicked();

	UFUNCTION()
	void OnStoryButtonClicked();

	UFUNCTION()
	void OnCharacterButtonClicked();
};
