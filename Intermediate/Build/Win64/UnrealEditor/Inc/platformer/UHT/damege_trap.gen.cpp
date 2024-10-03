// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "platformer/Public/damege_trap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodedamege_trap() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PLATFORMER_API UClass* Z_Construct_UClass_Adamege_trap();
PLATFORMER_API UClass* Z_Construct_UClass_Adamege_trap_NoRegister();
UPackage* Z_Construct_UPackage__Script_platformer();
// End Cross Module References

// Begin Class Adamege_trap
void Adamege_trap::StaticRegisterNativesAdamege_trap()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Adamege_trap);
UClass* Z_Construct_UClass_Adamege_trap_NoRegister()
{
	return Adamege_trap::StaticClass();
}
struct Z_Construct_UClass_Adamege_trap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "damege_trap.h" },
		{ "ModuleRelativePath", "Public/damege_trap.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Adamege_trap>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_Adamege_trap_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_platformer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Adamege_trap_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Adamege_trap_Statics::ClassParams = {
	&Adamege_trap::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Adamege_trap_Statics::Class_MetaDataParams), Z_Construct_UClass_Adamege_trap_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Adamege_trap()
{
	if (!Z_Registration_Info_UClass_Adamege_trap.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Adamege_trap.OuterSingleton, Z_Construct_UClass_Adamege_trap_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Adamege_trap.OuterSingleton;
}
template<> PLATFORMER_API UClass* StaticClass<Adamege_trap>()
{
	return Adamege_trap::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(Adamege_trap);
Adamege_trap::~Adamege_trap() {}
// End Class Adamege_trap

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_platformer_Source_platformer_Public_damege_trap_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Adamege_trap, Adamege_trap::StaticClass, TEXT("Adamege_trap"), &Z_Registration_Info_UClass_Adamege_trap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Adamege_trap), 2219524236U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_platformer_Source_platformer_Public_damege_trap_h_2634309572(TEXT("/Script/platformer"),
	Z_CompiledInDeferFile_FID_projects_platformer_Source_platformer_Public_damege_trap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_platformer_Source_platformer_Public_damege_trap_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
