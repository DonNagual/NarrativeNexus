// NN_Cpp_Widget_GameMenu.h

#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "Blueprint/UserWidget.h"
#include "Interface/NN_Cpp_IF_WidgetController.h"
#include "NN_Cpp_Widget_GameMenu.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_Widget_GameMenu : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;

protected:
	// ############### Buttons ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> NewNexusButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> LoadNexusButton;

private:

	// ############### Functions ###############

	UFUNCTION()
	void OnNewNexusButtonClicked();

	UFUNCTION()
	void OnLoadNexusButtonClicked();
};
