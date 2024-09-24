// NN_Cpp_Widget_MainOptions.cpp

#include "Widgets/Main/NN_Cpp_Widget_MainOptions.h"

void UNN_Cpp_Widget_MainOptions::NativeConstruct()
{
	Super::NativeConstruct();

	BackButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_MainOptions::OnBackButtonClicked);
	GenerateShortSummaryCheckBox->OnCheckStateChanged.AddDynamic(this, &UNN_Cpp_Widget_MainOptions::OnGenerateShortSummaryCheckBoxChanged);
	GenerateMaxSummaryCheckBox->OnCheckStateChanged.AddDynamic(this, &UNN_Cpp_Widget_MainOptions::OnGenerateMaxSummaryCheckBoxChanged);
	GenerateImageDescriptionCheckBox->OnCheckStateChanged.AddDynamic(this, &UNN_Cpp_Widget_MainOptions::OnGenerateImageDescriptionCheckBox);
	GenerateImageCheckBox->OnCheckStateChanged.AddDynamic(this, &UNN_Cpp_Widget_MainOptions::OnGenerateImageCheckBoxChanged);
	UpButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_MainOptions::OnUpButtonClicked);
	DownButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_MainOptions::OnDownButtonClicked);

	APIKeySaveButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_MainOptions::OnAPIKeySaveButtonClicked);

	MaxConversationHistorySizeText->SetText(FText::AsNumber(MaxConversationHistorySize));
}

void UNN_Cpp_Widget_MainOptions::OnBackButtonClicked()
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->HideWidget(this);
		Interface->ShowMainMenuWidgetViaInterface();
	}
}

bool UNN_Cpp_Widget_MainOptions::IsShortSummaryGenerationEnabled() const
{
	return GenerateShortSummaryCheckBox->IsChecked();
}

bool UNN_Cpp_Widget_MainOptions::IsMaxSummaryGenerationEnabled() const
{
	return GenerateMaxSummaryCheckBox->IsChecked();
}

bool UNN_Cpp_Widget_MainOptions::IsInfoGenerationEnabled() const
{
	return GenerateInfoCheckBox->IsChecked();
}

bool UNN_Cpp_Widget_MainOptions::IsDescriptionGenerationForImageEnabled() const
{
	return GenerateImageDescriptionCheckBox->IsChecked();
}

bool UNN_Cpp_Widget_MainOptions::IsGenerateImageFromDiscriptionEnabled() const
{
	return GenerateImageCheckBox->IsChecked();
}

void UNN_Cpp_Widget_MainOptions::OnGenerateShortSummaryCheckBoxChanged(bool bIsChecked)
{
	// DEBUG
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, bIsChecked ? TEXT("Short Summary Generation Enabled") : TEXT("Short Summary Generation Disabled"));
}

void UNN_Cpp_Widget_MainOptions::OnGenerateMaxSummaryCheckBoxChanged(bool bIsChecked)
{
	// DEBUG
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, bIsChecked ? TEXT("Max Summary Generation Enabled") : TEXT("Max Summary Generation Disabled"));
}

void UNN_Cpp_Widget_MainOptions::OnGenerateImageDescriptionCheckBox(bool bIsChecked)
{
	// DEBUG
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, bIsChecked ? TEXT("Image Generation Description Enabled") : TEXT("Image Generation Description Disabled"));
}

void UNN_Cpp_Widget_MainOptions::OnGenerateImageCheckBoxChanged(bool bIsChecked)
{
	// DEBUG
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, bIsChecked ? TEXT("Image Generation Enabled") : TEXT("Image Generation Disabled"));
}

void UNN_Cpp_Widget_MainOptions::OnAPIKeySaveButtonClicked()
{
	if (APIKeyInputText)
	{
		// Get the input text
		FString InputAPIKey = APIKeyInputText->GetText().ToString();

		// Check for empty input
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

void UNN_Cpp_Widget_MainOptions::OnUpButtonClicked()
{
	if (MaxConversationHistorySize < 20)
	{
		MaxConversationHistorySize++;
		MaxConversationHistorySizeText->SetText(FText::AsNumber(MaxConversationHistorySize));
	}
}

void UNN_Cpp_Widget_MainOptions::OnDownButtonClicked()
{
	if (MaxConversationHistorySize > 4)
	{
		MaxConversationHistorySize--;
		MaxConversationHistorySizeText->SetText(FText::AsNumber(MaxConversationHistorySize));
	}
}

int UNN_Cpp_Widget_MainOptions::GetMaxConversationHistorySize() const
{
	return MaxConversationHistorySize;
}
