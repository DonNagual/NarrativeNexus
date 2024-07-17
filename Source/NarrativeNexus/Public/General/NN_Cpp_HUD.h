// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Blueprint/UserWidget.h"
#include "Interface/NN_Cpp_IF_PlayerController.h"
#include "NN_Cpp_HUD.generated.h"

UCLASS()
class NARRATIVENEXUS_API ANN_Cpp_HUD : public AHUD
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI Category")
	TSubclassOf<UUserWidget> CategoryWidgetClass;

private:
	UPROPERTY()
	UUserWidget* CategoryWidget;

};
