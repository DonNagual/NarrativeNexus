// NN_Cpp_Widget_CreatorMenu.cpp

#include "Widgets/Creator/NN_Cpp_Widget_CreatorMenu.h"

void UNN_Cpp_Widget_CreatorMenu::NativeConstruct()
{
	Super::NativeConstruct();

	OpenNexusCreatorButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CreatorMenu::OnOpenNexusCreatorButtonClicked);
	CreateNewNexusButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CreatorMenu::OnSwitchToCreateNewNexusBorder);
	LoadExistingNexusButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CreatorMenu::OnSwitchToLoadExistingNexusBorder);
}

void UNN_Cpp_Widget_CreatorMenu::OnOpenNexusCreatorButtonClicked()
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->ShowCreatorNavigatorWidgetViaInterface();
	}
}

void UNN_Cpp_Widget_CreatorMenu::OnSwitchToCreateNewNexusBorder()
{
	if (NexusCreatorWidgetSwitcher)
	{
		int32 index = NexusCreatorWidgetSwitcher->GetActiveWidgetIndex();
		if (index != 0)
		{
			NexusCreatorWidgetSwitcher->SetActiveWidgetIndex(0);
		}
	}
}

void UNN_Cpp_Widget_CreatorMenu::OnSwitchToLoadExistingNexusBorder()
{
	if (NexusCreatorWidgetSwitcher)
	{
		int32 index = NexusCreatorWidgetSwitcher->GetActiveWidgetIndex();
		if (index != 1)
		{
			NexusCreatorWidgetSwitcher->SetActiveWidgetIndex(1);
		}
	}
}
