// NN_CPP_Widget_MainOptionsMain.cpp

#include "Widgets/Main/NN_CPP_Widget_MainOptionsMain.h"

void UNN_CPP_Widget_MainOptionsMain::NativeConstruct()
{
	Super::NativeConstruct();

	BackButton->OnClicked.AddUniqueDynamic(this, &UNN_CPP_Widget_MainOptionsMain::OnBackButtonClicked);
}

void UNN_CPP_Widget_MainOptionsMain::OnBackButtonClicked()
{
	if (auto* Interface = Cast<INN_Cpp_IF_WidgetController>(GetWorld()->GetFirstPlayerController()))
	{
		Interface->ShowMainMenuWidgetViaInterface();
	}
}
