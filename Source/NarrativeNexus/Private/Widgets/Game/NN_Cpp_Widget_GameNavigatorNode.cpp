// NN_Cpp_Widget_GameNavigatorNode.cpp

#include "Widgets/Game/NN_Cpp_Widget_GameNavigatorNode.h"

void UNN_Cpp_Widget_GameNavigatorNode::NativeConstruct()
{
	Super::NativeConstruct();

	DescriptionButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_GameNavigatorNode::OnDescriptionButtonClicked);

	//UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_Widget_GameNavigatorNode Construct - Objekt: %p"), this);
}

void UNN_Cpp_Widget_GameNavigatorNode::NativeDestruct()
{
	if (auto* Interface = Cast<INN_Cpp_IF_GPT>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->DestroyGPT();
		UE_LOG(LogTemp, Warning, TEXT("GPTInstance destroyed via interface"));
	}

	Super::NativeDestruct();
}

void UNN_Cpp_Widget_GameNavigatorNode::OnDescriptionButtonClicked()
{
	if (auto* Interface = Cast<INN_Cpp_IF_GPT>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->InitializeGPT();
		UE_LOG(LogTemp, Warning, TEXT("GPTInstance initialized via interface"));
		UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_Widget_GameNavigatorNode GPTInstance - Objekt: %p"), this);
	}
}
