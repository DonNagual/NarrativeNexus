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
	}
	Super::NativeDestruct();
}

void UNN_Cpp_Widget_GameChat::SetGPT(UNN_Cpp_GPT* InGPT)
{
	if (GPT)
	{
		GPT->OnGPTResponseReceived.RemoveAll(this);
	}

	GPT = InGPT;

	if (GPT)
	{
		GPT->OnGPTResponseReceived.AddDynamic(this, &UNN_Cpp_Widget_GameChat::HandleGPTResponse);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("NN_Cpp_Widget_GameChat: Failed to initialize GPT in SetGPT"));
	}
}

// ############### GPT - Functions ###############

void UNN_Cpp_Widget_GameChat::HandleGPTResponse(const FString& Response)
{
	AddMessageToChatFromGPT(Response);;
}

void UNN_Cpp_Widget_GameChat::AddMessageToChatFromUser(const FString& MessageText)
{
	AddMessageToChat(TEXT("Arkadius"), MessageText);
}

void UNN_Cpp_Widget_GameChat::AddMessageToChatFromGPT(const FString& MessageText)
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

void UNN_Cpp_Widget_GameChat::RemoveLastGPTMessageFromScrollBox()
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

void UNN_Cpp_Widget_GameChat::RemoveAllGPTMessagesFromScrollBox()
{
	MessageScrollBox->ClearChildren();
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
	RemoveAllGPTMessagesFromScrollBox();

	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		if (auto* GPTInterface = Cast<INN_Cpp_IF_GPT>(GetWorld()->GetFirstPlayerController()))
		{
			GPTInterface->DestroyGPT();
		}
		Interface->HideWidget(this);
		Interface->ShowGameNavigatorWidgetViaInterface();
		Interface->OnGameNavigatorWidgetVisibilityChangedViaInterface();

	}
}

void UNN_Cpp_Widget_GameChat::OnRepeatButtonClicked()
{
	RemoveLastGPTMessageFromScrollBox();
}

void UNN_Cpp_Widget_GameChat::OnResetButtonClicked()
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		//Interface->SetAreYouSureWidgetVisibilityViaInterface();
	}
}

void UNN_Cpp_Widget_GameChat::ClearMessages()
{
	if (GPT)
	{
		MessageScrollBox->ClearChildren();
	}
}

bool UNN_Cpp_Widget_GameChat::IsGameChatWidgetVisible()
{
	return this->IsVisible();
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

void UNN_Cpp_Widget_GameChat::GenerateShortSummary(const FString& Summary)
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		if (!Interface->IsSummaryGenerationEnabledViaInterface())
		{
			UE_LOG(LogTemp, Error, TEXT("Summary generation is disabled in the options."));
			return;
		}
	}

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

// Generate a summary of the conversation
void UNN_Cpp_Widget_GameChat::GenerateMaxSummary(const FString& Summary)
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		if (!Interface->IsSummaryGenerationEnabledViaInterface())
		{
			UE_LOG(LogTemp, Error, TEXT("Summary generation is disabled in the options."));
			return;
		}
	}

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

void UNN_Cpp_Widget_GameChat::GenerateImageDescription(const FString& Summary)
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
	GPT->GenerateImageDescriptionFromConversation(Summary, [this](const FString& OnImageSummaryGenerated)
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
	GPT->GenerateImageFromDescription(Summary, [this](UTexture2D* OnImageGenerated)
		{
			if (OnImageGenerated && StoryImage)
			{
				// Show image
				StoryImage->SetBrushFromTexture(OnImageGenerated);
				GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Purple, TEXT("Image generated successfully."));
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("Failed to generate image from conversation"));
			}
		});
}
