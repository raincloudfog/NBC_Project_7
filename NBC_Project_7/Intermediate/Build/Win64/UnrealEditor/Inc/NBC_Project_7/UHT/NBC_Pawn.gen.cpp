// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_Project_7/Public/NBC_Pawn.h"
#include "EnhancedInput/Public/InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBC_Pawn() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
NBC_PROJECT_7_API UClass* Z_Construct_UClass_ANBC_Pawn();
NBC_PROJECT_7_API UClass* Z_Construct_UClass_ANBC_Pawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBC_Project_7();
// End Cross Module References

// Begin Class ANBC_Pawn Function CheckGround
struct Z_Construct_UFunction_ANBC_Pawn_CheckGround_Statics
{
	struct NBC_Pawn_eventCheckGround_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NBC_Pawn.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ANBC_Pawn_CheckGround_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NBC_Pawn_eventCheckGround_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANBC_Pawn_CheckGround_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NBC_Pawn_eventCheckGround_Parms), &Z_Construct_UFunction_ANBC_Pawn_CheckGround_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANBC_Pawn_CheckGround_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANBC_Pawn_CheckGround_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Pawn_CheckGround_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBC_Pawn_CheckGround_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBC_Pawn, nullptr, "CheckGround", nullptr, nullptr, Z_Construct_UFunction_ANBC_Pawn_CheckGround_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Pawn_CheckGround_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANBC_Pawn_CheckGround_Statics::NBC_Pawn_eventCheckGround_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Pawn_CheckGround_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBC_Pawn_CheckGround_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANBC_Pawn_CheckGround_Statics::NBC_Pawn_eventCheckGround_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANBC_Pawn_CheckGround()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBC_Pawn_CheckGround_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBC_Pawn::execCheckGround)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckGround();
	P_NATIVE_END;
}
// End Class ANBC_Pawn Function CheckGround

// Begin Class ANBC_Pawn Function Gravity
struct Z_Construct_UFunction_ANBC_Pawn_Gravity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NBC_Pawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBC_Pawn_Gravity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBC_Pawn, nullptr, "Gravity", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Pawn_Gravity_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBC_Pawn_Gravity_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANBC_Pawn_Gravity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBC_Pawn_Gravity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBC_Pawn::execGravity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Gravity();
	P_NATIVE_END;
}
// End Class ANBC_Pawn Function Gravity

// Begin Class ANBC_Pawn Function Jump
struct Z_Construct_UFunction_ANBC_Pawn_Jump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NBC_Pawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBC_Pawn_Jump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBC_Pawn, nullptr, "Jump", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Pawn_Jump_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBC_Pawn_Jump_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANBC_Pawn_Jump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBC_Pawn_Jump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBC_Pawn::execJump)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Jump();
	P_NATIVE_END;
}
// End Class ANBC_Pawn Function Jump

