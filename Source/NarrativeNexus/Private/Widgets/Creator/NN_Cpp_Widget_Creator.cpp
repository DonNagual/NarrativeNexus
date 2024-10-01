// NN_Cpp_Widget_Creator.cpp

#include "Widgets/Creator/NN_Cpp_Widget_Creator.h"

void UNN_Cpp_Widget_Creator::NativeConstruct()
{
	Super::NativeConstruct();

	HideAllWidgets();
}

void UNN_Cpp_Widget_Creator::HideAllWidgets()
{
	HideCreatorSubWidget(CreatorMenuWidget);
	HideCreatorSubWidget(CreatorNavigatorWidget); 
	HideCreatorSubWidget(CharacterMenuWidget);
}

void UNN_Cpp_Widget_Creator::HideCreatorSubWidget(UUserWidget* SubWidget)
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->HideWidget(SubWidget);
	}
}

void UNN_Cpp_Widget_Creator::ShowCreatorMenuWidget()
{
	HideAllWidgets();
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->ShowWidget(CreatorMenuWidget);
	}
}

void UNN_Cpp_Widget_Creator::ShowCreatorNavigatorWidget()
{
	HideAllWidgets();
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->ShowWidget(CreatorNavigatorWidget);
	}
}

void UNN_Cpp_Widget_Creator::ShowCharacterMenuWidget()
{
	HideAllWidgets();
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->ShowWidget(CharacterMenuWidget);
	}
}
