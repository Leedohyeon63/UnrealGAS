// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealGAS/Public/GameAbility/GEEC_FireDamage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGEEC_FireDamage() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCurveTable_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
UNREALGAS_API UClass* Z_Construct_UClass_UGEEC_FireDamage();
UNREALGAS_API UClass* Z_Construct_UClass_UGEEC_FireDamage_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealGAS();
// End Cross Module References

// Begin Class UGEEC_FireDamage
void UGEEC_FireDamage::StaticRegisterNativesUGEEC_FireDamage()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGEEC_FireDamage);
UClass* Z_Construct_UClass_UGEEC_FireDamage_NoRegister()
{
	return UGEEC_FireDamage::StaticClass();
}
struct Z_Construct_UClass_UGEEC_FireDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameAbility/GEEC_FireDamage.h" },
		{ "ModuleRelativePath", "Public/GameAbility/GEEC_FireDamage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumDamage_MetaData[] = {
		{ "Category", "CustomData" },
		{ "ModuleRelativePath", "Public/GameAbility/GEEC_FireDamage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[] = {
		{ "Category", "CustomData" },
		{ "ModuleRelativePath", "Public/GameAbility/GEEC_FireDamage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageTable_MetaData[] = {
		{ "Category", "CustomData" },
		{ "ModuleRelativePath", "Public/GameAbility/GEEC_FireDamage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGEEC_FireDamage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGEEC_FireDamage_Statics::NewProp_MinimumDamage = { "MinimumDamage", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGEEC_FireDamage, MinimumDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumDamage_MetaData), NewProp_MinimumDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGEEC_FireDamage_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGEEC_FireDamage, Multiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Multiplier_MetaData), NewProp_Multiplier_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGEEC_FireDamage_Statics::NewProp_DamageTable = { "DamageTable", nullptr, (EPropertyFlags)0x0124080000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGEEC_FireDamage, DamageTable), Z_Construct_UClass_UCurveTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageTable_MetaData), NewProp_DamageTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGEEC_FireDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGEEC_FireDamage_Statics::NewProp_MinimumDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGEEC_FireDamage_Statics::NewProp_Multiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGEEC_FireDamage_Statics::NewProp_DamageTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGEEC_FireDamage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGEEC_FireDamage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealGAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGEEC_FireDamage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGEEC_FireDamage_Statics::ClassParams = {
	&UGEEC_FireDamage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGEEC_FireDamage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGEEC_FireDamage_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGEEC_FireDamage_Statics::Class_MetaDataParams), Z_Construct_UClass_UGEEC_FireDamage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGEEC_FireDamage()
{
	if (!Z_Registration_Info_UClass_UGEEC_FireDamage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGEEC_FireDamage.OuterSingleton, Z_Construct_UClass_UGEEC_FireDamage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGEEC_FireDamage.OuterSingleton;
}
template<> UNREALGAS_API UClass* StaticClass<UGEEC_FireDamage>()
{
	return UGEEC_FireDamage::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGEEC_FireDamage);
UGEEC_FireDamage::~UGEEC_FireDamage() {}
// End Class UGEEC_FireDamage

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_source_repos_UnrealGAS_Source_UnrealGAS_Public_GameAbility_GEEC_FireDamage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGEEC_FireDamage, UGEEC_FireDamage::StaticClass, TEXT("UGEEC_FireDamage"), &Z_Registration_Info_UClass_UGEEC_FireDamage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGEEC_FireDamage), 1368392825U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_source_repos_UnrealGAS_Source_UnrealGAS_Public_GameAbility_GEEC_FireDamage_h_3507509069(TEXT("/Script/UnrealGAS"),
	Z_CompiledInDeferFile_FID_Users_KGA_source_repos_UnrealGAS_Source_UnrealGAS_Public_GameAbility_GEEC_FireDamage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_source_repos_UnrealGAS_Source_UnrealGAS_Public_GameAbility_GEEC_FireDamage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
