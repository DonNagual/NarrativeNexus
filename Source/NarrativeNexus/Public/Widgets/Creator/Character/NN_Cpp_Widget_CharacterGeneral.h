// NN_Cpp_Widget_CharacterGeneral.h

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NN_Cpp_Widget_CharacterGeneral.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_Widget_CharacterGeneral : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;

};
