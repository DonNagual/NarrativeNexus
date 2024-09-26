// NN_Cpp_Widget_GameMenu.cpp

#include "Widgets/Game/NN_Cpp_Widget_GameMenu.h"

void UNN_Cpp_Widget_GameMenu::NativeConstruct()
{
	Super::NativeConstruct();

	NewNexusButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_GameMenu::OnNewNexusButtonClicked);
	LoadNexusButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_GameMenu::OnLoadNexusButtonClicked);
}

void UNN_Cpp_Widget_GameMenu::OnNewNexusButtonClicked()
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->ShowGameNavigatorWidgetViaInterface();
		Interface->OnGameNavigatorWidgetVisibilityChangedViaInterface();
	}
}

void UNN_Cpp_Widget_GameMenu::OnLoadNexusButtonClicked()
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->ShowGameInventoryWidgetViaInterface();
	}
}
