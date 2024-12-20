// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ShooterCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_ShooterCharacter_generated_h
#error "ShooterCharacter.generated.h already included, missing '#pragma once' in ShooterCharacter.h"
#endif
#define SHOOTER_ShooterCharacter_generated_h

#define FID_ue_project_Shooter_Source_Shooter_ShooterCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterCharacter(); \
	friend struct Z_Construct_UClass_AShooterCharacter_Statics; \
public: \
	DECLARE_CLASS(AShooterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(AShooterCharacter)


#define FID_ue_project_Shooter_Source_Shooter_ShooterCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AShooterCharacter(AShooterCharacter&&); \
	AShooterCharacter(const AShooterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShooterCharacter) \
	NO_API virtual ~AShooterCharacter();


#define FID_ue_project_Shooter_Source_Shooter_ShooterCharacter_h_9_PROLOG
#define FID_ue_project_Shooter_Source_Shooter_ShooterCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ue_project_Shooter_Source_Shooter_ShooterCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_ue_project_Shooter_Source_Shooter_ShooterCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class AShooterCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ue_project_Shooter_Source_Shooter_ShooterCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
