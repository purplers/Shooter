// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/ShootGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootGameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SHOOTER_API UClass* Z_Construct_UClass_AShootGameModeBase();
SHOOTER_API UClass* Z_Construct_UClass_AShootGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References

// Begin Class AShootGameModeBase
void AShootGameModeBase::StaticRegisterNativesAShootGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShootGameModeBase);
UClass* Z_Construct_UClass_AShootGameModeBase_NoRegister()
{
	return AShootGameModeBase::StaticClass();
}
struct Z_Construct_UClass_AShootGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ShootGameModeBase.h" },
		{ "ModuleRelativePath", "ShootGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShootGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AShootGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShootGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShootGameModeBase_Statics::ClassParams = {
	&AShootGameModeBase::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AShootGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShootGameModeBase()
{
	if (!Z_Registration_Info_UClass_AShootGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShootGameModeBase.OuterSingleton, Z_Construct_UClass_AShootGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShootGameModeBase.OuterSingleton;
}
template<> SHOOTER_API UClass* StaticClass<AShootGameModeBase>()
{
	return AShootGameModeBase::StaticClass();
}
AShootGameModeBase::AShootGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShootGameModeBase);
AShootGameModeBase::~AShootGameModeBase() {}
// End Class AShootGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_ue_project_Shooter_Source_Shooter_ShootGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShootGameModeBase, AShootGameModeBase::StaticClass, TEXT("AShootGameModeBase"), &Z_Registration_Info_UClass_AShootGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShootGameModeBase), 336872132U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_project_Shooter_Source_Shooter_ShootGameModeBase_h_1436010959(TEXT("/Script/Shooter"),
	Z_CompiledInDeferFile_FID_ue_project_Shooter_Source_Shooter_ShootGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ue_project_Shooter_Source_Shooter_ShootGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
