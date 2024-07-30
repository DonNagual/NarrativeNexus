// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "NN_Cpp_PlayerController.h"
#include "NN_Cpp_GameModeBase.generated.h"

UCLASS()
class NARRATIVENEXUS_API ANN_Cpp_GameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:

	ANN_Cpp_GameModeBase();

protected:

	virtual void BeginPlay() override;

private:

};
