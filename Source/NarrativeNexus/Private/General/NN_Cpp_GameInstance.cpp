// Fill out your copyright notice in the Description page of Project Settings.


#include "General/NN_Cpp_GameInstance.h"

void UNN_Cpp_GameInstance::QuitGame()
{
    FString lc_text = FString::Printf(TEXT("Quit Game"));
    GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, lc_text);

    UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit, true);
    
}
