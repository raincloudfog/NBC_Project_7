// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NBC_Pawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;
#ifdef NBC_PROJECT_7_NBC_Pawn_generated_h
#error "NBC_Pawn.generated.h already included, missing '#pragma once' in NBC_Pawn.h"
#endif
#define NBC_PROJECT_7_NBC_Pawn_generated_h

#define FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_7_Source_NBC_Project_7_Public_NBC_Pawn_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckGround); \
	DECLARE_FUNCTION(execGravity); \
	DECLARE_FUNCTION(execJump); \
	DECLARE_FUNCTION(execLook); \
	DECLARE_FUNCTION(execStopJump); \
	DECLARE_FUNCTION(execStartJump); \
	DECLARE_FUNCTION(execStopMoving); \
	DECLARE_FUNCTION(execMove);


#define FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_7_Source_NBC_Project_7_Public_NBC_Pawn_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANBC_Pawn(); \
	friend struct Z_Construct_UClass_ANBC_Pawn_Statics; \
public: \
	DECLARE_CLASS(ANBC_Pawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NBC_Project_7"), NO_API) \
	DECLARE_SERIALIZER(ANBC_Pawn)


#define FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_7_Source_NBC_Project_7_Public_NBC_Pawn_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANBC_Pawn(ANBC_Pawn&&); \
	ANBC_Pawn(const ANBC_Pawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANBC_Pawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANBC_Pawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANBC_Pawn) \
	NO_API virtual ~ANBC_Pawn();


#define FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_7_Source_NBC_Project_7_Public_NBC_Pawn_h_15_PROLOG
#define FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_7_Source_NBC_Project_7_Public_NBC_Pawn_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_7_Source_NBC_Project_7_Public_NBC_Pawn_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_7_Source_NBC_Project_7_Public_NBC_Pawn_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_7_Source_NBC_Project_7_Public_NBC_Pawn_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NBC_PROJECT_7_API UClass* StaticClass<class ANBC_Pawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_7_Source_NBC_Project_7_Public_NBC_Pawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
