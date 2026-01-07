// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealGAS/Public/Character/TESTWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTESTWidget() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UNREALGAS_API UClass* Z_Construct_UClass_UResource_NoRegister();
UNREALGAS_API UClass* Z_Construct_UClass_UTESTWidget();
UNREALGAS_API UClass* Z_Construct_UClass_UTESTWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealGAS();
// End Cross Module References

// Begin Class UTESTWidget Function SetWidgetColor
struct Z_Construct_UFunction_UTESTWidget_SetWidgetColor_Statics
{
	struct TESTWidget_eventSetWidgetColor_Parms
	{
		FLinearColor InColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/TESTWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTESTWidget_SetWidgetColor_Statics::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TESTWidget_eventSetWidgetColor_Parms, InColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTESTWidget_SetWidgetColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTESTWidget_SetWidgetColor_Statics::NewProp_InColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTESTWidget_SetWidgetColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTESTWidget_SetWidgetColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTESTWidget, nullptr, "SetWidgetColor", nullptr, nullptr, Z_Construct_UFunction_UTESTWidget_SetWidgetColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTESTWidget_SetWidgetColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTESTWidget_SetWidgetColor_Statics::TESTWidget_eventSetWidgetColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTESTWidget_SetWidgetColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTESTWidget_SetWidgetColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTESTWidget_SetWidgetColor_Statics::TESTWidget_eventSetWidgetColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTESTWidget_SetWidgetColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTESTWidget_SetWidgetColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTESTWidget::execSetWidgetColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_InColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWidgetColor(Z_Param_InColor);
	P_NATIVE_END;
}
// End Class UTESTWidget Function SetWidgetColor

// Begin Class UTESTWidget Function UpdateCurrent_Implementation
struct Z_Construct_UFunction_UTESTWidget_UpdateCurrent_Implementation_Statics
{
	struct TESTWidget_eventUpdateCurrent_Implementation_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/TESTWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTESTWidget_UpdateCurrent_Implementation_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TESTWidget_eventUpdateCurrent_Implementation_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTESTWidget_UpdateCurrent_Implementation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTESTWidget_UpdateCurrent_Implementation_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTESTWidget_UpdateCurrent_Implementation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTESTWidget_UpdateCurrent_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTESTWidget, nullptr, "UpdateCurrent_Implementation", nullptr, nullptr, Z_Construct_UFunction_UTESTWidget_UpdateCurrent_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTESTWidget_UpdateCurrent_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTESTWidget_UpdateCurrent_Implementation_Statics::TESTWidget_eventUpdateCurrent_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTESTWidget_UpdateCurrent_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTESTWidget_UpdateCurrent_Implementation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTESTWidget_UpdateCurrent_Implementation_Statics::TESTWidget_eventUpdateCurrent_Implementation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTESTWidget_UpdateCurrent_Implementation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTESTWidget_UpdateCurrent_Implementation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTESTWidget::execUpdateCurrent_Implementation)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCurrent_Implementation(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UTESTWidget Function UpdateCurrent_Implementation

// Begin Class UTESTWidget Function UpdateMax_Implementation
struct Z_Construct_UFunction_UTESTWidget_UpdateMax_Implementation_Statics
{
	struct TESTWidget_eventUpdateMax_Implementation_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/TESTWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTESTWidget_UpdateMax_Implementation_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TESTWidget_eventUpdateMax_Implementation_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTESTWidget_UpdateMax_Implementation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTESTWidget_UpdateMax_Implementation_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTESTWidget_UpdateMax_Implementation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTESTWidget_UpdateMax_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTESTWidget, nullptr, "UpdateMax_Implementation", nullptr, nullptr, Z_Construct_UFunction_UTESTWidget_UpdateMax_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTESTWidget_UpdateMax_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTESTWidget_UpdateMax_Implementation_Statics::TESTWidget_eventUpdateMax_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTESTWidget_UpdateMax_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTESTWidget_UpdateMax_Implementation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTESTWidget_UpdateMax_Implementation_Statics::TESTWidget_eventUpdateMax_Implementation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTESTWidget_UpdateMax_Implementation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTESTWidget_UpdateMax_Implementation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTESTWidget::execUpdateMax_Implementation)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateMax_Implementation(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UTESTWidget Function UpdateMax_Implementation

// Begin Class UTESTWidget
void UTESTWidget::StaticRegisterNativesUTESTWidget()
{
	UClass* Class = UTESTWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetWidgetColor", &UTESTWidget::execSetWidgetColor },
		{ "UpdateCurrent_Implementation", &UTESTWidget::execUpdateCurrent_Implementation },
		{ "UpdateMax_Implementation", &UTESTWidget::execUpdateMax_Implementation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTESTWidget);
UClass* Z_Construct_UClass_UTESTWidget_NoRegister()
{
	return UTESTWidget::StaticClass();
}
struct Z_Construct_UClass_UTESTWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Character/TESTWidget.h" },
		{ "ModuleRelativePath", "Public/Character/TESTWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BAR_MetaData[] = {
		{ "BindWidget", "" },
		{ "ModuleRelativePath", "Public/Character/TESTWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[] = {
		{ "BindWidget", "" },
		{ "ModuleRelativePath", "Public/Character/TESTWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "BindWidget", "" },
		{ "ModuleRelativePath", "Public/Character/TESTWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_BAR;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Current;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTESTWidget_SetWidgetColor, "SetWidgetColor" }, // 4126977332
		{ &Z_Construct_UFunction_UTESTWidget_UpdateCurrent_Implementation, "UpdateCurrent_Implementation" }, // 3553739993
		{ &Z_Construct_UFunction_UTESTWidget_UpdateMax_Implementation, "UpdateMax_Implementation" }, // 3520350280
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTESTWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UTESTWidget_Statics::NewProp_BAR = { "BAR", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTESTWidget, BAR), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BAR_MetaData), NewProp_BAR_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UTESTWidget_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTESTWidget, Current), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Current_MetaData), NewProp_Current_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UTESTWidget_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTESTWidget, Max), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTESTWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTESTWidget_Statics::NewProp_BAR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTESTWidget_Statics::NewProp_Current,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTESTWidget_Statics::NewProp_Max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTESTWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTESTWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealGAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTESTWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTESTWidget_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UResource_NoRegister, (int32)VTABLE_OFFSET(UTESTWidget, IResource), false },  // 1078134415
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTESTWidget_Statics::ClassParams = {
	&UTESTWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTESTWidget_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTESTWidget_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTESTWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UTESTWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTESTWidget()
{
	if (!Z_Registration_Info_UClass_UTESTWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTESTWidget.OuterSingleton, Z_Construct_UClass_UTESTWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTESTWidget.OuterSingleton;
}
template<> UNREALGAS_API UClass* StaticClass<UTESTWidget>()
{
	return UTESTWidget::StaticClass();
}
UTESTWidget::UTESTWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTESTWidget);
UTESTWidget::~UTESTWidget() {}
// End Class UTESTWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_source_repos_UnrealGAS_Source_UnrealGAS_Public_Character_TESTWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTESTWidget, UTESTWidget::StaticClass, TEXT("UTESTWidget"), &Z_Registration_Info_UClass_UTESTWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTESTWidget), 1399200024U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_source_repos_UnrealGAS_Source_UnrealGAS_Public_Character_TESTWidget_h_2965990322(TEXT("/Script/UnrealGAS"),
	Z_CompiledInDeferFile_FID_Users_KGA_source_repos_UnrealGAS_Source_UnrealGAS_Public_Character_TESTWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_source_repos_UnrealGAS_Source_UnrealGAS_Public_Character_TESTWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
