// NN_Cpp_Widget_MainOptionsChat.cpp

#include "Widgets/Main/NN_Cpp_Widget_MainOptionsChat.h"

void UNN_Cpp_Widget_MainOptionsChat::NativeConstruct()
{
	Super::NativeConstruct();

	BackButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_MainOptionsChat::OnBackButtonClicked);
	UpButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_MainOptionsChat::OnUpButtonClicked);
	DownButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_MainOptionsChat::OnDownButtonClicked);

	APIKeySaveButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_MainOptionsChat::OnAPIKeySaveButtonClicked);

	MaxConversationHistorySizeText->SetText(FText::AsNumber(MaxConversationHistorySize));
}

bool UNN_Cpp_Widget_MainOptionsChat::IsShortSummaryGenerationEnabled() const
{
	return GenerateShortSummaryCheckBox->IsChecked();
}

bool UNN_Cpp_Widget_MainOptionsChat::IsMaxSummaryGenerationEnabled() const
{
	return GenerateMaxSummaryCheckBox->IsChecked();
}

bool UNN_Cpp_Widget_MainOptionsChat::IsInfoGenerationEnabled() const
{
	return GenerateInfoCheckBox->IsChecked();
}

bool UNN_Cpp_Widget_MainOptionsChat::IsSuggestionGenerationEnabled() const
{
	return GenerateSuggestionCheckBox->IsChecked();
}

bool UNN_Cpp_Widget_MainOptionsChat::IsDescriptionGenerationForImageEnabled() const
{
	return GenerateImageDescriptionCheckBox->IsChecked();
}

bool UNN_Cpp_Widget_MainOptionsChat::IsGenerateImageFromDiscriptionEnabled() const
{
	return GenerateImageCheckBox->IsChecked();
}

int UNN_Cpp_Widget_MainOptionsChat::GetMaxConversationHistorySize() const
{
	return MaxConversationHistorySize;
}

void UNN_Cpp_Widget_MainOptionsChat::OnBackButtonClicked()
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->ShowMainMenuWidgetViaInterface();
	}
}

void UNN_Cpp_Widget_MainOptionsChat::OnAPIKeySaveButtonClicked()
{
	if (APIKeyInputText)
	{
		FString InputAPIKey = APIKeyInputText->GetText().ToString();

		if (InputAPIKey.IsEmpty())
		{
			UE_LOG(LogTemp, Warning, TEXT("Cannot save an empty API Key"));
			return;
		}

		FString FilePath = FPaths::ProjectDir() + TEXT("config/keys.txt");
		if (FFileHelper::SaveStringToFile(InputAPIKey, *FilePath))
		{
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("API Key successfully saved!"));
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("Failed to save API Key."));
		}
	}
}

void UNN_Cpp_Widget_MainOptionsChat::OnUpButtonClicked()
{
	if (MaxConversationHistorySize < 20)
	{
		MaxConversationHistorySize++;
		MaxConversationHistorySizeText->SetText(FText::AsNumber(MaxConversationHistorySize));
	}
}

void UNN_Cpp_Widget_MainOptionsChat::OnDownButtonClicked()
{
	if (MaxConversationHistorySize > 4)
	{
		MaxConversationHistorySize--;
		MaxConversationHistorySizeText->SetText(FText::AsNumber(MaxConversationHistorySize));
	}
}
