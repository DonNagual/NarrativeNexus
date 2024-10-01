// NN_Cpp_Widget_CharacterAttribute.h

#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "Components/WidgetSwitcher.h"
#include "Blueprint/UserWidget.h"
#include "NN_Cpp_Widget_CharacterAttribute.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_Widget_CharacterAttribute : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;

protected:
	// ############### Buttons ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> PhysicalAttributesButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> MentalAttributesButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> SocialAttributesButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> OtherAttributesButton;

	// ############### WidgetSwitcher ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UWidgetSwitcher> AttributesWidgetSwitcher;

private:

	UFUNCTION()
	void OnSwitchToPhysicalAttributesBorder();

	UFUNCTION()
	void OnSwitchToMentalAttributesBorder();

	UFUNCTION()
	void OnSwitchToSocialAttributesBorder();

	UFUNCTION()
	void OnSwitchToOtherAttributesBorder();

};
