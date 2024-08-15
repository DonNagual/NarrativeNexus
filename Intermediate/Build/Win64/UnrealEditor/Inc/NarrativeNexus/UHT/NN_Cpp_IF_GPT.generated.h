// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/NN_Cpp_IF_GPT.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NARRATIVENEXUS_NN_Cpp_IF_GPT_generated_h
#error "NN_Cpp_IF_GPT.generated.h already included, missing '#pragma once' in NN_Cpp_IF_GPT.h"
#endif
#define NARRATIVENEXUS_NN_Cpp_IF_GPT_generated_h

#define FID_NarrativeNexus_Source_NarrativeNexus_Public_Interface_NN_Cpp_IF_GPT_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NARRATIVENEXUS_API UNN_Cpp_IF_GPT(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNN_Cpp_IF_GPT(UNN_Cpp_IF_GPT&&); \
	UNN_Cpp_IF_GPT(const UNN_Cpp_IF_GPT&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NARRATIVENEXUS_API, UNN_Cpp_IF_GPT); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNN_Cpp_IF_GPT); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNN_Cpp_IF_GPT) \
	NARRATIVENEXUS_API virtual ~UNN_Cpp_IF_GPT();


#define FID_NarrativeNexus_Source_NarrativeNexus_Public_Interface_NN_Cpp_IF_GPT_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNN_Cpp_IF_GPT(); \
	friend struct Z_Construct_UClass_UNN_Cpp_IF_GPT_Statics; \
public: \
	DECLARE_CLASS(UNN_Cpp_IF_GPT, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NarrativeNexus"), NARRATIVENEXUS_API) \
	DECLARE_SERIALIZER(UNN_Cpp_IF_GPT)


#define FID_NarrativeNexus_Source_NarrativeNexus_Public_Interface_NN_Cpp_IF_GPT_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_NarrativeNexus_Source_NarrativeNexus_Public_Interface_NN_Cpp_IF_GPT_h_15_GENERATED_UINTERFACE_BODY() \
	FID_NarrativeNexus_Source_NarrativeNexus_Public_Interface_NN_Cpp_IF_GPT_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_NarrativeNexus_Source_NarrativeNexus_Public_Interface_NN_Cpp_IF_GPT_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INN_Cpp_IF_GPT() {} \
public: \
	typedef UNN_Cpp_IF_GPT UClassType; \
	typedef INN_Cpp_IF_GPT ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_NarrativeNexus_Source_NarrativeNexus_Public_Interface_NN_Cpp_IF_GPT_h_12_PROLOG
#define FID_NarrativeNexus_Source_NarrativeNexus_Public_Interface_NN_Cpp_IF_GPT_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NarrativeNexus_Source_NarrativeNexus_Public_Interface_NN_Cpp_IF_GPT_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVENEXUS_API UClass* StaticClass<class UNN_Cpp_IF_GPT>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NarrativeNexus_Source_NarrativeNexus_Public_Interface_NN_Cpp_IF_GPT_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
