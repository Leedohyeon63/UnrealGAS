// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealGAS/Public/Character/CharacterWidgetComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterWidgetComponent() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
UNREALGAS_API UClass* Z_Construct_UClass_UCharacterWidgetComponent();
UNREALGAS_API UClass* Z_Construct_UClass_UCharacterWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealGAS();
// End Cross Module References

// Begin Class UCharacterWidgetComponent
void UCharacterWidgetComponent::StaticRegisterNativesUCharacterWidgetComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterWidgetComponent);
UClass* Z_Construct_UClass_UCharacterWidgetComponent_NoRegister()
{
	return UCharacterWidgetComponent::StaticClass();
}
struct Z_Construct_UClass_UCharacterWidgetComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "Character/CharacterWidgetComponent.h" },
		{ "ModuleRelativePath", "Public/Character/CharacterWidgetComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterWidgetComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCharacterWidgetComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealGAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterWidgetComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterWidgetComponent_Statics::ClassParams = {
	&UCharacterWidgetComponent::StaticClass,
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
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterWidgetComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterWidgetComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterWidgetComponent()
{
	if (!Z_Registration_Info_UClass_UCharacterWidgetComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterWidgetComponent.OuterSingleton, Z_Construct_UClass_UCharacterWidgetComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterWidgetComponent.OuterSingleton;
}
template<> UNREALGAS_API UClass* StaticClass<UCharacterWidgetComponent>()
{
	return UCharacterWidgetComponent::StaticClass();
}
UCharacterWidgetComponent::UCharacterWidgetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterWidgetComponent);
UCharacterWidgetComponent::~UCharacterWidgetComponent() {}
// End Class UCharacterWidgetComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_source_repos_UnrealGAS_Source_UnrealGAS_Public_Character_CharacterWidgetComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterWidgetComponent, UCharacterWidgetComponent::StaticClass, TEXT("UCharacterWidgetComponent"), &Z_Registration_Info_UClass_UCharacterWidgetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterWidgetComponent), 379481774U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_source_repos_UnrealGAS_Source_UnrealGAS_Public_Character_CharacterWidgetComponent_h_1634957388(TEXT("/Script/UnrealGAS"),
	Z_CompiledInDeferFile_FID_Users_KGA_source_repos_UnrealGAS_Source_UnrealGAS_Public_Character_CharacterWidgetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_source_repos_UnrealGAS_Source_UnrealGAS_Public_Character_CharacterWidgetComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
