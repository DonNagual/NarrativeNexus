// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "General/NN_Cpp_PlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NARRATIVENEXUS_NN_Cpp_PlayerController_generated_h
#error "NN_Cpp_PlayerController.generated.h already included, missing '#pragma once' in NN_Cpp_PlayerController.h"
#endif
#define NARRATIVENEXUS_NN_Cpp_PlayerController_generated_h

#define FID_NarrativeNexus_Source_NarrativeNexus_Public_General_NN_Cpp_PlayerController_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANN_Cpp_PlayerController(); \
	friend struct Z_Construct_UClass_ANN_Cpp_PlayerController_Statics; \
public: \
	DECLARE_CLASS(ANN_Cpp_PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NarrativeNexus"), NO_API) \
	DECLARE_SERIALIZER(ANN_Cpp_PlayerController) \
	virtual UObject* _getUObject() const override { return const_cast<ANN_Cpp_PlayerController*>(this); }


#define FID_NarrativeNexus_Source_NarrativeNexus_Public_General_NN_Cpp_PlayerController_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANN_Cpp_PlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANN_Cpp_PlayerController(ANN_Cpp_PlayerController&&); \
	ANN_Cpp_PlayerController(const ANN_Cpp_PlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANN_Cpp_PlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANN_Cpp_PlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANN_Cpp_PlayerController) \
	NO_API virtual ~ANN_Cpp_PlayerController();


#define FID_NarrativeNexus_Source_NarrativeNexus_Public_General_NN_Cpp_PlayerController_h_11_PROLOG
#define FID_NarrativeNexus_Source_NarrativeNexus_Public_General_NN_Cpp_PlayerController_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NarrativeNexus_Source_NarrativeNexus_Public_General_NN_Cpp_PlayerController_h_14_INCLASS_NO_PURE_DECLS \
	FID_NarrativeNexus_Source_NarrativeNexus_Public_General_NN_Cpp_PlayerController_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVENEXUS_API UClass* StaticClass<class ANN_Cpp_PlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NarrativeNexus_Source_NarrativeNexus_Public_General_NN_Cpp_PlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
