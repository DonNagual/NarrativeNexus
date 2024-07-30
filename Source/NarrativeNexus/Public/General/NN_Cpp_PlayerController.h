// Fill out your copyright notice in the Description page of Project Settings.
// NN_Cpp_PlayerController.h
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Widgets/NN_Cpp_Widget_Category.h"
#include "Widgets/Main/NN_Cpp_Widget_Main.h"
#include "Widgets/Main/NN_Cpp_Widget_MainMenu.h"
#include "GameFramework/PlayerController.h"
#include "Interface/NN_Cpp_IF_WidgetController.h"
#include "NN_Cpp_PlayerController.generated.h"

UCLASS()
class NARRATIVENEXUS_API ANN_Cpp_PlayerController : public APlayerController, public INN_Cpp_IF_WidgetController
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

	virtual void ShowWidget(UUserWidget* SubWidget) override;
	virtual void HideWidget(UUserWidget* SubWidget) override;

	virtual void ShowMainMenuViaInterface() override;
	virtual void ShowMainGuideViaInterface() override;

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI Category")
	TSubclassOf<UUserWidget> CategoryWidgetClass;

private:
	UPROPERTY()
	class UNN_Cpp_Widget_Category* CategoryWidget;

	void InitializeWidgets();
};
