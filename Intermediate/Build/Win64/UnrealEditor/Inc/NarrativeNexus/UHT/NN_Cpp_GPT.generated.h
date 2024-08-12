// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GPT/NN_Cpp_GPT.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NARRATIVENEXUS_NN_Cpp_GPT_generated_h
#error "NN_Cpp_GPT.generated.h already included, missing '#pragma once' in NN_Cpp_GPT.h"
#endif
#define NARRATIVENEXUS_NN_Cpp_GPT_generated_h

#define FID_NarrativeNexus_Source_NarrativeNexus_Public_GPT_NN_Cpp_GPT_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNN_Cpp_GPT(); \
	friend struct Z_Construct_UClass_UNN_Cpp_GPT_Statics; \
public: \
	DECLARE_CLASS(UNN_Cpp_GPT, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NarrativeNexus"), NO_API) \
	DECLARE_SERIALIZER(UNN_Cpp_GPT) \
	virtual UObject* _getUObject() const override { return const_cast<UNN_Cpp_GPT*>(this); }


#define FID_NarrativeNexus_Source_NarrativeNexus_Public_GPT_NN_Cpp_GPT_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNN_Cpp_GPT(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNN_Cpp_GPT(UNN_Cpp_GPT&&); \
	UNN_Cpp_GPT(const UNN_Cpp_GPT&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNN_Cpp_GPT); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNN_Cpp_GPT); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNN_Cpp_GPT) \
	NO_API virtual ~UNN_Cpp_GPT();


#define FID_NarrativeNexus_Source_NarrativeNexus_Public_GPT_NN_Cpp_GPT_h_11_PROLOG
#define FID_NarrativeNexus_Source_NarrativeNexus_Public_GPT_NN_Cpp_GPT_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NarrativeNexus_Source_NarrativeNexus_Public_GPT_NN_Cpp_GPT_h_14_INCLASS_NO_PURE_DECLS \
	FID_NarrativeNexus_Source_NarrativeNexus_Public_GPT_NN_Cpp_GPT_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVENEXUS_API UClass* StaticClass<class UNN_Cpp_GPT>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NarrativeNexus_Source_NarrativeNexus_Public_GPT_NN_Cpp_GPT_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
