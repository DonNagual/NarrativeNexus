// NN_Cpp_Widget_CharacterAbilities.h

#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "Components/WidgetSwitcher.h"
#include "Blueprint/UserWidget.h"
#include "NN_Cpp_Widget_CharacterAbilities.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_Widget_CharacterAbilities : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;

protected:
	// ############### Buttons ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> CombatAbilitiesButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> MagicalAbilitiesButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> CraftingAbilitiesButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> OtherAbilitiesButton;

	// ############### WidgetSwitcher ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UWidgetSwitcher> AbilitiesWidgetSwitcher;

private:

	UFUNCTION()
	void OnSwitchToCombatAbilitiesBorder();

	UFUNCTION()
	void OnSwitchToMagicalAbilitiesBorder();

	UFUNCTION()
	void OnSwitchToCraftingAbilitiesBorder();

	UFUNCTION()
	void OnSwitchToOtherAbilitiesBorder();
};
