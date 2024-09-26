// NN_CPP_Widget_MainOptionsCreator.cpp

#include "Widgets/Main/NN_CPP_Widget_MainOptionsCreator.h"

void UNN_CPP_Widget_MainOptionsCreator::NativeConstruct()
{
	Super::NativeConstruct();

	BackButton->OnClicked.AddUniqueDynamic(this, &UNN_CPP_Widget_MainOptionsCreator::OnBackButtonClicked);
}

void UNN_CPP_Widget_MainOptionsCreator::OnBackButtonClicked()
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->ShowMainMenuWidgetViaInterface();
	}
}
