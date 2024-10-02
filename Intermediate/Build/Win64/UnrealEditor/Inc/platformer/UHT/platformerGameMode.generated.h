// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "platformerGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLATFORMER_platformerGameMode_generated_h
#error "platformerGameMode.generated.h already included, missing '#pragma once' in platformerGameMode.h"
#endif
#define PLATFORMER_platformerGameMode_generated_h

#define FID_projects_platformer_Source_platformer_platformerGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAplatformerGameMode(); \
	friend struct Z_Construct_UClass_AplatformerGameMode_Statics; \
public: \
	DECLARE_CLASS(AplatformerGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/platformer"), PLATFORMER_API) \
	DECLARE_SERIALIZER(AplatformerGameMode)


#define FID_projects_platformer_Source_platformer_platformerGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AplatformerGameMode(AplatformerGameMode&&); \
	AplatformerGameMode(const AplatformerGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PLATFORMER_API, AplatformerGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AplatformerGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AplatformerGameMode) \
	PLATFORMER_API virtual ~AplatformerGameMode();


#define FID_projects_platformer_Source_platformer_platformerGameMode_h_9_PROLOG
#define FID_projects_platformer_Source_platformer_platformerGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_platformer_Source_platformer_platformerGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_projects_platformer_Source_platformer_platformerGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER_API UClass* StaticClass<class AplatformerGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_platformer_Source_platformer_platformerGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
