// NN_Cpp_Widget_CharacterBackground.cpp

#include "Widgets/Creator/Character/NN_Cpp_Widget_CharacterBackground.h"

void UNN_Cpp_Widget_CharacterBackground::NativeConstruct()
{
	Super::NativeConstruct();

	BackstoryBackgroundButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CharacterBackground::OnSwitchToBackstoryBackgroundButton);
	RelationBackgroundButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CharacterBackground::OnSwitchToRelationBackgroundButton);

	// ############### Backstory MLETextBox Switcher ###############

	ChildhoodBackstoryButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CharacterBackground::OnSwitchToChildhoodBackstoryMLETextBox);
	ParentsBackstoryButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CharacterBackground::OnSwitchToParentsBackstoryMLETextBox);
	SiblingsBackstoryButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CharacterBackground::OnSwitchToSiblingsBackstoryMLETextBox);
	EducationBackstoryButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CharacterBackground::OnSwitchToEducationBackstoryMLETextBox);
	GoalsBackstoryButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CharacterBackground::OnSwitchToGoalsBackstoryMLETextBox);
	RelationshipsBackstoryButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CharacterBackground::OnSwitchToRelationshipsBackstoryMLETextBox);
	OathsBackstoryButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CharacterBackground::OnSwitchToOathsBackstoryMLETextBox);
	PromiseBackstoryButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CharacterBackground::OnSwitchToPromiseBackstoryMLETextBox);
	FearsBackstoryButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CharacterBackground::OnSwitchToFearsBackstoryMLETextBox);
	PhilosophyBackstoryButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CharacterBackground::OnSwitchToPhilosophyBackstoryMLETextBox);
	AdventureBackstoryButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CharacterBackground::OnSwitchToAdventureBackstoryMLETextBox);

	// ############### Relation MLETextBox Switcher ###############

	AlliancesRelationButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CharacterBackground::OnSwitchToAlliancesRelationMLETextBox);
	EnemiesRelationButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CharacterBackground::OnSwitchToEnemiesRelationMLETextBox);
	RivalsRelationButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CharacterBackground::OnSwitchToRivalsRelationMLETextBox);
	RichnessRelationButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CharacterBackground::OnSwitchToRichnessRelationMLETextBox);
	PropertyRelationButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CharacterBackground::OnSwitchToPropertyRelationMLETextBox);
	ReputationRelationButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CharacterBackground::OnSwitchToReputationRelationMLETextBox);
	SecretsRelationButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CharacterBackground::OnSwitchToSecretsRelationMLETextBox);
	DependenciesRelationButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CharacterBackground::OnSwitchToDependenciesRelationMLETextBox);
	DecisionsRelationButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CharacterBackground::OnSwitchToDecisionsRelationMLETextBox);
	StrengthsRelationButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CharacterBackground::OnSwitchToStrengthsRelationMLETextBox);
	WeaknessesRelationButton->OnClicked.AddUniqueDynamic(this, &UNN_Cpp_Widget_CharacterBackground::OnSwitchToWeaknessesRelationMLETextBox);

}

void UNN_Cpp_Widget_CharacterBackground::OnSwitchToBackstoryBackgroundButton()
{
	if (BackgroundWidgetSwitcher)
	{
		int32 index = BackgroundWidgetSwitcher->GetActiveWidgetIndex();
		if (index != 0)
		{
			BackgroundWidgetSwitcher->SetActiveWidgetIndex(0);
		}
	}
}

void UNN_Cpp_Widget_CharacterBackground::OnSwitchToRelationBackgroundButton()
{
	if (BackgroundWidgetSwitcher)
	{
		int32 index = BackgroundWidgetSwitcher->GetActiveWidgetIndex();
		if (index != 1)
		{
			BackgroundWidgetSwitcher->SetActiveWidgetIndex(1);
		}
	}
}

// ############### Backstory MLETextBox Switcher ###############

void UNN_Cpp_Widget_CharacterBackground::OnSwitchToChildhoodBackstoryMLETextBox()
{
	if (BackstoryMLETextBoxSwitcher)
	{
		int32 index = BackstoryMLETextBoxSwitcher->GetActiveWidgetIndex();
		if (index != 0)
		{
			BackstoryMLETextBoxSwitcher->SetActiveWidgetIndex(0);
		}
	}
}

