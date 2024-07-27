// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "Interface/NN_Cpp_IF_WidgetController.h"
#include "Blueprint/UserWidget.h"
#include "NN_Cpp_Widget_MainOptions.generated.h"

// Forward declaration of the UNN_Cpp_Widget_Main class
// class UNN_Cpp_Widget_Main;

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_Widget_MainOptions : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

	// Method to set the Reference
	void SetMainWidget(class UNN_Cpp_Widget_Main* InMainWidget);

protected:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> BackButton;

	//UFUNCTION()
	//void OnBackButtonClicked();

private:
	// Reference to the MainWidget
	UPROPERTY()
	class UNN_Cpp_Widget_Main* MainWidget;
};
