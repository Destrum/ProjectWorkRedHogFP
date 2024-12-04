// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectWorkRedHogFp/Public/NPC/BTService_IsPlayerInKillRange.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_IsPlayerInKillRange() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
PROJECTWORKREDHOGFP_API UClass* Z_Construct_UClass_UBTService_IsPlayerInKillRange();
PROJECTWORKREDHOGFP_API UClass* Z_Construct_UClass_UBTService_IsPlayerInKillRange_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectWorkRedHogFp();
// End Cross Module References

// Begin Class UBTService_IsPlayerInKillRange
void UBTService_IsPlayerInKillRange::StaticRegisterNativesUBTService_IsPlayerInKillRange()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_IsPlayerInKillRange);
UClass* Z_Construct_UClass_UBTService_IsPlayerInKillRange_NoRegister()
{
	return UBTService_IsPlayerInKillRange::StaticClass();
}
struct Z_Construct_UClass_UBTService_IsPlayerInKillRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "NPC/BTService_IsPlayerInKillRange.h" },
		{ "ModuleRelativePath", "Public/NPC/BTService_IsPlayerInKillRange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KillRange_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/NPC/BTService_IsPlayerInKillRange.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_KillRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_IsPlayerInKillRange>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTService_IsPlayerInKillRange_Statics::NewProp_KillRange = { "KillRange", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_IsPlayerInKillRange, KillRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KillRange_MetaData), NewProp_KillRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_IsPlayerInKillRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_IsPlayerInKillRange_Statics::NewProp_KillRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_IsPlayerInKillRange_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTService_IsPlayerInKillRange_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectWorkRedHogFp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_IsPlayerInKillRange_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_IsPlayerInKillRange_Statics::ClassParams = {
	&UBTService_IsPlayerInKillRange::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTService_IsPlayerInKillRange_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_IsPlayerInKillRange_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_IsPlayerInKillRange_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_IsPlayerInKillRange_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTService_IsPlayerInKillRange()
{
	if (!Z_Registration_Info_UClass_UBTService_IsPlayerInKillRange.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_IsPlayerInKillRange.OuterSingleton, Z_Construct_UClass_UBTService_IsPlayerInKillRange_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTService_IsPlayerInKillRange.OuterSingleton;
}
template<> PROJECTWORKREDHOGFP_API UClass* StaticClass<UBTService_IsPlayerInKillRange>()
{
	return UBTService_IsPlayerInKillRange::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_IsPlayerInKillRange);
UBTService_IsPlayerInKillRange::~UBTService_IsPlayerInKillRange() {}
// End Class UBTService_IsPlayerInKillRange

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_BTService_IsPlayerInKillRange_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_IsPlayerInKillRange, UBTService_IsPlayerInKillRange::StaticClass, TEXT("UBTService_IsPlayerInKillRange"), &Z_Registration_Info_UClass_UBTService_IsPlayerInKillRange, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_IsPlayerInKillRange), 1758308701U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_BTService_IsPlayerInKillRange_h_1170293870(TEXT("/Script/ProjectWorkRedHogFp"),
	Z_CompiledInDeferFile_FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_BTService_IsPlayerInKillRange_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_BTService_IsPlayerInKillRange_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