void UNN_Cpp_Widget_CharacterBackground::OnSwitchToParentsBackstoryMLETextBox()
{
	if (BackstoryMLETextBoxSwitcher)
	{
		int32 index = BackstoryMLETextBoxSwitcher->GetActiveWidgetIndex();
		if (index != 1)
		{
			BackstoryMLETextBoxSwitcher->SetActiveWidgetIndex(1);
		}
	}
}

void UNN_Cpp_Widget_CharacterBackground::OnSwitchToSiblingsBackstoryMLETextBox()
{
	if (BackstoryMLETextBoxSwitcher)
	{
		int32 index = BackstoryMLETextBoxSwitcher->GetActiveWidgetIndex();
		if (index != 2)
		{
			BackstoryMLETextBoxSwitcher->SetActiveWidgetIndex(2);
		}
	}
}

void UNN_Cpp_Widget_CharacterBackground::OnSwitchToEducationBackstoryMLETextBox()
{
	if (BackstoryMLETextBoxSwitcher)
	{
		int32 index = BackstoryMLETextBoxSwitcher->GetActiveWidgetIndex();
		if (index != 3)
		{
			BackstoryMLETextBoxSwitcher->SetActiveWidgetIndex(3);
		}
	}
}

void UNN_Cpp_Widget_CharacterBackground::OnSwitchToGoalsBackstoryMLETextBox()
{
	if (BackstoryMLETextBoxSwitcher)
	{
		int32 index = BackstoryMLETextBoxSwitcher->GetActiveWidgetIndex();
		if (index != 4)
		{
			BackstoryMLETextBoxSwitcher->SetActiveWidgetIndex(4);
		}
	}
}

void UNN_Cpp_Widget_CharacterBackground::OnSwitchToRelationshipsBackstoryMLETextBox()
{
	if (BackstoryMLETextBoxSwitcher)
	{
		int32 index = BackstoryMLETextBoxSwitcher->GetActiveWidgetIndex();
		if (index != 5)
		{
			BackstoryMLETextBoxSwitcher->SetActiveWidgetIndex(5);
		}
	}
}

void UNN_Cpp_Widget_CharacterBackground::OnSwitchToOathsBackstoryMLETextBox()
{
	if (BackstoryMLETextBoxSwitcher)
	{
		int32 index = BackstoryMLETextBoxSwitcher->GetActiveWidgetIndex();
		if (index != 6)
		{
			BackstoryMLETextBoxSwitcher->SetActiveWidgetIndex(6);
		}
	}
}

void UNN_Cpp_Widget_CharacterBackground::OnSwitchToPromiseBackstoryMLETextBox()
{
	if (BackstoryMLETextBoxSwitcher)
	{
		int32 index = BackstoryMLETextBoxSwitcher->GetActiveWidgetIndex();
		if (index != 7)
		{
			BackstoryMLETextBoxSwitcher->SetActiveWidgetIndex(7);
		}
	}
}

void UNN_Cpp_Widget_CharacterBackground::OnSwitchToFearsBackstoryMLETextBox()
{
	if (BackstoryMLETextBoxSwitcher)
	{
		int32 index = BackstoryMLETextBoxSwitcher->GetActiveWidgetIndex();
		if (index != 8)
		{
			BackstoryMLETextBoxSwitcher->SetActiveWidgetIndex(8);
		}
	}
}

void UNN_Cpp_Widget_CharacterBackground::OnSwitchToPhilosophyBackstoryMLETextBox()
{
	if (BackstoryMLETextBoxSwitcher)
	{
		int32 index = BackstoryMLETextBoxSwitcher->GetActiveWidgetIndex();
		if (index != 9)
		{
			BackstoryMLETextBoxSwitcher->SetActiveWidgetIndex(9);
		}
	}
}

void UNN_Cpp_Widget_CharacterBackground::OnSwitchToAdventureBackstoryMLETextBox()
{
	if (BackstoryMLETextBoxSwitcher)
	{
		int32 index = BackstoryMLETextBoxSwitcher->GetActiveWidgetIndex();
		if (index != 10)
		{
			BackstoryMLETextBoxSwitcher->SetActiveWidgetIndex(10);
		}
	}
}

// ############### Relation MLETextBox Switcher ###############

