// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/PanelWidget.h"
#include "Interface/NN_Cpp_IF_PlayerController.h"
#include "Blueprint/UserWidget.h"
#include "NN_Cpp_Widget_Main.generated.h"

// Forward declaration of the UNN_Cpp_Widget_MainOptions class
//class UNN_Cpp_Widget_MainOptions;

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_Widget_Main : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

	void ShowSubWidget(UUserWidget* SubWWidget);
	void HideAllSubWidgets();

	// UI Main Sub Widgets
	UPROPERTY(meta = (BindWidget))
	//TObjectPtr<UPanelWidget> MainContainer;	// Mit Unreal Garbage Collection System
	class UPanelWidget* MainContainer;			// Eigene Speicherwerwaltung

	UPROPERTY(meta = (BindWidget))
	class UUserWidget* MainMenuWidget;
	
	UPROPERTY(meta = (BindWidget))
	class UUserWidget* MainOptionsWidget;
	//class UNN_Cpp_Widget_MainOptions* MainOptionsWidget;
	
};
