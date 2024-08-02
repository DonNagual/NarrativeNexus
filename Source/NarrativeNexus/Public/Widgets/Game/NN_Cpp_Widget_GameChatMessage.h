// Fill out your copyright notice in the Description page of Project Settings.
// NN_Cpp_Widget_GameChatMessage.h
#pragma once

#include "CoreMinimal.h"
#include "Components/HorizontalBox.h"
#include "Components/TextBlock.h"
#include "Blueprint/UserWidget.h"
#include "Interface/NN_Cpp_IF_WidgetController.h"
#include "NN_Cpp_Widget_GameChatMessage.generated.h"

/**
 * 
 */
UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_Widget_GameChatMessage : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;

	// ############### Message ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UHorizontalBox> MessageHorizontalBox;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> MessageAuthor;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> Message;

};
