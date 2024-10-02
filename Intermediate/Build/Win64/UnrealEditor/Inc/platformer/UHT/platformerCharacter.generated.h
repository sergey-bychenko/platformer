// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "platformerCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLATFORMER_platformerCharacter_generated_h
#error "platformerCharacter.generated.h already included, missing '#pragma once' in platformerCharacter.h"
#endif
#define PLATFORMER_platformerCharacter_generated_h

#define FID_projects_platformer_Source_platformer_platformerCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAplatformerCharacter(); \
	friend struct Z_Construct_UClass_AplatformerCharacter_Statics; \
public: \
	DECLARE_CLASS(AplatformerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/platformer"), NO_API) \
	DECLARE_SERIALIZER(AplatformerCharacter)


#define FID_projects_platformer_Source_platformer_platformerCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AplatformerCharacter(AplatformerCharacter&&); \
	AplatformerCharacter(const AplatformerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AplatformerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AplatformerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AplatformerCharacter) \
	NO_API virtual ~AplatformerCharacter();


#define FID_projects_platformer_Source_platformer_platformerCharacter_h_18_PROLOG
#define FID_projects_platformer_Source_platformer_platformerCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_platformer_Source_platformer_platformerCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FID_projects_platformer_Source_platformer_platformerCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER_API UClass* StaticClass<class AplatformerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_platformer_Source_platformer_platformerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
