// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_Project_7/Public/NBC_Drone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBC_Drone() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
NBC_PROJECT_7_API UClass* Z_Construct_UClass_ANBC_Drone();
NBC_PROJECT_7_API UClass* Z_Construct_UClass_ANBC_Drone_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBC_Project_7();
// End Cross Module References

// Begin Class ANBC_Drone
void ANBC_Drone::StaticRegisterNativesANBC_Drone()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANBC_Drone);
UClass* Z_Construct_UClass_ANBC_Drone_NoRegister()
{
	return ANBC_Drone::StaticClass();
}
struct Z_Construct_UClass_ANBC_Drone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NBC_Drone.h" },
		{ "ModuleRelativePath", "Public/NBC_Drone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Capsule_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NBC_Drone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NBC_Drone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NBC_Drone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkelMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NBC_Drone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_fSpeed_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "Public/NBC_Drone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_fDecelerationRate_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "Public/NBC_Drone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Capsule;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkelMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_fSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_fDecelerationRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANBC_Drone>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANBC_Drone_Statics::NewProp_Capsule = { "Capsule", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_Drone, Capsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Capsule_MetaData), NewProp_Capsule_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANBC_Drone_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_Drone, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANBC_Drone_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_Drone, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANBC_Drone_Statics::NewProp_SkelMesh = { "SkelMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_Drone, SkelMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkelMesh_MetaData), NewProp_SkelMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANBC_Drone_Statics::NewProp_fSpeed = { "fSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_Drone, fSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fSpeed_MetaData), NewProp_fSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANBC_Drone_Statics::NewProp_fDecelerationRate = { "fDecelerationRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_Drone, fDecelerationRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fDecelerationRate_MetaData), NewProp_fDecelerationRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANBC_Drone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_Drone_Statics::NewProp_Capsule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_Drone_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_Drone_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_Drone_Statics::NewProp_SkelMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_Drone_Statics::NewProp_fSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_Drone_Statics::NewProp_fDecelerationRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_Drone_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANBC_Drone_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_Project_7,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_Drone_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANBC_Drone_Statics::ClassParams = {
	&ANBC_Drone::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANBC_Drone_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_Drone_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_Drone_Statics::Class_MetaDataParams), Z_Construct_UClass_ANBC_Drone_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANBC_Drone()
{
	if (!Z_Registration_Info_UClass_ANBC_Drone.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANBC_Drone.OuterSingleton, Z_Construct_UClass_ANBC_Drone_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANBC_Drone.OuterSingleton;
}
template<> NBC_PROJECT_7_API UClass* StaticClass<ANBC_Drone>()
{
	return ANBC_Drone::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANBC_Drone);
ANBC_Drone::~ANBC_Drone() {}
// End Class ANBC_Drone

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_7_Source_NBC_Project_7_Public_NBC_Drone_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANBC_Drone, ANBC_Drone::StaticClass, TEXT("ANBC_Drone"), &Z_Registration_Info_UClass_ANBC_Drone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANBC_Drone), 521114077U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_7_Source_NBC_Project_7_Public_NBC_Drone_h_859316312(TEXT("/Script/NBC_Project_7"),
	Z_CompiledInDeferFile_FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_7_Source_NBC_Project_7_Public_NBC_Drone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_7_Source_NBC_Project_7_Public_NBC_Drone_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
