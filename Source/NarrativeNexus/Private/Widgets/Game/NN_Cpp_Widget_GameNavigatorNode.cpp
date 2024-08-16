// NN_Cpp_Widget_GameNavigatorNode.cpp

#include "Widgets/Game/NN_Cpp_Widget_GameNavigatorNode.h"

void UNN_Cpp_Widget_GameNavigatorNode::NativeConstruct()
{
	Super::NativeConstruct();

	DescriptionButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_GameNavigatorNode::OnDescriptionButtonClicked);
}

void UNN_Cpp_Widget_GameNavigatorNode::OnDescriptionButtonClicked()
{
	if (auto* GPTInterface = Cast<INN_Cpp_IF_GPT>(GetWorld()->GetFirstPlayerController()))
	{
		GPTInterface->InitializeGPT();
		auto* GPTInstance = GPTInterface->GetGPT();

		if (GPTInstance)
		{
			GPTInterface->SetGPT(GPTInstance);

			// DEBUG
			UE_LOG(LogTemp, Warning, TEXT("NN_Cpp_Widget_GameNavigatorNode GPTInstance - Objekt: %p"), GPTInstance);

			if (auto* PCInterface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
			{	
				PCInterface->ShowGameChatWidgetViaInterface();

				// DEBUG
				UE_LOG(LogTemp, Warning, TEXT("Showing Game Chat Widget"));
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("GPTInstance is still nullptr after initialization"));
		}
	}
}
