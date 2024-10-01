// NN_Cpp_Widget_AreYouSure.cpp

#include "Widgets/NN_Cpp_Widget_AreYouSure.h"

void UNN_Cpp_Widget_AreYouSure::NativeConstruct()
{
	Super::NativeConstruct();

	YesButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_AreYouSure::OnYesButtonClicked);
	NoButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_AreYouSure::OnNoButtonClicked);
}

void UNN_Cpp_Widget_AreYouSure::SetTriggeredButton(ETriggeredButton InTriggeredButton)
{
	TriggeredButton = InTriggeredButton;
}

void UNN_Cpp_Widget_AreYouSure::ShowAreYouSureWidget()
{
	this->SetVisibility(ESlateVisibility::Visible);
}

void UNN_Cpp_Widget_AreYouSure::HideAreYouSureWidget()
{
	this->SetVisibility(ESlateVisibility::Collapsed);
}

void UNN_Cpp_Widget_AreYouSure::OnYesButtonClicked()
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		switch (TriggeredButton)
		{
		case ETriggeredButton::MainButton:
			Interface->OnYesButtonClickedAfterMainButtonViaInterface();
			HideAreYouSureWidget();
			break;
		case ETriggeredButton::GameButton:
			Interface->OnYesButtonClickedAfterGameButtonViaInterface();
			HideAreYouSureWidget();
			break;
		case ETriggeredButton::CreatorButton:
			Interface->OnYesButtonClickedAfterCreatorButtonViaInterface();
			HideAreYouSureWidget();
			break;
		case ETriggeredButton::ReaktionButton:
			
			break;
		case ETriggeredButton::BackGameChatButton:
			Interface->OnYesButtonClickedAfterBackGameChatButtonViaInterface();
			HideAreYouSureWidget();
			break;
		case ETriggeredButton::BackCreateButton:
			Interface->OnYesButtonClickedAfterBackCreateButtonViaInterface();
			HideAreYouSureWidget();
			break;
		default:
			break;
		}
	}
}

void UNN_Cpp_Widget_AreYouSure::OnNoButtonClicked()
{
	HideAreYouSureWidget();
}

void UNN_Cpp_Widget_AreYouSure::WriteAreYouSureMessage()
{

}
