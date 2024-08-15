// NN_Cpp_Widget_Game.cpp

#include "Widgets/Game/NN_Cpp_Widget_Game.h"

void UNN_Cpp_Widget_Game::NativeConstruct()
{
	Super::NativeConstruct();

	// Hide all sub-widgets initially
	HideAllWidgets();
}

void UNN_Cpp_Widget_Game::HideAllWidgets()
{
	HideGameSubWidget(GameMenuWidget);
	HideGameSubWidget(GameNavigatorWidget);
	HideGameSubWidget(GameInventoryWidget);
	HideGameSubWidget(GameChatWidget);
}

void UNN_Cpp_Widget_Game::HideGameSubWidget(UUserWidget* SubWidget)
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->HideWidget(SubWidget);
	}
}

void UNN_Cpp_Widget_Game::ShowGameMenuWidget()
{
	HideAllWidgets();
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->ShowWidget(GameMenuWidget);
	}
}

void UNN_Cpp_Widget_Game::ShowGameNavigatorWidget()
{
	HideAllWidgets();
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->ShowWidget(GameNavigatorWidget);
	}
}

void UNN_Cpp_Widget_Game::ShowGameInventoryWidget()
{
	HideAllWidgets();
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->ShowWidget(GameInventoryWidget);
	}
}

