// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_Project_7/Public/NBC_ActorComponent_Human.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBC_ActorComponent_Human() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
NBC_PROJECT_7_API UClass* Z_Construct_UClass_UNBC_ActorComponent_Human();
NBC_PROJECT_7_API UClass* Z_Construct_UClass_UNBC_ActorComponent_Human_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBC_Project_7();
// End Cross Module References

// Begin Class UNBC_ActorComponent_Human
void UNBC_ActorComponent_Human::StaticRegisterNativesUNBC_ActorComponent_Human()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNBC_ActorComponent_Human);
UClass* Z_Construct_UClass_UNBC_ActorComponent_Human_NoRegister()
{
	return UNBC_ActorComponent_Human::StaticClass();
}
struct Z_Construct_UClass_UNBC_ActorComponent_Human_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "NBC_ActorComponent_Human.h" },
		{ "ModuleRelativePath", "Public/NBC_ActorComponent_Human.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNBC_ActorComponent_Human>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNBC_ActorComponent_Human_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_Project_7,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNBC_ActorComponent_Human_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNBC_ActorComponent_Human_Statics::ClassParams = {
	&UNBC_ActorComponent_Human::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNBC_ActorComponent_Human_Statics::Class_MetaDataParams), Z_Construct_UClass_UNBC_ActorComponent_Human_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNBC_ActorComponent_Human()
{
	if (!Z_Registration_Info_UClass_UNBC_ActorComponent_Human.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNBC_ActorComponent_Human.OuterSingleton, Z_Construct_UClass_UNBC_ActorComponent_Human_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNBC_ActorComponent_Human.OuterSingleton;
}
template<> NBC_PROJECT_7_API UClass* StaticClass<UNBC_ActorComponent_Human>()
{
	return UNBC_ActorComponent_Human::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNBC_ActorComponent_Human);
UNBC_ActorComponent_Human::~UNBC_ActorComponent_Human() {}
// End Class UNBC_ActorComponent_Human

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_7_Source_NBC_Project_7_Public_NBC_ActorComponent_Human_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNBC_ActorComponent_Human, UNBC_ActorComponent_Human::StaticClass, TEXT("UNBC_ActorComponent_Human"), &Z_Registration_Info_UClass_UNBC_ActorComponent_Human, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNBC_ActorComponent_Human), 1936087680U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_7_Source_NBC_Project_7_Public_NBC_ActorComponent_Human_h_2796529142(TEXT("/Script/NBC_Project_7"),
	Z_CompiledInDeferFile_FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_7_Source_NBC_Project_7_Public_NBC_ActorComponent_Human_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_qordl_Documents_Unreal_Projects_NBC_Project_7_Source_NBC_Project_7_Public_NBC_ActorComponent_Human_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
