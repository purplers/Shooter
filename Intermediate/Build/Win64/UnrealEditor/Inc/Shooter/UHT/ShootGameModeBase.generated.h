// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ShootGameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_ShootGameModeBase_generated_h
#error "ShootGameModeBase.generated.h already included, missing '#pragma once' in ShootGameModeBase.h"
#endif
#define SHOOTER_ShootGameModeBase_generated_h

#define FID_ue_project_Shooter_Source_Shooter_ShootGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShootGameModeBase(); \
	friend struct Z_Construct_UClass_AShootGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AShootGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(AShootGameModeBase)


#define FID_ue_project_Shooter_Source_Shooter_ShootGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShootGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AShootGameModeBase(AShootGameModeBase&&); \
	AShootGameModeBase(const AShootGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShootGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShootGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShootGameModeBase) \
	NO_API virtual ~AShootGameModeBase();


#define FID_ue_project_Shooter_Source_Shooter_ShootGameModeBase_h_12_PROLOG
#define FID_ue_project_Shooter_Source_Shooter_ShootGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue_project_Shooter_Source_Shooter_ShootGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_ue_project_Shooter_Source_Shooter_ShootGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class AShootGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ue_project_Shooter_Source_Shooter_ShootGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
