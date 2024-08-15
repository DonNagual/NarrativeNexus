// NN_Cpp_Widget_GameNavigatorNode.cpp

#include "Widgets/Game/NN_Cpp_Widget_GameNavigatorNode.h"

//

void UNN_Cpp_Widget_GameNavigatorNode::NativeConstruct()
{
	Super::NativeConstruct();

	DescriptionButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_GameNavigatorNode::OnDescriptionButtonClicked);

	UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_Widget_GameNavigatorNode NativeConstruct - Objekt: %p"), this);
}

void UNN_Cpp_Widget_GameNavigatorNode::OnDescriptionButtonClicked()
{
	
}