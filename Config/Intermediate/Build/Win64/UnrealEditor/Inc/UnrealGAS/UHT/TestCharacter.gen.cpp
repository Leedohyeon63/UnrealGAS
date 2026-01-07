// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealGAS/Public/Character/TestCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UNREALGAS_API UClass* Z_Construct_UClass_ATestCharacter();
UNREALGAS_API UClass* Z_Construct_UClass_ATestCharacter_NoRegister();
UNREALGAS_API UClass* Z_Construct_UClass_UStatusAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealGAS();
// End Cross Module References

// Begin Class ATestCharacter Function ChangeHP
struct Z_Construct_UFunction_ATestCharacter_ChangeHP_Statics
{
	struct TestCharacter_eventChangeHP_Parms
	{
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/TestCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATestCharacter_ChangeHP_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TestCharacter_eventChangeHP_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestCharacter_ChangeHP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestCharacter_ChangeHP_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_ChangeHP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestCharacter_ChangeHP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestCharacter, nullptr, "ChangeHP", nullptr, nullptr, Z_Construct_UFunction_ATestCharacter_ChangeHP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_ChangeHP_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATestCharacter_ChangeHP_Statics::TestCharacter_eventChangeHP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_ChangeHP_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestCharacter_ChangeHP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATestCharacter_ChangeHP_Statics::TestCharacter_eventChangeHP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATestCharacter_ChangeHP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestCharacter_ChangeHP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATestCharacter::execChangeHP)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeHP(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class ATestCharacter Function ChangeHP

// Begin Class ATestCharacter Function TestAddInfiniteEffect
struct Z_Construct_UFunction_ATestCharacter_TestAddInfiniteEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/TestCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestCharacter_TestAddInfiniteEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestCharacter, nullptr, "TestAddInfiniteEffect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_TestAddInfiniteEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestCharacter_TestAddInfiniteEffect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATestCharacter_TestAddInfiniteEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestCharacter_TestAddInfiniteEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATestCharacter::execTestAddInfiniteEffect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TestAddInfiniteEffect();
	P_NATIVE_END;
}
// End Class ATestCharacter Function TestAddInfiniteEffect

// Begin Class ATestCharacter Function TestRemoveInfiniteEffect
struct Z_Construct_UFunction_ATestCharacter_TestRemoveInfiniteEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/TestCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestCharacter_TestRemoveInfiniteEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestCharacter, nullptr, "TestRemoveInfiniteEffect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_TestRemoveInfiniteEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestCharacter_TestRemoveInfiniteEffect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATestCharacter_TestRemoveInfiniteEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestCharacter_TestRemoveInfiniteEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATestCharacter::execTestRemoveInfiniteEffect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TestRemoveInfiniteEffect();
	P_NATIVE_END;
}
// End Class ATestCharacter Function TestRemoveInfiniteEffect

