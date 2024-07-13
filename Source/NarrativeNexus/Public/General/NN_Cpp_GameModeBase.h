// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "NN_Cpp_HUD.h"
#include "NN_Cpp_PlayerController.h"
#include "NN_Cpp_GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class NARRATIVENEXUS_API ANN_Cpp_GameModeBase : public AGameModeBase
{
	GENERATED_BODY()


public:

	virtual void BeginPlay() override;

protected:

	
private:

	ANN_Cpp_GameModeBase();

};
