// NN_Cpp_Widget_GameNavigatorNode.h

#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "Blueprint/UserWidget.h"
#include "Interface/NN_Cpp_IF_GPT.h"
#include "Interface/NN_Cpp_IF_WidgetController.h"
#include "NN_Cpp_Widget_GameNavigatorNode.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_Widget_GameNavigatorNode : public UUserWidget
{
	GENERATED_BODY()
	
public:

	virtual void NativeConstruct() override;

protected:
	// ############### Buttons ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> DescriptionButton;
private:
	// ############### Functions ###############

	UFUNCTION()
	void OnDescriptionButtonClicked();
};
