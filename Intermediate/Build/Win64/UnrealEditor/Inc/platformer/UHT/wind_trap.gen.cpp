// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "platformer/Public/wind_trap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodewind_trap() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PLATFORMER_API UClass* Z_Construct_UClass_Awind_trap();
PLATFORMER_API UClass* Z_Construct_UClass_Awind_trap_NoRegister();
UPackage* Z_Construct_UPackage__Script_platformer();
// End Cross Module References

// Begin Class Awind_trap
void Awind_trap::StaticRegisterNativesAwind_trap()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Awind_trap);
UClass* Z_Construct_UClass_Awind_trap_NoRegister()
{
	return Awind_trap::StaticClass();
}
struct Z_Construct_UClass_Awind_trap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "wind_trap.h" },
		{ "ModuleRelativePath", "Public/wind_trap.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Awind_trap>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_Awind_trap_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_platformer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Awind_trap_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Awind_trap_Statics::ClassParams = {
	&Awind_trap::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Awind_trap_Statics::Class_MetaDataParams), Z_Construct_UClass_Awind_trap_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Awind_trap()
{
	if (!Z_Registration_Info_UClass_Awind_trap.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Awind_trap.OuterSingleton, Z_Construct_UClass_Awind_trap_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Awind_trap.OuterSingleton;
}
template<> PLATFORMER_API UClass* StaticClass<Awind_trap>()
{
	return Awind_trap::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(Awind_trap);
Awind_trap::~Awind_trap() {}
// End Class Awind_trap

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_platformer_Source_platformer_Public_wind_trap_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Awind_trap, Awind_trap::StaticClass, TEXT("Awind_trap"), &Z_Registration_Info_UClass_Awind_trap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Awind_trap), 684553U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_platformer_Source_platformer_Public_wind_trap_h_1573800660(TEXT("/Script/platformer"),
	Z_CompiledInDeferFile_FID_projects_platformer_Source_platformer_Public_wind_trap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_platformer_Source_platformer_Public_wind_trap_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
