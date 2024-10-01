// NN_Cpp_Widget_CharacterAttribute.cpp

#include "Widgets/Creator/Character/NN_Cpp_Widget_CharacterAttribute.h"

void UNN_Cpp_Widget_CharacterAttribute::NativeConstruct()
{
	Super::NativeConstruct();

	PhysicalAttributesButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CharacterAttribute::OnSwitchToPhysicalAttributesBorder);
	MentalAttributesButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CharacterAttribute::OnSwitchToMentalAttributesBorder);
	SocialAttributesButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CharacterAttribute::OnSwitchToSocialAttributesBorder);
	OtherAttributesButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CharacterAttribute::OnSwitchToOtherAttributesBorder);
}

void UNN_Cpp_Widget_CharacterAttribute::OnSwitchToPhysicalAttributesBorder()
{
	if (AttributesWidgetSwitcher)
	{
		int32 index = AttributesWidgetSwitcher->GetActiveWidgetIndex();
		if (index != 0)
		{
			AttributesWidgetSwitcher->SetActiveWidgetIndex(0);
		}
	}
}

void UNN_Cpp_Widget_CharacterAttribute::OnSwitchToMentalAttributesBorder()
{
	if (AttributesWidgetSwitcher)
	{
		int32 index = AttributesWidgetSwitcher->GetActiveWidgetIndex();
		if (index != 1)
		{
			AttributesWidgetSwitcher->SetActiveWidgetIndex(1);
		}
	}
}

void UNN_Cpp_Widget_CharacterAttribute::OnSwitchToSocialAttributesBorder()
{
	if (AttributesWidgetSwitcher)
	{
		int32 index = AttributesWidgetSwitcher->GetActiveWidgetIndex();
		if (index != 2)
		{
			AttributesWidgetSwitcher->SetActiveWidgetIndex(2);
		}
	}
}

void UNN_Cpp_Widget_CharacterAttribute::OnSwitchToOtherAttributesBorder()
{
	if (AttributesWidgetSwitcher)
	{
		int32 index = AttributesWidgetSwitcher->GetActiveWidgetIndex();
		if (index != 3)
		{
			AttributesWidgetSwitcher->SetActiveWidgetIndex(3);
		}
	}
}
