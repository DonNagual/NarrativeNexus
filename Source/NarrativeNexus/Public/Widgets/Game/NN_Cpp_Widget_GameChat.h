// Fill out your copyright notice in the Description page of Project Settings.
// NN_Cpp_Widget_GameChat.h
#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "Components/MultiLineEditableText.h"
#include "Components/EditableTextBox.h"
#include "Components/ScrollBox.h"
#include "Blueprint/UserWidget.h"
#include "ChatGPT/NN_Cpp_ChatGPT.h"
#include "NN_Cpp_Widget_GameChatMessage.h"
#include "UObject/StrongObjectPtr.h"
#include "Interface/NN_Cpp_IF_WidgetController.h"
#include "NN_Cpp_Widget_GameChat.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_Widget_GameChat : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;

protected:

	// ############### Buttons ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> BackButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> SendButtom;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> SelectTopButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> SelectMiddleButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> SelectLowerButton;

	// ############### Message ###############

	//UPROPERTY(meta = (BindWidget))
	//TObjectPtr<UMultiLineEditableText> InputMessageFeld;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UEditableTextBox> InputMessageFeld;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UScrollBox> MessageScrollBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chat")
	TSubclassOf<UUserWidget> GameChatMessageWidgetClass;
	


private:
	// ############### Functions ###############

	UFUNCTION()
	void OnBackButtonClicked();

	UFUNCTION()
	void OnSendButtomClicked();

	UFUNCTION()
	void OnSelectTopClicked();

	UFUNCTION()
	void OnSelectMiddleClicked();

	UFUNCTION()
	void OnSelectLowerClicked();

	// Functions for adding messages to the chat
	void AddMessageToChat(const FString& Author, const FString& MessageText);
	void AddMessageToChatFromUser(const FString& MessageText);
	void AddMessageToChatFromChatGPT(const FString& MessageText);

	TStrongObjectPtr<UNN_Cpp_ChatGPT> ChatGPT;

	UFUNCTION()
	void HandleChatGPTResponse(const FString& Response);
};
