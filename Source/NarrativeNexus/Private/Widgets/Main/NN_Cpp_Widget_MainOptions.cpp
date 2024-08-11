// NN_Cpp_Widget_MainOptions.cpp

#include "Widgets/Main/NN_Cpp_Widget_MainOptions.h"

void UNN_Cpp_Widget_MainOptions::NativeConstruct()
{
	Super::NativeConstruct();

	BackButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_MainOptions::OnBackButtonClicked);
	GenerateImageCheckBox->OnCheckStateChanged.AddDynamic(this, &UNN_Cpp_Widget_MainOptions::OnGenerateImageCheckBoxChanged);
}

void UNN_Cpp_Widget_MainOptions::OnBackButtonClicked()
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->HideWidget(this);
		Interface->ShowMainMenuWidgetViaInterface();
	}
}

void UNN_Cpp_Widget_MainOptions::OnGenerateImageCheckBoxChanged(bool bIsChecked)
{
	// DEBUG
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Blue, bIsChecked ? TEXT("Image Generation Enabled") : TEXT("Image Generation Disabled"));
}

bool UNN_Cpp_Widget_MainOptions::IsImageGenerationEnabled() const
{
	//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Blue, TEXT("F00 F00"));
	return GenerateImageCheckBox->IsChecked();
}
