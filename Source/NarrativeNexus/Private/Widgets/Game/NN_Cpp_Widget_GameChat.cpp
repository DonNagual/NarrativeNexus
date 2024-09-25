// NN_Cpp_Widget_GameChat.cpp

#include "Widgets/Game/NN_Cpp_Widget_GameChat.h"

void UNN_Cpp_Widget_GameChat::NativeConstruct()
{
	Super::NativeConstruct();

	SendButtom->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_GameChat::OnSendButtomClicked);
	BackButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_GameChat::OnBackButtonClicked);
	ReaktionButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_GameChat::OnReaktionButtonClicked);
	RepeatButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_GameChat::OnRepeatButtonClicked);

	SwitchToInfoButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_GameChat::OnSwitchToInfoButtonClicked);
	SwitchToSummaryButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_GameChat::OnSwitchToSummaryButtonClicked);
	SwitchToImageButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_GameChat::OnSwitchToImageButtonClicked);

	GenerateInfoButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_GameChat::OnGenerateInfoButtonClicked);
	GenerateSummaryButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_GameChat::OnGenerateSummaryButtonClicked);
	GenerateImageButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_GameChat::OnGenerateImageButtonClicked);

	SelectTopButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_GameChat::OnSelectTopButtonClicked);
	SelectMiddleButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_GameChat::OnSelectMiddleButtonClicked);
	SelectLowerButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_GameChat::OnSelectLowerButtonClicked);

	if (TextWidgetSwitcher)
	{
		TextWidgetSwitcher->SetActiveWidgetIndex(1);
	}
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
	AddMessageToChatFromGPT(Response);
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
		// Scroll backwards through the children of the MessageScrollBox to find the last widget of CGPT
		for (int32 i = MessageScrollBox->GetChildrenCount() - 1; i >= 0; i--)
		{
			UWidget* ChildWidget = MessageScrollBox->GetChildAt(i);
			if (UUserWidget* MessageWidget = Cast<UUserWidget>(ChildWidget))
			{
				// Check whether the widget has the author "GPT"
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

		// Send the message to GPT
		GPT->SendMessageToGPT(InputText);

		// Clear the input field
		InputMessageFeld->SetText(FText::GetEmpty());
	}
}

void UNN_Cpp_Widget_GameChat::OnBackButtonClicked()
{
	RemoveLastGPTMessageFromScrollBox();

	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->ShowAreYouSureWidgetViaInterface();
		Interface->SetTriggeredWidgetViaInterface(ETriggeredButton::BackButton);
	}
}

void UNN_Cpp_Widget_GameChat::OnReaktionButtonClicked()
{
	if (ReaktionButton)
	{
		GenerateConversationChoices();
	}
}

void UNN_Cpp_Widget_GameChat::OnRepeatButtonClicked()
{
	if (GPT)
	{
		GPT->GetConversationManager()->RemoveLastMessageFromAssistant();

		RemoveLastGPTMessageFromScrollBox();

		const TArray<TSharedPtr<FJsonObject>>& ConversationHistory = GPT->GetConversationManager()->GetConversationHistory();
		if (ConversationHistory.Num() > 0)
		{
			FString LastConversation = ConversationHistory.Last()->GetStringField(TEXT("content"));
			GPT->SendMessageToGPT(LastConversation);
		}
	}
}

void UNN_Cpp_Widget_GameChat::OnSwitchToInfoButtonClicked()
{
	if (TextWidgetSwitcher)
	{
		int32 index = TextWidgetSwitcher->GetActiveWidgetIndex();
		if (index != 0)
		{
			TextWidgetSwitcher->SetActiveWidgetIndex(0);
		}
	}
}

void UNN_Cpp_Widget_GameChat::OnSwitchToSummaryButtonClicked()
{
	if (TextWidgetSwitcher)
	{
		int32 index = TextWidgetSwitcher->GetActiveWidgetIndex();
		if (index != 1)
		{
			TextWidgetSwitcher->SetActiveWidgetIndex(1);
		}
	}
}

void UNN_Cpp_Widget_GameChat::OnSwitchToImageButtonClicked()
{
	if (TextWidgetSwitcher)
	{
		int32 index = TextWidgetSwitcher->GetActiveWidgetIndex();
		if (index != 2)
		{
			TextWidgetSwitcher->SetActiveWidgetIndex(2);
		}
	}
}

void UNN_Cpp_Widget_GameChat::OnGenerateInfoButtonClicked()
{
	int32 index = TextWidgetSwitcher->GetActiveWidgetIndex();
	if (index != 0)
	{
		OnSwitchToInfoButtonClicked();
	}
	GenerateInfo();
}

void UNN_Cpp_Widget_GameChat::OnGenerateSummaryButtonClicked()
{
	int32 index = TextWidgetSwitcher->GetActiveWidgetIndex();
	if (index != 1)
	{
		OnSwitchToSummaryButtonClicked();
	}
	GenerateShortSummary();
}

void UNN_Cpp_Widget_GameChat::OnGenerateImageButtonClicked()
{
	int32 index = TextWidgetSwitcher->GetActiveWidgetIndex();
	if (index != 2)
	{
		OnSwitchToImageButtonClicked();
	}
	GenerateImageDescription();
	// TODO
}

void UNN_Cpp_Widget_GameChat::OnSelectTopButtonClicked()
{
	if (TopButtonText)
	{
		FString SuggestionText = TopButtonText->GetText().ToString();

		if (SuggestionText.IsEmpty())
		{
			UE_LOG(LogTemp, Warning, TEXT("Cannot send an empty message"));
			return;
		}

		AddMessageToChatFromUser(SuggestionText);

		GPT->SendMessageToGPT(SuggestionText);
	}
}

