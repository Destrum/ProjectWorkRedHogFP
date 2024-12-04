// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectWorkRedHogFp/Public/NPC/BTService_ChangeSpeed.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_ChangeSpeed() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
PROJECTWORKREDHOGFP_API UClass* Z_Construct_UClass_UBTService_ChangeSpeed();
PROJECTWORKREDHOGFP_API UClass* Z_Construct_UClass_UBTService_ChangeSpeed_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectWorkRedHogFp();
// End Cross Module References

// Begin Class UBTService_ChangeSpeed
void UBTService_ChangeSpeed::StaticRegisterNativesUBTService_ChangeSpeed()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_ChangeSpeed);
UClass* Z_Construct_UClass_UBTService_ChangeSpeed_NoRegister()
{
	return UBTService_ChangeSpeed::StaticClass();
}
struct Z_Construct_UClass_UBTService_ChangeSpeed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "NPC/BTService_ChangeSpeed.h" },
		{ "ModuleRelativePath", "Public/NPC/BTService_ChangeSpeed.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/NPC/BTService_ChangeSpeed.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_ChangeSpeed>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTService_ChangeSpeed_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_ChangeSpeed, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_ChangeSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_ChangeSpeed_Statics::NewProp_Speed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_ChangeSpeed_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTService_ChangeSpeed_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectWorkRedHogFp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_ChangeSpeed_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_ChangeSpeed_Statics::ClassParams = {
	&UBTService_ChangeSpeed::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTService_ChangeSpeed_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_ChangeSpeed_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_ChangeSpeed_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_ChangeSpeed_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTService_ChangeSpeed()
{
	if (!Z_Registration_Info_UClass_UBTService_ChangeSpeed.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_ChangeSpeed.OuterSingleton, Z_Construct_UClass_UBTService_ChangeSpeed_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTService_ChangeSpeed.OuterSingleton;
}
template<> PROJECTWORKREDHOGFP_API UClass* StaticClass<UBTService_ChangeSpeed>()
{
	return UBTService_ChangeSpeed::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_ChangeSpeed);
UBTService_ChangeSpeed::~UBTService_ChangeSpeed() {}
// End Class UBTService_ChangeSpeed

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_BTService_ChangeSpeed_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_ChangeSpeed, UBTService_ChangeSpeed::StaticClass, TEXT("UBTService_ChangeSpeed"), &Z_Registration_Info_UClass_UBTService_ChangeSpeed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_ChangeSpeed), 4288983569U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_BTService_ChangeSpeed_h_3199910127(TEXT("/Script/ProjectWorkRedHogFp"),
	Z_CompiledInDeferFile_FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_BTService_ChangeSpeed_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_BTService_ChangeSpeed_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
