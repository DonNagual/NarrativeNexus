// NN_Cpp_Widget_CharacterGeneral.cpp

#include "Widgets/Creator/Character/NN_Cpp_Widget_CharacterGeneral.h"

void UNN_Cpp_Widget_CharacterGeneral::NativeConstruct()
{
	Super::NativeConstruct();

	DataGeneraButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CharacterGeneral::OnSwitchToDataGeneraBorder);
	FeaturesGeneraButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CharacterGeneral::OnSwitchToFeaturesGeneraBorder);
	EquipmentGeneraButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CharacterGeneral::OnSwitchToEquipmentGeneraBorder);

}

void UNN_Cpp_Widget_CharacterGeneral::OnSwitchToDataGeneraBorder()
{
	if (GeneraWidgetSwitcher)
	{
		int32 index = GeneraWidgetSwitcher->GetActiveWidgetIndex();
		if (index != 0)
		{
			GeneraWidgetSwitcher->SetActiveWidgetIndex(0);
		}
	}
}

void UNN_Cpp_Widget_CharacterGeneral::OnSwitchToFeaturesGeneraBorder()
{
	if (GeneraWidgetSwitcher)
	{
		int32 index = GeneraWidgetSwitcher->GetActiveWidgetIndex();
		if (index != 1)
		{
			GeneraWidgetSwitcher->SetActiveWidgetIndex(1);
		}
	}
}

void UNN_Cpp_Widget_CharacterGeneral::OnSwitchToEquipmentGeneraBorder()
{
	if (GeneraWidgetSwitcher)
	{
		int32 index = GeneraWidgetSwitcher->GetActiveWidgetIndex();
		if (index != 2)
		{
			GeneraWidgetSwitcher->SetActiveWidgetIndex(2);
		}
	}
}
