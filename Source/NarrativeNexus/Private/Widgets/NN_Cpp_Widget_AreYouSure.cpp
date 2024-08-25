// NN_Cpp_Widget_AreYouSure.cpp

#include "Widgets/NN_Cpp_Widget_AreYouSure.h"

void UNN_Cpp_Widget_AreYouSure::NativeConstruct()
{
	Super::NativeConstruct();

	YesButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_AreYouSure::OnYesButtonClicked);
	NoButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_AreYouSure::OnNoButtonClicked);
}

void UNN_Cpp_Widget_AreYouSure::OnYesButtonClicked()
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->OnYesButtonClickedForGameChatWidgetViaInterface();
	}

	SetWidgetVisibility();
}

void UNN_Cpp_Widget_AreYouSure::OnNoButtonClicked()
{
	SetWidgetVisibility();
}

void UNN_Cpp_Widget_AreYouSure::SetWidgetVisibility()
{
	if (this->IsVisible())
	{
		this->SetVisibility(ESlateVisibility::Collapsed);
	}
	else
	{
		this->SetVisibility(ESlateVisibility::Visible);
	}
}

void UNN_Cpp_Widget_AreYouSure::WriteAreYouSureMessage()
{

}

bool UNN_Cpp_Widget_AreYouSure::IsWidgetVisible() const
{
	return this->IsVisible();
}
