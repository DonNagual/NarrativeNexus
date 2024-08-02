// Fill out your copyright notice in the Description page of Project Settings.


#include "General/NN_Cpp_GameInstance.h"

void UNN_Cpp_GameInstance::QuitGame()
{
    UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit, true);
}
