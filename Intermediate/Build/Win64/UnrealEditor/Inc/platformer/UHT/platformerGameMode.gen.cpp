// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "platformer/platformerGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeplatformerGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PLATFORMER_API UClass* Z_Construct_UClass_AplatformerGameMode();
PLATFORMER_API UClass* Z_Construct_UClass_AplatformerGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_platformer();
// End Cross Module References

// Begin Class AplatformerGameMode
void AplatformerGameMode::StaticRegisterNativesAplatformerGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AplatformerGameMode);
UClass* Z_Construct_UClass_AplatformerGameMode_NoRegister()
{
	return AplatformerGameMode::StaticClass();
}
struct Z_Construct_UClass_AplatformerGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "platformerGameMode.h" },
		{ "ModuleRelativePath", "platformerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AplatformerGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AplatformerGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_platformer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AplatformerGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AplatformerGameMode_Statics::ClassParams = {
	&AplatformerGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AplatformerGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AplatformerGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AplatformerGameMode()
{
	if (!Z_Registration_Info_UClass_AplatformerGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AplatformerGameMode.OuterSingleton, Z_Construct_UClass_AplatformerGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AplatformerGameMode.OuterSingleton;
}
template<> PLATFORMER_API UClass* StaticClass<AplatformerGameMode>()
{
	return AplatformerGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AplatformerGameMode);
AplatformerGameMode::~AplatformerGameMode() {}
// End Class AplatformerGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_platformer_Source_platformer_platformerGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AplatformerGameMode, AplatformerGameMode::StaticClass, TEXT("AplatformerGameMode"), &Z_Registration_Info_UClass_AplatformerGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AplatformerGameMode), 4080045334U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_platformer_Source_platformer_platformerGameMode_h_4013412029(TEXT("/Script/platformer"),
	Z_CompiledInDeferFile_FID_projects_platformer_Source_platformer_platformerGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_platformer_Source_platformer_platformerGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
