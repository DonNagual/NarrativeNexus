// NN_Cpp_Widget_MainOptions.cpp

#include "Widgets/Main/NN_Cpp_Widget_MainOptions.h"

void UNN_Cpp_Widget_MainOptions::NativeConstruct()
{
	Super::NativeConstruct();

	BackButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_MainOptions::OnBackButtonClicked);
	GenerateImageCheckBox->OnCheckStateChanged.AddDynamic(this, &UNN_Cpp_Widget_MainOptions::OnGenerateImageCheckBoxChanged);
	GenerateShortSummaryCheckBox->OnCheckStateChanged.AddDynamic(this, &UNN_Cpp_Widget_MainOptions::OnGenerateShortSummaryCheckBoxChanged);
	GenerateMaxSummaryCheckBox->OnCheckStateChanged.AddDynamic(this, &UNN_Cpp_Widget_MainOptions::OnGenerateMaxSummaryCheckBoxChanged);
	UpButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_MainOptions::OnUpButtonClicked);
	DownButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_MainOptions::OnDownButtonClicked);

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

bool UNN_Cpp_Widget_MainOptions::IsShortSummaryGenerationEnabled() const
{
	return GenerateShortSummaryCheckBox->IsChecked();
}

bool UNN_Cpp_Widget_MainOptions::IsMaxSummaryGenerationEnabled() const
{
	return GenerateMaxSummaryCheckBox->IsChecked();
}

void UNN_Cpp_Widget_MainOptions::OnGenerateImageCheckBoxChanged(bool bIsChecked)
{
	// DEBUG
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, bIsChecked ? TEXT("Image Generation Enabled") : TEXT("Image Generation Disabled"));
}

bool UNN_Cpp_Widget_MainOptions::IsImageGenerationEnabled() const
{
	return GenerateImageCheckBox->IsChecked();
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
