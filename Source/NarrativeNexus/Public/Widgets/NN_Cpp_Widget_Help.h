// Fill out your copyright notice in the Description page of Project Settings.
// NN_Cpp_Widget_Help.h
#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "Blueprint/UserWidget.h"
#include "Interface/NN_Cpp_IF_WidgetController.h"
#include "NN_Cpp_Widget_Help.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_Widget_Help : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;

protected:
	// ############### Buttons ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> BackButton;

private:
	// ############### Functions ###############

	UFUNCTION()
	void OnBackButtonClicked();
};
