// NN_Cpp_Widget_GameChat.h

#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Components/EditableTextBox.h"
#include "Components/ScrollBox.h"
#include "Components/Image.h"
#include "Blueprint/UserWidget.h"
#include "NN_Cpp_Widget_GameChatMessage.h"
#include "Interface/NN_Cpp_IF_GPT.h"
#include "Interface/NN_Cpp_IF_WidgetController.h"
#include "NN_Cpp_Widget_GameChat.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_Widget_GameChat : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;

	void SetGPT(UNN_Cpp_GPT* InGPT);

	UFUNCTION()
	void RemoveAllGPTMessagesFromScrollBox();

	UFUNCTION()
	bool IsGameChatWidgetVisible();

protected:

	// ############### Buttons ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> SendButtom;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> BackButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> RepeatButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> ResetButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> InfoButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> SummaryButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> ContinueButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> SelectTopButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> SelectMiddleButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> SelectLowerButton;

	// ############### Message ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UEditableTextBox> InputMessageFeld;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UScrollBox> MessageScrollBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chat")
	TSubclassOf<UUserWidget> GameChatMessageWidgetClass;

	// ############### Image ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UImage> StoryImage;

	// ############### Summary Text ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> ExecutiveSummaryText;

private:
	// ############### Button - Functions ###############

	UFUNCTION()
	void OnSendButtomClicked();

	UFUNCTION()
	void OnBackButtonClicked();

	UFUNCTION()
	void OnRepeatButtonClicked();

	UFUNCTION()
	void OnResetButtonClicked();

	UFUNCTION()
	void OnInfoButtonClicked();

	UFUNCTION()
	void OnSummaryButtonClicked();

	UFUNCTION()
	void OnContinueButtonClicked();

	UFUNCTION()
	void OnSelectTopButtonClicked();

	UFUNCTION()
	void OnSelectMiddleButtonClicked();

	UFUNCTION()
	void OnSelectLowerButtonClicked();

	// ############### Generate Summary and Image ###############

	UFUNCTION()
	void GenerateShortSummary(const FString& Summary);

	UFUNCTION()
	void GenerateMaxSummary(const FString& Summary);

	UFUNCTION()
	void GenerateImageDescription(const FString& Summary);

	UFUNCTION()
	void GenerateChatImage(const FString& Summary);

	// ############### Message - Functions ###############

	// Functions for adding messages to the chat
	void AddMessageToChat(const FString& Author, const FString& MessageText);
	void AddMessageToChatFromUser(const FString& MessageText);
	void AddMessageToChatFromGPT(const FString& MessageText);

	// Functions for remove messages at the chat
	UFUNCTION()
	void RemoveLastGPTMessageFromScrollBox();

	UFUNCTION()
	void HandleGPTResponse(const FString& Response);

	// GPT-Instanz
	UPROPERTY()
	UNN_Cpp_GPT* GPT;

};
