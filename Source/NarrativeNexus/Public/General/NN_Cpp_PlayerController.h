// Fill out your copyright notice in the Description page of Project Settings.
// NN_Cpp_PlayerController.h
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Widgets/NN_Cpp_Widget_Category.h"
#include "Widgets/Main/NN_Cpp_Widget_Main.h"
#include "GameFramework/PlayerController.h"
#include "Interface/NN_Cpp_IF_WidgetController.h"
#include "NN_Cpp_PlayerController.generated.h"

UCLASS()
class NARRATIVENEXUS_API ANN_Cpp_PlayerController : public APlayerController, public INN_Cpp_IF_WidgetController
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

	virtual void QuitGame() override;

	virtual UUserWidget* CreateAndAddWidget(TSubclassOf<UUserWidget> WidgetClass) override;
	
	virtual void ShowSubWidget(UUserWidget* SubWidget) override;
	virtual void HideSubWidget(UUserWidget* SubWidget) override;


	virtual UUserWidget* GetMainGuideWidget() override;

	UPROPERTY()
	class UNN_Cpp_Widget_Category* CategoryWidget;

};
