// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_Project_7/Public/NBC_DroneController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBC_DroneController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
NBC_PROJECT_7_API UClass* Z_Construct_UClass_ANBC_DroneController();
NBC_PROJECT_7_API UClass* Z_Construct_UClass_ANBC_DroneController_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBC_Project_7();
// End Cross Module References

// Begin Class ANBC_DroneController
void ANBC_DroneController::StaticRegisterNativesANBC_DroneController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANBC_DroneController);
UClass* Z_Construct_UClass_ANBC_DroneController_NoRegister()
{
	return ANBC_DroneController::StaticClass();
}
struct Z_Construct_UClass_ANBC_DroneController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "NBC_DroneController.h" },
		{ "ModuleRelativePath", "Public/NBC_DroneController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/NBC_DroneController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DroneMove_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/NBC_DroneController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DroneLook_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/NBC_DroneController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DroneMove;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DroneLook;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANBC_DroneController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANBC_DroneController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_DroneController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANBC_DroneController_Statics::NewProp_DroneMove = { "DroneMove", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_DroneController, DroneMove), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DroneMove_MetaData), NewProp_DroneMove_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANBC_DroneController_Statics::NewProp_DroneLook = { "DroneLook", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBC_DroneController, DroneLook), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DroneLook_MetaData), NewProp_DroneLook_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANBC_DroneController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_DroneController_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_DroneController_Statics::NewProp_DroneMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBC_DroneController_Statics::NewProp_DroneLook,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_DroneController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANBC_DroneController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_Project_7,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_DroneController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANBC_DroneController_Statics::ClassParams = {
	&ANBC_DroneController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANBC_DroneController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_DroneController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_DroneController_Statics::Class_MetaDataParams), Z_Construct_UClass_ANBC_DroneController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANBC_DroneController()
{
	if (!Z_Registration_Info_UClass_ANBC_DroneController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANBC_DroneController.OuterSingleton, Z_Construct_UClass_ANBC_DroneController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANBC_DroneController.OuterSingleton;
}
template<> NBC_PROJECT_7_API UClass* StaticClass<ANBC_DroneController>()
{
	return ANBC_DroneController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANBC_DroneController);
ANBC_DroneController::~ANBC_DroneController() {}
// End Class ANBC_DroneController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_7_Source_NBC_Project_7_Public_NBC_DroneController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANBC_DroneController, ANBC_DroneController::StaticClass, TEXT("ANBC_DroneController"), &Z_Registration_Info_UClass_ANBC_DroneController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANBC_DroneController), 2128673318U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_7_Source_NBC_Project_7_Public_NBC_DroneController_h_111734458(TEXT("/Script/NBC_Project_7"),
	Z_CompiledInDeferFile_FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_7_Source_NBC_Project_7_Public_NBC_DroneController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_7_Source_NBC_Project_7_Public_NBC_DroneController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
