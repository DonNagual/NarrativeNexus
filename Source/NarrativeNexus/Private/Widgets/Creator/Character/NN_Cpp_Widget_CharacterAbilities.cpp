// NN_Cpp_Widget_CharacterAbilities.cpp

#include "Widgets/Creator/Character/NN_Cpp_Widget_CharacterAbilities.h"

void UNN_Cpp_Widget_CharacterAbilities::NativeConstruct()
{
	Super::NativeConstruct();

	CombatAbilitiesButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CharacterAbilities::OnSwitchToCombatAbilitiesBorder);
	MagicalAbilitiesButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CharacterAbilities::OnSwitchToMagicalAbilitiesBorder);
	CraftingAbilitiesButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CharacterAbilities::OnSwitchToCraftingAbilitiesBorder);
	OtherAbilitiesButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CharacterAbilities::OnSwitchToOtherAbilitiesBorder);

}

void UNN_Cpp_Widget_CharacterAbilities::OnSwitchToCombatAbilitiesBorder()
{
	if (AbilitiesWidgetSwitcher)
	{
		int32 index = AbilitiesWidgetSwitcher->GetActiveWidgetIndex();
		if (index != 0)
		{
			AbilitiesWidgetSwitcher->SetActiveWidgetIndex(0);
		}
	}
}

void UNN_Cpp_Widget_CharacterAbilities::OnSwitchToMagicalAbilitiesBorder()
{
	if (AbilitiesWidgetSwitcher)
	{
		int32 index = AbilitiesWidgetSwitcher->GetActiveWidgetIndex();
		if (index != 1)
		{
			AbilitiesWidgetSwitcher->SetActiveWidgetIndex(1);
		}
	}
}

void UNN_Cpp_Widget_CharacterAbilities::OnSwitchToCraftingAbilitiesBorder()
{
	if (AbilitiesWidgetSwitcher)
	{
		int32 index = AbilitiesWidgetSwitcher->GetActiveWidgetIndex();
		if (index != 2)
		{
			AbilitiesWidgetSwitcher->SetActiveWidgetIndex(2);
		}
	}
}

void UNN_Cpp_Widget_CharacterAbilities::OnSwitchToOtherAbilitiesBorder()
{
	if (AbilitiesWidgetSwitcher)
	{
		int32 index = AbilitiesWidgetSwitcher->GetActiveWidgetIndex();
		if (index != 3)
		{
			AbilitiesWidgetSwitcher->SetActiveWidgetIndex(3);
		}
	}
}
