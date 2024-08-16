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
}

void UNN_Cpp_Widget_GameChat::NativeDestruct()
{
	// Cleanup before the widget is destroyed
	if (GPT)
	{
		GPT->OnGPTResponseReceived.RemoveAll(this);
		GPT = nullptr;

		UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_Widget_GameChat - DestructGPT: %p\n"), GPT);
	}

	Super::NativeDestruct();
}

void UNN_Cpp_Widget_GameChat::SetGPT(UNN_Cpp_GPT* InGPT)
{
	GPT = InGPT;
	if (GPT)
	{
		GPT->OnGPTResponseReceived.AddDynamic(this, &UNN_Cpp_Widget_GameChat::HandleChatGPTResponse);
		// DEBUG
		UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_Widget_GameChat - ConstructGPT: %p\n"), InGPT);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("NN_Cpp_Widget_GameChat: Failed to initialize GPT in SetGPT"));
	}
}

// ############### GPT - Functions ###############

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
	AddMessageToChat(TEXT("GPT"), MessageText);
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

			// Check how many messages have been generated and create a summary
			static int32 MessageCounter = 0;
			MessageCounter++;

			if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
			{
				int32 CurrentMessageNumber = Interface->GetCurrentMessageNumberViaInterface();
				if (MessageCounter >= CurrentMessageNumber)
				{
					FString AllMessages = GetAllMessagesFromConversationHistory();
					GenerateShortSummary(AllMessages);
					MessageCounter = 0;
				}
			}
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
					if (AuthorTextBlock->GetText().ToString() == TEXT("GPT"))
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
	if (InputMessageFeld && GPT)
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
		GPT->SendMessageToGPT(InputText);

		// Clear the input field
		InputMessageFeld->SetText(FText::GetEmpty());
	}
}

void UNN_Cpp_Widget_GameChat::OnBackButtonClicked()
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		if (auto* GPTInterface = Cast<INN_Cpp_IF_GPT>(GetWorld()->GetFirstPlayerController()))
		{
			GPTInterface->DestroyGPT();
		}
		Interface->HideWidget(this);
		Interface->ShowGameMenuWidgetViaInterface();
	}
}

void UNN_Cpp_Widget_GameChat::OnRepeatButtonClicked()
{
	if (GPT && GPT->GetConversationHistory().Num() > 0)
	{
		auto& MutableConversationHistory = GPT->GetMutableConversationHistory();
		// Check whether the last message comes from GPT (assistant) or from the user (user)
		TSharedPtr<FJsonObject> LastMessageObject = MutableConversationHistory.Last();
		FString Role = LastMessageObject->GetStringField(TEXT("role"));

		if (Role == TEXT("assistant"))
		{
			// Romove the last message from the array containing the response from GPT
			MutableConversationHistory.RemoveAt(MutableConversationHistory.Num() - 1);

			// Also remove the last message from GPT from the MessageScrollBox
			RemoveLastChatGPTMessageFromScrollBox();

			// Resend the last message to GPT
			FString LastUserMessage = MutableConversationHistory.Last()->GetStringField(TEXT("content"));
			GPT->SendMessageToGPT(LastUserMessage);
		}
		else
		{
			// If the last message is not from ChatGPT, resend the entire history
			GPT->SendMessageToGPT(MutableConversationHistory.Last()->GetStringField(TEXT("content")));
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No previous responde available to repeat"));
	}
}

void UNN_Cpp_Widget_GameChat::OnResetButtonClicked()
{
	if (GPT)
	{
		GPT->ResetConversation();
		MessageScrollBox->ClearChildren();
	}
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

FString UNN_Cpp_Widget_GameChat::GetAllMessagesFromConversationHistory()
{
	// Get all messages from the conversation history
	FString AllMessages;
	auto& ConversationHistory = GPT->GetMutableConversationHistory();
	for (int32 i = 0; i < ConversationHistory.Num(); ++i)
	{
		AllMessages += ConversationHistory[i]->GetStringField(TEXT("content")) + TEXT("\n");
	}
	// DEBUG
	//UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_Widget_GameChat - AllMessages: %p\n-- %s\n"), *AllMessages, *AllMessages);
	return AllMessages;
}

void UNN_Cpp_Widget_GameChat::GenerateShortSummary(const FString& Summary)
{
	// Check if Summary generation is enabled
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		if (!Interface->IsSummaryGenerationEnabledViaInterface())
		{
			UE_LOG(LogTemp, Error, TEXT("Summary generation is disabled in the options."));
			return;
		}
	}

	// Generate a summary of the conversation
	GPT->GenerateShortSummaryFromConversation(Summary, [this](const FString& OnShortSummaryGenerated)
		{
			if (ExecutiveSummaryText)
			{
				ExecutiveSummaryText->SetText(FText::FromString(OnShortSummaryGenerated));
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("Failed to set executive summary text."));
			}
		});
}

void UNN_Cpp_Widget_GameChat::GenerateMaxSummary(const FString& Summary)
{
	// Check if Summary generation is enabled
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		if (!Interface->IsSummaryGenerationEnabledViaInterface())
		{
			UE_LOG(LogTemp, Error, TEXT("Summary generation is disabled in the options."));
			return;
		}
	}

	// Generate a summary of the conversation
	GPT->GenerateMaxSummaryFromConversation(Summary, [this](const FString& OnMaxSummaryGenerated)
		{
			if (ExecutiveSummaryText)
			{
				ExecutiveSummaryText->SetText(FText::FromString(OnMaxSummaryGenerated));
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("Failed to set executive summary text."));
			}
		});
}

void UNN_Cpp_Widget_GameChat::GenerateImageSummary(const FString& Summary)
{
	// Check if Summary generation is enabled
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		if (!Interface->IsSummaryGenerationEnabledViaInterface())
		{
			UE_LOG(LogTemp, Error, TEXT("Summary generation is disabled in the options."));
			return;
		}
	}

	// Generate a summary of the conversation
	GPT->GenerateImageSummaryFromConversation(Summary, [this](const FString& OnImageSummaryGenerated)
		{
			if (ExecutiveSummaryText)
			{
				ExecutiveSummaryText->SetText(FText::FromString(OnImageSummaryGenerated));
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("Failed to set executive summary text."));
			}
		});
}

void UNN_Cpp_Widget_GameChat::GenerateChatImage(const FString& Summary)
{
	// Check if image generation is enabled
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		if (!Interface->IsImageGenerationEnabledViaInterface())
		{
			UE_LOG(LogTemp, Error, TEXT("Image generation is disabled in the options."));
			return;
		}
	}

	// Generate the image based on the summary
	GPT->GenerateChatImageFromConversation(Summary, [this](UTexture2D* OnChatImageGenerated)
		{
			if (OnChatImageGenerated && StoryImage)
			{
				// Show image
				StoryImage->SetBrushFromTexture(OnChatImageGenerated);
				GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Purple, TEXT("Image generated successfully."));
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("Failed to generate image from conversation"));
			}
		});
}
