// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/TESTWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef UNREALGAS_TESTWidget_generated_h
#error "TESTWidget.generated.h already included, missing '#pragma once' in TESTWidget.h"
#endif
#define UNREALGAS_TESTWidget_generated_h

#define FID_Users_KGA_source_repos_UnrealGAS_Source_UnrealGAS_Public_Character_TESTWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetWidgetColor); \
	DECLARE_FUNCTION(execUpdateMax_Implementation); \
	DECLARE_FUNCTION(execUpdateCurrent_Implementation);


#define FID_Users_KGA_source_repos_UnrealGAS_Source_UnrealGAS_Public_Character_TESTWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTESTWidget(); \
	friend struct Z_Construct_UClass_UTESTWidget_Statics; \
public: \
	DECLARE_CLASS(UTESTWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealGAS"), NO_API) \
	DECLARE_SERIALIZER(UTESTWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UTESTWidget*>(this); }


#define FID_Users_KGA_source_repos_UnrealGAS_Source_UnrealGAS_Public_Character_TESTWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTESTWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTESTWidget(UTESTWidget&&); \
	UTESTWidget(const UTESTWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTESTWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTESTWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTESTWidget) \
	NO_API virtual ~UTESTWidget();


#define FID_Users_KGA_source_repos_UnrealGAS_Source_UnrealGAS_Public_Character_TESTWidget_h_14_PROLOG
#define FID_Users_KGA_source_repos_UnrealGAS_Source_UnrealGAS_Public_Character_TESTWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_KGA_source_repos_UnrealGAS_Source_UnrealGAS_Public_Character_TESTWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_KGA_source_repos_UnrealGAS_Source_UnrealGAS_Public_Character_TESTWidget_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_KGA_source_repos_UnrealGAS_Source_UnrealGAS_Public_Character_TESTWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALGAS_API UClass* StaticClass<class UTESTWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_KGA_source_repos_UnrealGAS_Source_UnrealGAS_Public_Character_TESTWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