void UNN_Cpp_Widget_GameChat::OnSelectMiddleButtonClicked()
{
	if (MiddleButtonText)
	{
		FString SuggestionText = MiddleButtonText->GetText().ToString();

		if (SuggestionText.IsEmpty())
		{
			UE_LOG(LogTemp, Warning, TEXT("Cannot send an empty message"));
			return;
		}

		AddMessageToChatFromUser(SuggestionText);

		GPT->SendMessageToGPT(SuggestionText);
	}
}

void UNN_Cpp_Widget_GameChat::OnSelectLowerButtonClicked()
{
	if (LowerButtonText)
	{
		FString SuggestionText = LowerButtonText->GetText().ToString();

		if (SuggestionText.IsEmpty())
		{
			UE_LOG(LogTemp, Warning, TEXT("Cannot send an empty message"));
			return;
		}

		AddMessageToChatFromUser(SuggestionText);

		GPT->SendMessageToGPT(SuggestionText);
	}
}

void UNN_Cpp_Widget_GameChat::GenerateShortSummary()
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		if (!Interface->IsShortSummaryGenerationEnabledViaInterface())
		{
			UE_LOG(LogTemp, Error, TEXT("Summary generation is disabled in the options."));
			return;
		}
	}

	if (GPT)
	{
		GPT->GenerateShortSummaryFromConversation([this](const FString& OnShortSummaryGenerated)
		{
			if (SummaryText)
			{
				SummaryText->SetText(FText::FromString(OnShortSummaryGenerated));
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("Failed to set executive summary text."));
			}
		});
	}
}

// Generate a summary of the conversation
void UNN_Cpp_Widget_GameChat::GenerateMaxSummary()
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		if (!Interface->IsMaxSummaryGenerationEnabledViaInterface())
		{
			UE_LOG(LogTemp, Error, TEXT("Summary generation is disabled in the options."));
			return;
		}
	}

	// Generate Max Summary From Conversation
	if (GPT)
	{
		// TODO
		GPT->GenerateMaxSummaryFromConversation([this](const FString& OnMaxSummaryGenerated) {});
	}
}

void UNN_Cpp_Widget_GameChat::GenerateImageDescription()
{
	// Check if Generate Image Description is enabled
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		if (!Interface->IsDescriptionGenerationForImageEnabledViaInterface())
		{
			UE_LOG(LogTemp, Error, TEXT("Generate Image Description is disabled in the options."));
			return;
		}
	}
	// Generate Image Description From Conversation
	if (GPT)
	{
		GPT->GenerateImageDescriptionFromConversation([this](const FString& OnImageDescriptionGenerated) {
		if (ImageText)
		{
			ImageText->SetText(FText::FromString(OnImageDescriptionGenerated));
			GenerateChatImage();
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Failed to set Image Description text."));
		}
		});
	}
}

void UNN_Cpp_Widget_GameChat::GenerateChatImage()
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		if (!Interface->IsGenerateImageFromDiscriptionEnabledViaInterface())
		{
			UE_LOG(LogTemp, Error, TEXT("Generate Image From Image Description is disabled in the options."));
			return;
		}
	}
	// Generate Image From Image Description
	if (GPT)
	{	
		GPT->GenerateImageFromDescription([this](UTexture2D* GeneratedImage)
		{
			if (GeneratedImage && StoryImage)
			{
				StoryImage->SetBrushFromTexture(GeneratedImage, true);
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("Failed to generate or display image."));
			}
		});
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("GPT instance is null."));
	}
}

void UNN_Cpp_Widget_GameChat::GenerateInfo()
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		if (!Interface->IsInfoGenerationEnabledViaInterface())
		{
			UE_LOG(LogTemp, Error, TEXT("Generate Info is disabled in the options."));
			return;
		}
	}

	// Generate Info From Conversation
	if (GPT)
	{
		GPT->GenerateInfoAboutConversation([this](const FString& OnInfoAboutConversationGenerated)
		{
			if (InfoText)
			{
				InfoText->SetText(FText::FromString(OnInfoAboutConversationGenerated));
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("Failed to set Image Description text."));
			}
		});
	}
}

void UNN_Cpp_Widget_GameChat::GenerateConversationChoices()
{
	if (GPT)
	{
		GPT->GenerateSuggestionsFromConversation([this](const FString& OnSuggestionsFromConversationGenerated)
		{
			// Access to the strings stored in the ConversationManager
			FString PositiveSuggestion = GPT->GetConversationManager()->GetPositiveSuggestion();
			FString NeutralSuggestion = GPT->GetConversationManager()->GetNeutralSuggestion();
			FString NegativeSuggestion = GPT->GetConversationManager()->GetNegativeSuggestion();

			// DEBUG
			UE_LOG(LogTemp, Warning, TEXT("PositiveSuggestion: %s"), *PositiveSuggestion);
			UE_LOG(LogTemp, Warning, TEXT("NeutralSuggestion: %s"), *NeutralSuggestion);
			UE_LOG(LogTemp, Warning, TEXT("NegativeSuggestion: %s"), *NegativeSuggestion);

			// Set the texts for the buttons as soon as the strings are filled
			if (!PositiveSuggestion.IsEmpty() && !NeutralSuggestion.IsEmpty() && !NegativeSuggestion.IsEmpty())
			{
				if (TopButtonText && MiddleButtonText && LowerButtonText)
				{
					TopButtonText->SetText(FText::FromString(PositiveSuggestion));
					MiddleButtonText->SetText(FText::FromString(NeutralSuggestion));
					LowerButtonText->SetText(FText::FromString(NegativeSuggestion));
				}
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Failed to set suggestions - one or more suggestions are empty."));
			}
		});
	}
}

bool UNN_Cpp_Widget_GameChat::IsGameChatWidgetVisible()
{
	return this->IsVisible();
}