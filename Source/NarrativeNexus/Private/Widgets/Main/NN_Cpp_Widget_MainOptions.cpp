// NN_Cpp_Widget_MainOptions.cpp

#include "Widgets/Main/NN_Cpp_Widget_MainOptions.h"

void UNN_Cpp_Widget_MainOptions::NativeConstruct()
{
	Super::NativeConstruct();

	BackButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_MainOptions::OnBackButtonClicked);
	GenerateImageCheckBox->OnCheckStateChanged.AddDynamic(this, &UNN_Cpp_Widget_MainOptions::OnGenerateImageCheckBoxChanged);
	GenerateSummaryCheckBox->OnCheckStateChanged.AddDynamic(this, &UNN_Cpp_Widget_MainOptions::OnGenerateSummaryCheckBoxChanged);
	UpButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_MainOptions::OnUpButtonClicked);
	DownButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_MainOptions::OnDownButtonClicked);

	MessageNumberText->SetText(FText::AsNumber(CurrentMessageNumber));
}

void UNN_Cpp_Widget_MainOptions::OnBackButtonClicked()
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->HideWidget(this);
		Interface->ShowMainMenuWidgetViaInterface();
	}
}

void UNN_Cpp_Widget_MainOptions::OnGenerateSummaryCheckBoxChanged(bool bIsChecked)
{
	// DEBUG
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, bIsChecked ? TEXT("Summary Generation Enabled") : TEXT("Summary Generation Disabled"));
}

bool UNN_Cpp_Widget_MainOptions::IsSummaryGenerationEnabled() const
{
	return GenerateSummaryCheckBox->IsChecked();
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
	if (CurrentMessageNumber < 20)
	{
		CurrentMessageNumber++;
		MessageNumberText->SetText(FText::AsNumber(CurrentMessageNumber));
	}
}

void UNN_Cpp_Widget_MainOptions::OnDownButtonClicked()
{
	if (CurrentMessageNumber > 4)
	{
		CurrentMessageNumber--;
		MessageNumberText->SetText(FText::AsNumber(CurrentMessageNumber));
	}
}

int UNN_Cpp_Widget_MainOptions::GetCurrentMessageNumber() const
{
	return CurrentMessageNumber;
}
