// Fill out your copyright notice in the Description page of Project Settings.
// NN_Cpp_HUD.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Interface/NN_Cpp_IF_WidgetController.h"
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

	UFUNCTION()
	void CreateAndAddBaseWidget();

};
