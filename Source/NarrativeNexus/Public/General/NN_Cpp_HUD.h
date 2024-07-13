// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Blueprint/UserWidget.h"
#include "Widgets/Main/NN_Cpp_Widget_Main.h"
#include "Widgets/Main/NN_Cpp_Widget_MainMenu.h"
#include "Widgets/Main/NN_Cpp_Widget_MainOptions.h"
#include "Widgets/Creator/NN_Cpp_Widget_Creator.h"
#include "Widgets/Creator/NN_Cpp_Widget_CreatorMenu.h"
#include "Widgets/Creator/NN_Cpp_Widget_CreatorWorld.h"
#include "Widgets/Creator/NN_Cpp_Widget_CreatorCharacter.h"
#include "Widgets/Creator/NN_Cpp_Widget_CreatorStory.h"
#include "NN_Cpp_HUD.generated.h"

/**
 * 
 */
UCLASS()
class NARRATIVENEXUS_API ANN_Cpp_HUD : public AHUD
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override;

	void ShowCategoryWidget();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI Category")
	TSubclassOf<UUserWidget> CategoryWidget;

private:
	UPROPERTY()
	TMap<TSubclassOf<UUserWidget>, UUserWidget*> WidgetInstances;

	UUserWidget* CreateAndAddWidget(TSubclassOf<UUserWidget> WidgetClass);
};
