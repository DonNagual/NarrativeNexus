// NN_Cpp_Widget_CharacterMenu.cpp

#include "Widgets/Creator/Character/NN_Cpp_Widget_CharacterMenu.h"

void UNN_Cpp_Widget_CharacterMenu::NativeConstruct()
{
	Super::NativeConstruct();

	BackCreateButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CharacterMenu::OnBackCreateButtonClicked);

	GeneralCreateButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CharacterMenu::OnSwitchToCharacterGeneralWidget);
	AttributesCreateButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CharacterMenu::OnSwitchToCharacterAttributeWidget);
	AbilitiesCreateButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CharacterMenu::OnSwitchToCharacterAbilitiesWidget);
	BackgroundCreateButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CharacterMenu::OnSwitchToCharacterBackstoryWidget);
}

void UNN_Cpp_Widget_CharacterMenu::OnClearButtonClicked()
{
}

void UNN_Cpp_Widget_CharacterMenu::OnSaveButtonClicked()
{
}

void UNN_Cpp_Widget_CharacterMenu::OnBackCreateButtonClicked()
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->ShowAreYouSureWidgetViaInterface();
		Interface->SetTriggeredWidgetViaInterface(ETriggeredButton::BackCreateButton);
	}
}

void UNN_Cpp_Widget_CharacterMenu::OnSwitchToCharacterGeneralWidget()
{
	if (CreateWidgetSwitcher)
	{
		int32 index = CreateWidgetSwitcher->GetActiveWidgetIndex();
		if (index != 0)
		{
			CreateWidgetSwitcher->SetActiveWidgetIndex(0);
		}
	}
}

void UNN_Cpp_Widget_CharacterMenu::OnSwitchToCharacterAttributeWidget()
{
	if (CreateWidgetSwitcher)
	{
		int32 index = CreateWidgetSwitcher->GetActiveWidgetIndex();
		if (index != 1)
		{
			CreateWidgetSwitcher->SetActiveWidgetIndex(1);
		}
	}
}

void UNN_Cpp_Widget_CharacterMenu::OnSwitchToCharacterAbilitiesWidget()
{
	if (CreateWidgetSwitcher)
	{
		int32 index = CreateWidgetSwitcher->GetActiveWidgetIndex();
		if (index != 2)
		{
			CreateWidgetSwitcher->SetActiveWidgetIndex(2);
		}
	}
}

void UNN_Cpp_Widget_CharacterMenu::OnSwitchToCharacterBackstoryWidget()
{
	if (CreateWidgetSwitcher)
	{
		int32 index = CreateWidgetSwitcher->GetActiveWidgetIndex();
		if (index != 3)
		{
			CreateWidgetSwitcher->SetActiveWidgetIndex(3);
		}
	}
}
