// Fill out your copyright notice in the Description page of Project Settings.
// NN_Cpp_Widget_Creator.h
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Interface/NN_Cpp_IF_WidgetController.h"
#include "NN_Cpp_Widget_Creator.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_Widget_Creator : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

	// ############### Widgets ###############

	UPROPERTY(meta = (BindwIDGET))
	class UUserWidget* CreatorMenuWidget;

	UPROPERTY(meta = (BindWidget))
	class UUserWidget* CreatorWorldWidget;

	UPROPERTY(meta = (BindWidget))
	class UUserWidget* CreatorCharacterWidget;

	UPROPERTY(META = (BindWidget))
	class UUserWidget* CreatorStoryWidget;

	// ############### Functions ###############

	UFUNCTION()
	virtual void ShowCreatorMenuWidget();

	UFUNCTION()
	virtual void ShowCreatorWorlWidget();

	UFUNCTION()
	virtual void ShowCreatorCharacterWidget();

	UFUNCTION()
	virtual void ShowCreatorStoryWidget();

protected:

	UPROPERTY(meta = (BindWidget))
	class UPanelWidget* CreatorContainer;

private:

	// ############### Functions ###############

	UFUNCTION()
	void HideCreatorSubWidget(UUserWidget* SubWidget);

	UFUNCTION()
	void HideAllWidgets();
};
