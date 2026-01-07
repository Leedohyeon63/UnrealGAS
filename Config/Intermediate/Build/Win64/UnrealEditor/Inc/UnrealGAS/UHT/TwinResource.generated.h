// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/TwinResource.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALGAS_TwinResource_generated_h
#error "TwinResource.generated.h already included, missing '#pragma once' in TwinResource.h"
#endif
#define UNREALGAS_TwinResource_generated_h

#define FID_Users_KGA_source_repos_UnrealGAS_Source_UnrealGAS_Public_Interface_TwinResource_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UpdateMaxMana_Implementation(float InValue) {}; \
	virtual void UpdateCurrentMana_Implementation(float InValue) {}; \
	virtual void UpdateMaxHealth_Implementation(float InValue) {}; \
	virtual void UpdateCurrentHealth_Implementation(float InValue) {}; \
	DECLARE_FUNCTION(execUpdateMaxMana); \
	DECLARE_FUNCTION(execUpdateCurrentMana); \
	DECLARE_FUNCTION(execUpdateMaxHealth); \
	DECLARE_FUNCTION(execUpdateCurrentHealth);


#define FID_Users_KGA_source_repos_UnrealGAS_Source_UnrealGAS_Public_Interface_TwinResource_h_13_CALLBACK_WRAPPERS
#define FID_Users_KGA_source_repos_UnrealGAS_Source_UnrealGAS_Public_Interface_TwinResource_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALGAS_API UTwinResource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTwinResource(UTwinResource&&); \
	UTwinResource(const UTwinResource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALGAS_API, UTwinResource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTwinResource); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTwinResource) \
	UNREALGAS_API virtual ~UTwinResource();


#define FID_Users_KGA_source_repos_UnrealGAS_Source_UnrealGAS_Public_Interface_TwinResource_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTwinResource(); \
	friend struct Z_Construct_UClass_UTwinResource_Statics; \
public: \
	DECLARE_CLASS(UTwinResource, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UnrealGAS"), UNREALGAS_API) \
	DECLARE_SERIALIZER(UTwinResource)


#define FID_Users_KGA_source_repos_UnrealGAS_Source_UnrealGAS_Public_Interface_TwinResource_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_KGA_source_repos_UnrealGAS_Source_UnrealGAS_Public_Interface_TwinResource_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_KGA_source_repos_UnrealGAS_Source_UnrealGAS_Public_Interface_TwinResource_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_KGA_source_repos_UnrealGAS_Source_UnrealGAS_Public_Interface_TwinResource_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITwinResource() {} \
public: \
	typedef UTwinResource UClassType; \
	typedef ITwinResource ThisClass; \
	static void Execute_UpdateCurrentHealth(UObject* O, float InValue); \
	static void Execute_UpdateCurrentMana(UObject* O, float InValue); \
	static void Execute_UpdateMaxHealth(UObject* O, float InValue); \
	static void Execute_UpdateMaxMana(UObject* O, float InValue); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_KGA_source_repos_UnrealGAS_Source_UnrealGAS_Public_Interface_TwinResource_h_10_PROLOG
#define FID_Users_KGA_source_repos_UnrealGAS_Source_UnrealGAS_Public_Interface_TwinResource_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_KGA_source_repos_UnrealGAS_Source_UnrealGAS_Public_Interface_TwinResource_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_KGA_source_repos_UnrealGAS_Source_UnrealGAS_Public_Interface_TwinResource_h_13_CALLBACK_WRAPPERS \
	FID_Users_KGA_source_repos_UnrealGAS_Source_UnrealGAS_Public_Interface_TwinResource_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALGAS_API UClass* StaticClass<class UTwinResource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_KGA_source_repos_UnrealGAS_Source_UnrealGAS_Public_Interface_TwinResource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
