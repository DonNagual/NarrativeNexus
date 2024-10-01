// NN_Cpp_Widget_CreatorNavigator.cpp

#include "Widgets/Creator/NN_Cpp_Widget_CreatorNavigator.h"

void UNN_Cpp_Widget_CreatorNavigator::NativeConstruct()
{
	Super::NativeConstruct();

	WorldButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CreatorNavigator::OnWorldButtonClicked);
	StoryButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CreatorNavigator::OnStoryButtonClicked);
	CharacterButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CreatorNavigator::OnCharacterButtonClicked);
}

void UNN_Cpp_Widget_CreatorNavigator::OnWorldButtonClicked()
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		
	}
}

void UNN_Cpp_Widget_CreatorNavigator::OnStoryButtonClicked()
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		
	}
}

void UNN_Cpp_Widget_CreatorNavigator::OnCharacterButtonClicked()
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		this->SetVisibility(ESlateVisibility::Collapsed);
		Interface->ShowCharacterMenuWidgetViaInterface();
	}
}
