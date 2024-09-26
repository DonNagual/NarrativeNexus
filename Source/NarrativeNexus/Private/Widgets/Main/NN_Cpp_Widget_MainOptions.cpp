// NN_Cpp_Widget_MainOptions.cpp

#include "Widgets/Main/NN_Cpp_Widget_MainOptions.h"

void UNN_Cpp_Widget_MainOptions::NativeConstruct()
{
	Super::NativeConstruct();

	OptionsMainButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_MainOptions::OnSwitchToOptionsMainWidget);
	OptionsChatButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_MainOptions::OnSwitchToOptionsChatWidget);
	OptionsCreatorButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_MainOptions::OnSwitchToOptionsCreatorWidget);

	if (OptionsWidgetSwitcher)
	{
		OptionsWidgetSwitcher->SetActiveWidgetIndex(0);
	}
}

void UNN_Cpp_Widget_MainOptions::OnSwitchToOptionsMainWidget()
{
	if (OptionsWidgetSwitcher)
	{
		int32 index = OptionsWidgetSwitcher->GetActiveWidgetIndex();
		if (index != 0)
		{
			OptionsWidgetSwitcher->SetActiveWidgetIndex(0);
		}
	}
}

void UNN_Cpp_Widget_MainOptions::OnSwitchToOptionsChatWidget()
{
	if (OptionsWidgetSwitcher)
	{
		int32 index = OptionsWidgetSwitcher->GetActiveWidgetIndex();
		if (index != 1)
		{
			OptionsWidgetSwitcher->SetActiveWidgetIndex(1);
		}
	}
}

void UNN_Cpp_Widget_MainOptions::OnSwitchToOptionsCreatorWidget()
{
	if (OptionsWidgetSwitcher)
	{
		int32 index = OptionsWidgetSwitcher->GetActiveWidgetIndex();
		if (index != 2)
		{
			OptionsWidgetSwitcher->SetActiveWidgetIndex(2);
		}
	}
}
