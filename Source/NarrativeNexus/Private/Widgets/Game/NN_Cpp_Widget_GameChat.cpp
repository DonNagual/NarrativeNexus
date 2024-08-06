// Fill out your copyright notice in the Description page of Project Settings.
// NN_Cpp_Widget_GameChat.cpp

#include "Widgets/Game/NN_Cpp_Widget_GameChat.h"

void UNN_Cpp_Widget_GameChat::NativeConstruct()
{
	Super::NativeConstruct();

	SendButtom->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_GameChat::OnSendButtomClicked);
	BackButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_GameChat::OnBackButtonClicked);
	RepeatButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_GameChat::OnRepeatButtonClicked);
	ResetButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_GameChat::OnResetButtonClicked);
	InfoButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_GameChat::OnInfoButtonClicked);
	SummaryButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_GameChat::OnSummaryButtonClicked);
	ContinueButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_GameChat::OnContinueButtonClicked);
	SelectTopButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_GameChat::OnSelectTopButtonClicked);
	SelectMiddleButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_GameChat::OnSelectMiddleButtonClicked);
	SelectLowerButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_GameChat::OnSelectLowerButtonClicked);

	// Initialize ChatGPT
	ChatGPT = TStrongObjectPtr<UNN_Cpp_ChatGPT>(NewObject<UNN_Cpp_ChatGPT>(this));

	// Register for ChatGPT response callback
	if (ChatGPT.IsValid())
	{
		ChatGPT->OnChatGPTResponseReceived.AddDynamic(this, &UNN_Cpp_Widget_GameChat::HandleChatGPTResponse);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to initialize ChatGPT in NativeConstruct"));
	}
}

void UNN_Cpp_Widget_GameChat::NativeDestruct()
{
	// Cleanup before the widget is destroyed
	if (ChatGPT.IsValid())
	{
		ChatGPT->OnChatGPTResponseReceived.RemoveAll(this);
	}

	Super::NativeDestruct();
}

// ############### ChatGPT - Functions ###############

void UNN_Cpp_Widget_GameChat::HandleChatGPTResponse(const FString& Response)
{
	AddMessageToChatFromChatGPT(Response);;
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
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("GameChatMessageWidgetClass or MessageScrollBox is nullptr"));
	}
}

void UNN_Cpp_Widget_GameChat::RemoveLastChatGPTMessageFromScrollBox()
{
	if (MessageScrollBox)
	{
		// Scroll backwards through the children of the MessageScrollBox to find the last widget of ChatGPT
		for (int32 i = MessageScrollBox->GetChildrenCount() - 1; i >= 0; i--)
		{
			UWidget* ChildWidget = MessageScrollBox->GetChildAt(i);
			if (UUserWidget* MessageWidget = Cast<UUserWidget>(ChildWidget))
			{
				// Check whether the widget has the author "ChatGPT"
				if (UTextBlock* AuthorTextBlock = Cast<UTextBlock>(MessageWidget->GetWidgetFromName(TEXT("MessageAuthor"))))
				{
					if (AuthorTextBlock->GetText().ToString() == TEXT("ChatGPT"))
					{
						// Remove the widget from the MessageScrollBox
						MessageScrollBox->RemoveChildAt(i);
						break;
					}
				}
			}
		}
	}
}

// ############### Button - Functions ###############

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
			return;
		}

		// Add the user's message to the chat window
		AddMessageToChatFromUser(InputText);

		// Send the message to ChatGPT
		ChatGPT->SendMessageToChatGPT(InputText);

		// Clear the input field
		InputMessageFeld->SetText(FText::GetEmpty());
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

void UNN_Cpp_Widget_GameChat::OnRepeatButtonClicked()
{
	if (ChatGPT && ChatGPT->ConversationHistory.Num() > 0)
	{
		// Check whether the last message comes from ChatGPT (assistant) or from the user (user)
		TSharedPtr<FJsonObject> LastMessageObject = ChatGPT->ConversationHistory.Last();
		FString Role = LastMessageObject->GetStringField(TEXT("role"));

		if (Role == TEXT("assistant"))
		{
			// Romove the last message from the array containing the response from ChatGPT
			ChatGPT->ConversationHistory.RemoveAt(ChatGPT->ConversationHistory.Num() - 1);

			// Also remove the last message from ChatGPT from the MessageScrollBox
			RemoveLastChatGPTMessageFromScrollBox();

			// Resend the last message to ChatGPT
			FString LastUserMessage = ChatGPT->ConversationHistory.Last()->GetStringField(TEXT("content"));
			ChatGPT->SendMessageToChatGPT(LastUserMessage);

			//// DEBUG
			//AddMessageToChat(TEXT("System"), TEXT("Die letzte Nachricht wird erneut gesendet."));
		}
		else
		{
			// If the last message is not from ChatGPT, resend the entire history
			ChatGPT->SendMessageToChatGPT(ChatGPT->ConversationHistory.Last()->GetStringField(TEXT("content")));

			//// DEBUG
			//AddMessageToChat(TEXT("System"), TEXT("Die letzte Nachricht wird erneut gesendet."));
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No previous responde available to repeat"));
	}
}

void UNN_Cpp_Widget_GameChat::OnResetButtonClicked()
{
}

void UNN_Cpp_Widget_GameChat::OnInfoButtonClicked()
{
}

void UNN_Cpp_Widget_GameChat::OnSummaryButtonClicked()
{
}

void UNN_Cpp_Widget_GameChat::OnContinueButtonClicked()
{
}

void UNN_Cpp_Widget_GameChat::OnSelectTopButtonClicked()
{
}

void UNN_Cpp_Widget_GameChat::OnSelectMiddleButtonClicked()
{
}

void UNN_Cpp_Widget_GameChat::OnSelectLowerButtonClicked()
{
}
