// NN_Cpp_Widget_CharacterBackstory.h

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NN_Cpp_Widget_CharacterBackstory.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_Widget_CharacterBackstory : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;

};
