// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_Project_7/Public/NBC_GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBC_GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
NBC_PROJECT_7_API UClass* Z_Construct_UClass_ANBC_GameMode();
NBC_PROJECT_7_API UClass* Z_Construct_UClass_ANBC_GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBC_Project_7();
// End Cross Module References

// Begin Class ANBC_GameMode
void ANBC_GameMode::StaticRegisterNativesANBC_GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANBC_GameMode);
UClass* Z_Construct_UClass_ANBC_GameMode_NoRegister()
{
	return ANBC_GameMode::StaticClass();
}
struct Z_Construct_UClass_ANBC_GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "NBC_GameMode.h" },
		{ "ModuleRelativePath", "Public/NBC_GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANBC_GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANBC_GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_Project_7,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANBC_GameMode_Statics::ClassParams = {
	&ANBC_GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANBC_GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ANBC_GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANBC_GameMode()
{
	if (!Z_Registration_Info_UClass_ANBC_GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANBC_GameMode.OuterSingleton, Z_Construct_UClass_ANBC_GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANBC_GameMode.OuterSingleton;
}
template<> NBC_PROJECT_7_API UClass* StaticClass<ANBC_GameMode>()
{
	return ANBC_GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANBC_GameMode);
ANBC_GameMode::~ANBC_GameMode() {}
// End Class ANBC_GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_7_Source_NBC_Project_7_Public_NBC_GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANBC_GameMode, ANBC_GameMode::StaticClass, TEXT("ANBC_GameMode"), &Z_Registration_Info_UClass_ANBC_GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANBC_GameMode), 692180924U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_7_Source_NBC_Project_7_Public_NBC_GameMode_h_3704403796(TEXT("/Script/NBC_Project_7"),
	Z_CompiledInDeferFile_FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_7_Source_NBC_Project_7_Public_NBC_GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_7_Source_NBC_Project_7_Public_NBC_GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
