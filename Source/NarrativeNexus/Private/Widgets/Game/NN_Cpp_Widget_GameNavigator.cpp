// NN_Cpp_Widget_GameNavigator.cpp

#include "Widgets/Game/NN_Cpp_Widget_GameNavigator.h"

void UNN_Cpp_Widget_GameNavigator::NativeConstruct()
{
	Super::NativeConstruct();

	SearchButtom->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_GameNavigator::OnSearchButtomClicked);
	BackButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_GameNavigator::OnBackButtonClicked);
	RepeatButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_GameNavigator::OnRepeatButtonClicked);
	AcceptButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_GameNavigator::OnAcceptButtonClicked);
}

void UNN_Cpp_Widget_GameNavigator::OnGameNavigatorWidgetVisibilityChanged()
{
	if (this->IsVisible())
	{
		AddNodeToScrollBox();
	}
}

void UNN_Cpp_Widget_GameNavigator::AddNodeToScrollBox()
{
	if (GameNavigatorNodeClass && NodeScrollBox)
	{
		UUserWidget* NewNodeWidget = CreateWidget<UUserWidget>(this, GameNavigatorNodeClass);
		if (NewNodeWidget)
		{
			NodeScrollBox->AddChild(NewNodeWidget);
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Failed to create GameNavigatorNodeWidget"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("GameNavigatorNodeClass or NodeScrollBox is nullptr"));
	}
}

void UNN_Cpp_Widget_GameNavigator::RemoveAllNodesFromScrollBox()
{
	if (NodeScrollBox)
	{
		NodeScrollBox->ClearChildren();
		if (auto* GPTInterface = Cast<INN_Cpp_IF_GPT>(GetWorld()->GetFirstPlayerController()))
		{
			GPTInterface->DestroyGPT();
		}
	}
}

void UNN_Cpp_Widget_GameNavigator::OnSearchButtomClicked()
{
}

void UNN_Cpp_Widget_GameNavigator::OnBackButtonClicked()
{
	if (auto* PCInterface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		PCInterface->HideWidget(this);
		PCInterface->ShowGameMenuWidgetViaInterface();
	}
	RemoveAllNodesFromScrollBox();
}

void UNN_Cpp_Widget_GameNavigator::OnRepeatButtonClicked()
{
	RemoveAllNodesFromScrollBox();
	AddNodeToScrollBox();
}

void UNN_Cpp_Widget_GameNavigator::OnAcceptButtonClicked()
{
}
