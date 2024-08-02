// Fill out your copyright notice in the Description page of Project Settings.
// NN_Cpp_Widget_GameChat.cpp

#include "Widgets/Game/NN_Cpp_Widget_GameChat.h"

void UNN_Cpp_Widget_GameChat::NativeConstruct()
{
	Super::NativeConstruct();

	BackButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_GameChat::OnBackButtonClicked);
	SendButtom->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_GameChat::OnSendButtomClicked);

	// Initialize ChatGPT
	ChatGPT = UNN_Cpp_ChatGPT::CreateChatGPT(this);

	// Register for ChatGPT response callback
	if (ChatGPT)
	{
		ChatGPT->OnChatGPTResponseReceived.AddDynamic(this, &UNN_Cpp_Widget_GameChat::HandleChatGPTResponse);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to initialize ChatGPT in NativeConstruct"));
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Failed to initialize ChatGPT in NativeConstruct"));

	}
}

void UNN_Cpp_Widget_GameChat::OnBackButtonClicked()
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->HideWidget(this);
		Interface->ShowGameMenuWidgetViaInterface();
	}
}

void UNN_Cpp_Widget_GameChat::OnSendButtomClicked()
{
	if (InputMessageFeld && ChatGPT)
	{
		// Get the input text
		FString InputText = InputMessageFeld->GetText().ToString();

		// Check for empty input
		if (InputText.IsEmpty())
		{
			UE_LOG(LogTemp, Warning, TEXT("Cannot send an empty message"));
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Cannot send an empty message"));

			return;
		}

		// Add the user's message to the chat window
		AddMessageToChatFromUser(InputText);

		// Send the message to ChatGPT
		ChatGPT->SendMessageToChatGPT(InputText);
	}
}

void UNN_Cpp_Widget_GameChat::HandleChatGPTResponse(const FString& Response)
{
	AddMessageToChatFromChatGPT(Response);
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("F00 F00"));
}

void UNN_Cpp_Widget_GameChat::AddMessageToChatFromUser(const FString& MessageText)
{
	AddMessageToChat(TEXT("Arkadius"), MessageText);
}

void UNN_Cpp_Widget_GameChat::AddMessageToChatFromChatGPT(const FString& MessageText)
{
	AddMessageToChat(TEXT("ChatGPT"), MessageText);
}

void UNN_Cpp_Widget_GameChat::AddMessageToChat(const FString& Author, const FString& MessageText)
{
	// Create a new Message widget instance
	if (GameChatMessageWidgetClass && MessageScrollBox)
	{
		UUserWidget* NewMessageWidget = CreateWidget<UUserWidget>(this, GameChatMessageWidgetClass);

		if (NewMessageWidget)
		{
			// Set the text of the MessageAuthor and Message text blocks
			if (UTextBlock* AuthorTextBlock = Cast<UTextBlock>(NewMessageWidget->GetWidgetFromName(TEXT("MessageAuthor"))))
			{
				AuthorTextBlock->SetText(FText::FromString(Author));
			}

			if (UTextBlock* MessageTextBlock = Cast<UTextBlock>(NewMessageWidget->GetWidgetFromName(TEXT("Message"))))
			{
				MessageTextBlock->SetText(FText::FromString(MessageText));
			}

			// Add the new message to the scroll box
			MessageScrollBox->AddChild(NewMessageWidget);

			// Scroll to the bottom to show the latest message
			MessageScrollBox->ScrollToEnd();
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Failed to create new message widget"));
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Failed to create new message widget"));

		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("GameChatMessageWidgetClass or MessageScrollBox is nullptr"));
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("GameChatMessageWidgetClass or MessageScrollBox is nullptr"));

	}
}

void UNN_Cpp_Widget_GameChat::OnSelectContinueClicked()
{
}

void UNN_Cpp_Widget_GameChat::OnSelectLeftClicked()
{
}

void UNN_Cpp_Widget_GameChat::OnSelectRightClicked()
{
}
