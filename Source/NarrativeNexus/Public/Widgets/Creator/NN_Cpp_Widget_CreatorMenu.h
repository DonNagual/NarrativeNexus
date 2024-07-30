// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interface/NN_Cpp_IF_WidgetController.h"
#include "Blueprint/UserWidget.h"
#include "NN_Cpp_Widget_CreatorMenu.generated.h"

/**
 * 
 */
UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_Widget_CreatorMenu : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;

	void SetCtreatorWidget(class UNN_Cpp_Widget_Creator* InCreatorWidget);

private:
	// Reference to the CreatorWidget
	UPROPERTY()
	class UNN_Cpp_Widget_Creator* CreatorWidget;
};
