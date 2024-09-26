// NN_CPP_Widget_MainOptionsCreator.h

#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "Blueprint/UserWidget.h"
#include "Interface/NN_Cpp_IF_WidgetController.h"
#include "NN_CPP_Widget_MainOptionsCreator.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_CPP_Widget_MainOptionsCreator : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;
	
protected:
	// ############### Buttons ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> BackButton;

private:
	// ############### Functions ###############

	UFUNCTION()
	void OnBackButtonClicked();
};
