// NN_Cpp_Widget_CharacterGeneral.h

#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "Components/WidgetSwitcher.h"
#include "Blueprint/UserWidget.h"
#include "NN_Cpp_Widget_CharacterGeneral.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_Widget_CharacterGeneral : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;

protected:
	// ############### Buttons ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> DataGeneraButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> FeaturesGeneraButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> EquipmentGeneraButton;

	// ############### WidgetSwitcher ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UWidgetSwitcher> GeneraWidgetSwitcher;

private:

	UFUNCTION()
	void OnSwitchToDataGeneraBorder();

	UFUNCTION()
	void OnSwitchToFeaturesGeneraBorder();

	UFUNCTION()
	void OnSwitchToEquipmentGeneraBorder();
};