// Begin Class ANBC_Pawn Function Look
struct Z_Construct_UFunction_ANBC_Pawn_Look_Statics
{
	struct NBC_Pawn_eventLook_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NBC_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANBC_Pawn_Look_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBC_Pawn_eventLook_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANBC_Pawn_Look_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANBC_Pawn_Look_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Pawn_Look_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBC_Pawn_Look_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBC_Pawn, nullptr, "Look", nullptr, nullptr, Z_Construct_UFunction_ANBC_Pawn_Look_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Pawn_Look_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANBC_Pawn_Look_Statics::NBC_Pawn_eventLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Pawn_Look_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBC_Pawn_Look_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANBC_Pawn_Look_Statics::NBC_Pawn_eventLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANBC_Pawn_Look()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBC_Pawn_Look_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBC_Pawn::execLook)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Look(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ANBC_Pawn Function Look

// Begin Class ANBC_Pawn Function Move
struct Z_Construct_UFunction_ANBC_Pawn_Move_Statics
{
	struct NBC_Pawn_eventMove_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NBC_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANBC_Pawn_Move_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBC_Pawn_eventMove_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANBC_Pawn_Move_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANBC_Pawn_Move_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Pawn_Move_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBC_Pawn_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBC_Pawn, nullptr, "Move", nullptr, nullptr, Z_Construct_UFunction_ANBC_Pawn_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Pawn_Move_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANBC_Pawn_Move_Statics::NBC_Pawn_eventMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Pawn_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBC_Pawn_Move_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANBC_Pawn_Move_Statics::NBC_Pawn_eventMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANBC_Pawn_Move()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBC_Pawn_Move_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBC_Pawn::execMove)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Move(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ANBC_Pawn Function Move

// Begin Class ANBC_Pawn Function StartJump
struct Z_Construct_UFunction_ANBC_Pawn_StartJump_Statics
{
	struct NBC_Pawn_eventStartJump_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NBC_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANBC_Pawn_StartJump_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBC_Pawn_eventStartJump_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANBC_Pawn_StartJump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANBC_Pawn_StartJump_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Pawn_StartJump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBC_Pawn_StartJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBC_Pawn, nullptr, "StartJump", nullptr, nullptr, Z_Construct_UFunction_ANBC_Pawn_StartJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Pawn_StartJump_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANBC_Pawn_StartJump_Statics::NBC_Pawn_eventStartJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Pawn_StartJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBC_Pawn_StartJump_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANBC_Pawn_StartJump_Statics::NBC_Pawn_eventStartJump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANBC_Pawn_StartJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBC_Pawn_StartJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBC_Pawn::execStartJump)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartJump(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ANBC_Pawn Function StartJump

// Begin Class ANBC_Pawn Function StopJump
struct Z_Construct_UFunction_ANBC_Pawn_StopJump_Statics
{
	struct NBC_Pawn_eventStopJump_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NBC_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANBC_Pawn_StopJump_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBC_Pawn_eventStopJump_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANBC_Pawn_StopJump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANBC_Pawn_StopJump_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Pawn_StopJump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBC_Pawn_StopJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBC_Pawn, nullptr, "StopJump", nullptr, nullptr, Z_Construct_UFunction_ANBC_Pawn_StopJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Pawn_StopJump_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANBC_Pawn_StopJump_Statics::NBC_Pawn_eventStopJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Pawn_StopJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBC_Pawn_StopJump_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANBC_Pawn_StopJump_Statics::NBC_Pawn_eventStopJump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANBC_Pawn_StopJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBC_Pawn_StopJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBC_Pawn::execStopJump)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopJump(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ANBC_Pawn Function StopJump

// Begin Class ANBC_Pawn Function StopMoving
struct Z_Construct_UFunction_ANBC_Pawn_StopMoving_Statics
{
	struct NBC_Pawn_eventStopMoving_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NBC_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANBC_Pawn_StopMoving_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBC_Pawn_eventStopMoving_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANBC_Pawn_StopMoving_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANBC_Pawn_StopMoving_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Pawn_StopMoving_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBC_Pawn_StopMoving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANBC_Pawn, nullptr, "StopMoving", nullptr, nullptr, Z_Construct_UFunction_ANBC_Pawn_StopMoving_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Pawn_StopMoving_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANBC_Pawn_StopMoving_Statics::NBC_Pawn_eventStopMoving_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBC_Pawn_StopMoving_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBC_Pawn_StopMoving_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANBC_Pawn_StopMoving_Statics::NBC_Pawn_eventStopMoving_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANBC_Pawn_StopMoving()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBC_Pawn_StopMoving_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBC_Pawn::execStopMoving)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopMoving(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ANBC_Pawn Function StopMoving

// Begin Class ANBC_Pawn
void ANBC_Pawn::StaticRegisterNativesANBC_Pawn()
{
	UClass* Class = ANBC_Pawn::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckGround", &ANBC_Pawn::execCheckGround },
		{ "Gravity", &ANBC_Pawn::execGravity },
		{ "Jump", &ANBC_Pawn::execJump },
		{ "Look", &ANBC_Pawn::execLook },
		{ "Move", &ANBC_Pawn::execMove },
		{ "StartJump", &ANBC_Pawn::execStartJump },
		{ "StopJump", &ANBC_Pawn::execStopJump },
		{ "StopMoving", &ANBC_Pawn::execStopMoving },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANBC_Pawn);
UClass* Z_Construct_UClass_ANBC_Pawn_NoRegister()
{
	return ANBC_Pawn::StaticClass();
}
struct Z_Construct_UClass_ANBC_Pawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NBC_Pawn.h" },
		{ "ModuleRelativePath", "Public/NBC_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootCapsuleComp_MetaData[] = {
		{ "Category", "Component" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xa3\xef\xbf\xbd\xef\xbf\xbd.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NBC_Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xa3\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkelMeshComp_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NBC_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NBC_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NBC_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_fDownDisTance_MetaData[] = {
		{ "Category", "VALUE" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xee\xba\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xf3\xb8\xb6\xb3\xef\xbf\xbd \xef\xbf\xbd\xc6\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd8\xbe\xdf\xb5\xc7\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC_Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xee\xba\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xf3\xb8\xb6\xb3\xef\xbf\xbd \xef\xbf\xbd\xc6\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd8\xbe\xdf\xb5\xc7\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_fJumpForce_MetaData[] = {
		{ "Category", "VALUE" },
		{ "ModuleRelativePath", "Public/NBC_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[] = {
		{ "Category", "VALUE" },
		{ "ModuleRelativePath", "Public/NBC_Pawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "VALUE" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb5\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC_Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb5\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LerpValue_MetaData[] = {
		{ "Category", "VALUE" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xc7\xa5\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd9\xb7\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC_Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc7\xa5\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd9\xb7\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPressedJump_MetaData[] = {
		{ "Category", "VALUE" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xf0\xb8\xae\xbe\xef\xbf\xbd \xc4\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd bool\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd5\xbf\xef\xbf\xbd \xef\xbf\xbd\xd2\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd b\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd9\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC_Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xf0\xb8\xae\xbe\xef\xbf\xbd \xc4\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd bool\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd5\xbf\xef\xbf\xbd \xef\xbf\xbd\xd2\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd b\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd9\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FVelocity_MetaData[] = {
		{ "Category", "VALUE" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/NBC_Pawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootCapsuleComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkelMeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_fDownDisTance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_fJumpForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Acceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LerpValue;
	static void NewProp_bPressedJump_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPressedJump;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANBC_Pawn_CheckGround, "CheckGround" }, // 3046214629
		{ &Z_Construct_UFunction_ANBC_Pawn_Gravity, "Gravity" }, // 343792549
		{ &Z_Construct_UFunction_ANBC_Pawn_Jump, "Jump" }, // 786911756
		{ &Z_Construct_UFunction_ANBC_Pawn_Look, "Look" }, // 3693565399
		{ &Z_Construct_UFunction_ANBC_Pawn_Move, "Move" }, // 3639947813
		{ &Z_Construct_UFunction_ANBC_Pawn_StartJump, "StartJump" }, // 374214670
		{ &Z_Construct_UFunction_ANBC_Pawn_StopJump, "StopJump" }, // 3137773794
		{ &Z_Construct_UFunction_ANBC_Pawn_StopMoving, "StopMoving" }, // 2925581035
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANBC_Pawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANBC_Pawn_Statics::NewProp_RootCapsuleComp = { "RootCapsuleComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_Pawn, RootCapsuleComp), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootCapsuleComp_MetaData), NewProp_RootCapsuleComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANBC_Pawn_Statics::NewProp_SkelMeshComp = { "SkelMeshComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_Pawn, SkelMeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkelMeshComp_MetaData), NewProp_SkelMeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANBC_Pawn_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_Pawn, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComp_MetaData), NewProp_SpringArmComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANBC_Pawn_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_Pawn, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComp_MetaData), NewProp_CameraComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANBC_Pawn_Statics::NewProp_fDownDisTance = { "fDownDisTance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_Pawn, fDownDisTance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fDownDisTance_MetaData), NewProp_fDownDisTance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANBC_Pawn_Statics::NewProp_fJumpForce = { "fJumpForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_Pawn, fJumpForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fJumpForce_MetaData), NewProp_fJumpForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANBC_Pawn_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_Pawn, Acceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Acceleration_MetaData), NewProp_Acceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANBC_Pawn_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_Pawn, MaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpeed_MetaData), NewProp_MaxSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANBC_Pawn_Statics::NewProp_LerpValue = { "LerpValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_Pawn, LerpValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LerpValue_MetaData), NewProp_LerpValue_MetaData) };
void Z_Construct_UClass_ANBC_Pawn_Statics::NewProp_bPressedJump_SetBit(void* Obj)
{
	((ANBC_Pawn*)Obj)->bPressedJump = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANBC_Pawn_Statics::NewProp_bPressedJump = { "bPressedJump", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANBC_Pawn), &Z_Construct_UClass_ANBC_Pawn_Statics::NewProp_bPressedJump_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPressedJump_MetaData), NewProp_bPressedJump_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANBC_Pawn_Statics::NewProp_FVelocity = { "FVelocity", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_Pawn, FVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FVelocity_MetaData), NewProp_FVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANBC_Pawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_Pawn_Statics::NewProp_RootCapsuleComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_Pawn_Statics::NewProp_SkelMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_Pawn_Statics::NewProp_SpringArmComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_Pawn_Statics::NewProp_CameraComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_Pawn_Statics::NewProp_fDownDisTance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_Pawn_Statics::NewProp_fJumpForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_Pawn_Statics::NewProp_Acceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_Pawn_Statics::NewProp_MaxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_Pawn_Statics::NewProp_LerpValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_Pawn_Statics::NewProp_bPressedJump,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_Pawn_Statics::NewProp_FVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_Pawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANBC_Pawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_Project_7,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_Pawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANBC_Pawn_Statics::ClassParams = {
	&ANBC_Pawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANBC_Pawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_Pawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_Pawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ANBC_Pawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANBC_Pawn()
{
	if (!Z_Registration_Info_UClass_ANBC_Pawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANBC_Pawn.OuterSingleton, Z_Construct_UClass_ANBC_Pawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANBC_Pawn.OuterSingleton;
}
template<> NBC_PROJECT_7_API UClass* StaticClass<ANBC_Pawn>()
{
	return ANBC_Pawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANBC_Pawn);
ANBC_Pawn::~ANBC_Pawn() {}
// End Class ANBC_Pawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_7_Source_NBC_Project_7_Public_NBC_Pawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANBC_Pawn, ANBC_Pawn::StaticClass, TEXT("ANBC_Pawn"), &Z_Registration_Info_UClass_ANBC_Pawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANBC_Pawn), 703926114U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_7_Source_NBC_Project_7_Public_NBC_Pawn_h_1205676166(TEXT("/Script/NBC_Project_7"),
	Z_CompiledInDeferFile_FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_7_Source_NBC_Project_7_Public_NBC_Pawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_7_Source_NBC_Project_7_Public_NBC_Pawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