// Begin Class ATestCharacter Function TestSetByCaller
struct Z_Construct_UFunction_ATestCharacter_TestSetByCaller_Statics
{
	struct TestCharacter_eventTestSetByCaller_Parms
	{
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/TestCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATestCharacter_TestSetByCaller_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TestCharacter_eventTestSetByCaller_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestCharacter_TestSetByCaller_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestCharacter_TestSetByCaller_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_TestSetByCaller_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestCharacter_TestSetByCaller_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestCharacter, nullptr, "TestSetByCaller", nullptr, nullptr, Z_Construct_UFunction_ATestCharacter_TestSetByCaller_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_TestSetByCaller_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATestCharacter_TestSetByCaller_Statics::TestCharacter_eventTestSetByCaller_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_TestSetByCaller_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestCharacter_TestSetByCaller_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATestCharacter_TestSetByCaller_Statics::TestCharacter_eventTestSetByCaller_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATestCharacter_TestSetByCaller()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestCharacter_TestSetByCaller_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATestCharacter::execTestSetByCaller)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TestSetByCaller(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class ATestCharacter Function TestSetByCaller

// Begin Class ATestCharacter
void ATestCharacter::StaticRegisterNativesATestCharacter()
{
	UClass* Class = ATestCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeHP", &ATestCharacter::execChangeHP },
		{ "TestAddInfiniteEffect", &ATestCharacter::execTestAddInfiniteEffect },
		{ "TestRemoveInfiniteEffect", &ATestCharacter::execTestRemoveInfiniteEffect },
		{ "TestSetByCaller", &ATestCharacter::execTestSetByCaller },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestCharacter);
UClass* Z_Construct_UClass_ATestCharacter_NoRegister()
{
	return ATestCharacter::StaticClass();
}
struct Z_Construct_UClass_ATestCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/TestCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HPAmount_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/Character/TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestEffectClass_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/Character/TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestInfiniteEffectClass_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/Character/TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "Ability" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BarWidgetComponent_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/TestCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatusAttributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/TestCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HPAmount;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TestEffectClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TestInfiniteEffectClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BarWidgetComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatusAttributeSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATestCharacter_ChangeHP, "ChangeHP" }, // 3007336036
		{ &Z_Construct_UFunction_ATestCharacter_TestAddInfiniteEffect, "TestAddInfiniteEffect" }, // 2382855890
		{ &Z_Construct_UFunction_ATestCharacter_TestRemoveInfiniteEffect, "TestRemoveInfiniteEffect" }, // 3069033915
		{ &Z_Construct_UFunction_ATestCharacter_TestSetByCaller, "TestSetByCaller" }, // 3160642018
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATestCharacter_Statics::NewProp_HPAmount = { "HPAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestCharacter, HPAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HPAmount_MetaData), NewProp_HPAmount_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATestCharacter_Statics::NewProp_TestEffectClass = { "TestEffectClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestCharacter, TestEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestEffectClass_MetaData), NewProp_TestEffectClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATestCharacter_Statics::NewProp_TestInfiniteEffectClass = { "TestInfiniteEffectClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestCharacter, TestInfiniteEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestInfiniteEffectClass_MetaData), NewProp_TestInfiniteEffectClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestCharacter_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestCharacter, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestCharacter_Statics::NewProp_BarWidgetComponent = { "BarWidgetComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestCharacter, BarWidgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BarWidgetComponent_MetaData), NewProp_BarWidgetComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestCharacter_Statics::NewProp_StatusAttributeSet = { "StatusAttributeSet", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestCharacter, StatusAttributeSet), Z_Construct_UClass_UStatusAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatusAttributeSet_MetaData), NewProp_StatusAttributeSet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATestCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestCharacter_Statics::NewProp_HPAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestCharacter_Statics::NewProp_TestEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestCharacter_Statics::NewProp_TestInfiniteEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestCharacter_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestCharacter_Statics::NewProp_BarWidgetComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestCharacter_Statics::NewProp_StatusAttributeSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATestCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealGAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATestCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ATestCharacter, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestCharacter_Statics::ClassParams = {
	&ATestCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATestCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATestCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATestCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATestCharacter()
{
	if (!Z_Registration_Info_UClass_ATestCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestCharacter.OuterSingleton, Z_Construct_UClass_ATestCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATestCharacter.OuterSingleton;
}
template<> UNREALGAS_API UClass* StaticClass<ATestCharacter>()
{
	return ATestCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATestCharacter);
ATestCharacter::~ATestCharacter() {}
// End Class ATestCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_source_repos_UnrealGAS_Source_UnrealGAS_Public_Character_TestCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATestCharacter, ATestCharacter::StaticClass, TEXT("ATestCharacter"), &Z_Registration_Info_UClass_ATestCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestCharacter), 3257625245U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_source_repos_UnrealGAS_Source_UnrealGAS_Public_Character_TestCharacter_h_3507277796(TEXT("/Script/UnrealGAS"),
	Z_CompiledInDeferFile_FID_Users_KGA_source_repos_UnrealGAS_Source_UnrealGAS_Public_Character_TestCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_source_repos_UnrealGAS_Source_UnrealGAS_Public_Character_TestCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
