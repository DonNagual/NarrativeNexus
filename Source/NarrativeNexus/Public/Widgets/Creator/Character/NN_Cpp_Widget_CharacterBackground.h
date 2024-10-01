// NN_Cpp_Widget_CharacterBackground.h

#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "Components/WidgetSwitcher.h"
#include "Blueprint/UserWidget.h"
#include "NN_Cpp_Widget_CharacterBackground.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_Widget_CharacterBackground : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;

protected:
	// ############### Buttons ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> BackstoryBackgroundButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> RelationBackgroundButton;

	// ############### Backstory Buttons ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton>ChildhoodBackstoryButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> ParentsBackstoryButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> SiblingsBackstoryButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> EducationBackstoryButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> GoalsBackstoryButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> RelationshipsBackstoryButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> OathsBackstoryButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> PromiseBackstoryButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> FearsBackstoryButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> PhilosophyBackstoryButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> AdventureBackstoryButton;

	// ############### Backstory Buttons ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> AlliancesRelationButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> EnemiesRelationButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> RivalsRelationButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> RichnessRelationButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> PropertyRelationButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> ReputationRelationButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> SecretsRelationButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> DependenciesRelationButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> DecisionsRelationButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> StrengthsRelationButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> WeaknessesRelationButton;

	// ############### WidgetSwitcher ###############

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UWidgetSwitcher> BackgroundWidgetSwitcher;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UWidgetSwitcher> BackstoryMLETextBoxSwitcher;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UWidgetSwitcher>	RelationMLETextBoxSwitcher;

private:

	// ############### Backstory Background Switcher ###############

	UFUNCTION()
	void OnSwitchToBackstoryBackgroundButton();

	UFUNCTION()
	void OnSwitchToRelationBackgroundButton();

	// ############### Backstory MLETextBox Switcher ###############

	UFUNCTION()
	void OnSwitchToChildhoodBackstoryMLETextBox();

	UFUNCTION()
	void OnSwitchToParentsBackstoryMLETextBox();

	UFUNCTION()
	void OnSwitchToSiblingsBackstoryMLETextBox();

	UFUNCTION()
	void OnSwitchToEducationBackstoryMLETextBox();

	UFUNCTION()
	void OnSwitchToGoalsBackstoryMLETextBox();

	UFUNCTION()
	void OnSwitchToRelationshipsBackstoryMLETextBox();

	UFUNCTION()
	void OnSwitchToOathsBackstoryMLETextBox();

	UFUNCTION()
	void OnSwitchToPromiseBackstoryMLETextBox();

	UFUNCTION()
	void OnSwitchToFearsBackstoryMLETextBox();

	UFUNCTION()
	void OnSwitchToPhilosophyBackstoryMLETextBox();

	UFUNCTION()
	void OnSwitchToAdventureBackstoryMLETextBox();

	// ############### Relation MLETextBox Switcher ###############

	UFUNCTION()
	void OnSwitchToAlliancesRelationMLETextBox();

	UFUNCTION()
	void OnSwitchToEnemiesRelationMLETextBox();

	UFUNCTION()
	void OnSwitchToRivalsRelationMLETextBox();

	UFUNCTION()
	void OnSwitchToRichnessRelationMLETextBox();

	UFUNCTION()
	void OnSwitchToPropertyRelationMLETextBox();

	UFUNCTION()
	void OnSwitchToReputationRelationMLETextBox();

	UFUNCTION()
	void OnSwitchToSecretsRelationMLETextBox();

	UFUNCTION()
	void OnSwitchToDependenciesRelationMLETextBox();

	UFUNCTION()
	void OnSwitchToDecisionsRelationMLETextBox();

	UFUNCTION()
	void OnSwitchToStrengthsRelationMLETextBox();

	UFUNCTION()
	void OnSwitchToWeaknessesRelationMLETextBox();

};
