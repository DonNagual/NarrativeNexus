// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Widgets/NN_Cpp_Widget_Category.h"
#include "Widgets/Main/NN_Cpp_Widget_Main.h"
#include "Widgets/Creator/NN_Cpp_Widget_Creator.h"
#include "Interface/NN_Cpp_IF_PlayerController.h"
#include "NN_Cpp_PlayerController.generated.h"

/**
 * 
 */
UCLASS()
class NARRATIVENEXUS_API ANN_Cpp_PlayerController : public APlayerController, public INN_Cpp_IF_PlayerController
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
	
	virtual void QuitGame() override;

	//virtual void ShowSubWidget(UUserWidget* SubWidget) override;
	virtual void HideAllSubWidgets() override;

	/*virtual UUserWidget* GetMainWidget() override;*/

	//virtual UUserWidget* GetMainMenuWidget() override;
	//virtual UUserWidget* GetMainOptionsWidget() override;

	virtual void SetCategoryWidget(class UUserWidget* InCategoryWidget) override;

private:
	UPROPERTY()
	class UUserWidget* CategoryWidget;
};