void UNN_Cpp_Widget_CharacterBackground::OnSwitchToAlliancesRelationMLETextBox()
{
	if (RelationMLETextBoxSwitcher)
	{
		int32 index = RelationMLETextBoxSwitcher->GetActiveWidgetIndex();
		if (index != 0)
		{
			RelationMLETextBoxSwitcher->SetActiveWidgetIndex(0);
		}
	}
}

void UNN_Cpp_Widget_CharacterBackground::OnSwitchToEnemiesRelationMLETextBox()
{
	if (RelationMLETextBoxSwitcher)
	{
		int32 index = RelationMLETextBoxSwitcher->GetActiveWidgetIndex();
		if (index != 1)
		{
			RelationMLETextBoxSwitcher->SetActiveWidgetIndex(1);
		}
	}
}

void UNN_Cpp_Widget_CharacterBackground::OnSwitchToRivalsRelationMLETextBox()
{
	if (RelationMLETextBoxSwitcher)
	{
		int32 index = RelationMLETextBoxSwitcher->GetActiveWidgetIndex();
		if (index != 2)
		{
			RelationMLETextBoxSwitcher->SetActiveWidgetIndex(2);
		}
	}
}

void UNN_Cpp_Widget_CharacterBackground::OnSwitchToRichnessRelationMLETextBox()
{
	if (RelationMLETextBoxSwitcher)
	{
		int32 index = RelationMLETextBoxSwitcher->GetActiveWidgetIndex();
		if (index != 3)
		{
			RelationMLETextBoxSwitcher->SetActiveWidgetIndex(3);
		}
	}
}

void UNN_Cpp_Widget_CharacterBackground::OnSwitchToPropertyRelationMLETextBox()
{
	if (RelationMLETextBoxSwitcher)
	{
		int32 index = RelationMLETextBoxSwitcher->GetActiveWidgetIndex();
		if (index != 4)
		{
			RelationMLETextBoxSwitcher->SetActiveWidgetIndex(4);
		}
	}
}

void UNN_Cpp_Widget_CharacterBackground::OnSwitchToReputationRelationMLETextBox()
{
	if (RelationMLETextBoxSwitcher)
	{
		int32 index = RelationMLETextBoxSwitcher->GetActiveWidgetIndex();
		if (index != 5)
		{
			RelationMLETextBoxSwitcher->SetActiveWidgetIndex(5);
		}
	}
}

void UNN_Cpp_Widget_CharacterBackground::OnSwitchToSecretsRelationMLETextBox()
{
	if (RelationMLETextBoxSwitcher)
	{
		int32 index = RelationMLETextBoxSwitcher->GetActiveWidgetIndex();
		if (index != 6)
		{
			RelationMLETextBoxSwitcher->SetActiveWidgetIndex(6);
		}
	}
}

void UNN_Cpp_Widget_CharacterBackground::OnSwitchToDependenciesRelationMLETextBox()
{
	if (RelationMLETextBoxSwitcher)
	{
		int32 index = RelationMLETextBoxSwitcher->GetActiveWidgetIndex();
		if (index != 7)
		{
			RelationMLETextBoxSwitcher->SetActiveWidgetIndex(7);
		}
	}
}

void UNN_Cpp_Widget_CharacterBackground::OnSwitchToDecisionsRelationMLETextBox()
{
	if (RelationMLETextBoxSwitcher)
	{
		int32 index = RelationMLETextBoxSwitcher->GetActiveWidgetIndex();
		if (index != 8)
		{
			RelationMLETextBoxSwitcher->SetActiveWidgetIndex(8);
		}
	}
}

void UNN_Cpp_Widget_CharacterBackground::OnSwitchToStrengthsRelationMLETextBox()
{
	if (RelationMLETextBoxSwitcher)
	{
		int32 index = RelationMLETextBoxSwitcher->GetActiveWidgetIndex();
		if (index != 9)
		{
			RelationMLETextBoxSwitcher->SetActiveWidgetIndex(9);
		}
	}
}

void UNN_Cpp_Widget_CharacterBackground::OnSwitchToWeaknessesRelationMLETextBox()
{
	if (RelationMLETextBoxSwitcher)
	{
		int32 index = RelationMLETextBoxSwitcher->GetActiveWidgetIndex();
		if (index != 10)
		{
			RelationMLETextBoxSwitcher->SetActiveWidgetIndex(10);
		}
	}
}
