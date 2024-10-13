// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "wind_zone.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PLATFORMER_wind_zone_generated_h
#error "wind_zone.generated.h already included, missing '#pragma once' in wind_zone.h"
#endif
#define PLATFORMER_wind_zone_generated_h

#define FID_projects_platformer_Source_platformer_Public_wind_zone_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_projects_platformer_Source_platformer_Public_wind_zone_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWindZone(); \
	friend struct Z_Construct_UClass_AWindZone_Statics; \
public: \
	DECLARE_CLASS(AWindZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/platformer"), NO_API) \
	DECLARE_SERIALIZER(AWindZone)


#define FID_projects_platformer_Source_platformer_Public_wind_zone_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWindZone(AWindZone&&); \
	AWindZone(const AWindZone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWindZone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWindZone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWindZone) \
	NO_API virtual ~AWindZone();


#define FID_projects_platformer_Source_platformer_Public_wind_zone_h_7_PROLOG
#define FID_projects_platformer_Source_platformer_Public_wind_zone_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_platformer_Source_platformer_Public_wind_zone_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_platformer_Source_platformer_Public_wind_zone_h_10_INCLASS_NO_PURE_DECLS \
	FID_projects_platformer_Source_platformer_Public_wind_zone_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER_API UClass* StaticClass<class AWindZone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_platformer_Source_platformer_Public_wind_zone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
