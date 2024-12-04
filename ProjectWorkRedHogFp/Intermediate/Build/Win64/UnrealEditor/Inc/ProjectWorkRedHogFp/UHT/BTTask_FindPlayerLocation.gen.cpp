// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectWorkRedHogFp/Public/NPC/BTTask_FindPlayerLocation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_FindPlayerLocation() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
PROJECTWORKREDHOGFP_API UClass* Z_Construct_UClass_UBTTask_FindPlayerLocation();
PROJECTWORKREDHOGFP_API UClass* Z_Construct_UClass_UBTTask_FindPlayerLocation_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectWorkRedHogFp();
// End Cross Module References

// Begin Class UBTTask_FindPlayerLocation
void UBTTask_FindPlayerLocation::StaticRegisterNativesUBTTask_FindPlayerLocation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_FindPlayerLocation);
UClass* Z_Construct_UClass_UBTTask_FindPlayerLocation_NoRegister()
{
	return UBTTask_FindPlayerLocation::StaticClass();
}
struct Z_Construct_UClass_UBTTask_FindPlayerLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "NPC/BTTask_FindPlayerLocation.h" },
		{ "ModuleRelativePath", "Public/NPC/BTTask_FindPlayerLocation.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSearchRandom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Search" },
		{ "ModuleRelativePath", "Public/NPC/BTTask_FindPlayerLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchRadius_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Search" },
		{ "ModuleRelativePath", "Public/NPC/BTTask_FindPlayerLocation.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSearchRandom_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSearchRandom;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SearchRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_FindPlayerLocation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UBTTask_FindPlayerLocation_Statics::NewProp_bSearchRandom_SetBit(void* Obj)
{
	((UBTTask_FindPlayerLocation*)Obj)->bSearchRandom = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_FindPlayerLocation_Statics::NewProp_bSearchRandom = { "bSearchRandom", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBTTask_FindPlayerLocation), &Z_Construct_UClass_UBTTask_FindPlayerLocation_Statics::NewProp_bSearchRandom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSearchRandom_MetaData), NewProp_bSearchRandom_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_FindPlayerLocation_Statics::NewProp_SearchRadius = { "SearchRadius", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_FindPlayerLocation, SearchRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchRadius_MetaData), NewProp_SearchRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_FindPlayerLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FindPlayerLocation_Statics::NewProp_bSearchRandom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FindPlayerLocation_Statics::NewProp_SearchRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindPlayerLocation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_FindPlayerLocation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectWorkRedHogFp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindPlayerLocation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_FindPlayerLocation_Statics::ClassParams = {
	&UBTTask_FindPlayerLocation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_FindPlayerLocation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindPlayerLocation_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindPlayerLocation_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_FindPlayerLocation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_FindPlayerLocation()
{
	if (!Z_Registration_Info_UClass_UBTTask_FindPlayerLocation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_FindPlayerLocation.OuterSingleton, Z_Construct_UClass_UBTTask_FindPlayerLocation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_FindPlayerLocation.OuterSingleton;
}
template<> PROJECTWORKREDHOGFP_API UClass* StaticClass<UBTTask_FindPlayerLocation>()
{
	return UBTTask_FindPlayerLocation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_FindPlayerLocation);
UBTTask_FindPlayerLocation::~UBTTask_FindPlayerLocation() {}
// End Class UBTTask_FindPlayerLocation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_BTTask_FindPlayerLocation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_FindPlayerLocation, UBTTask_FindPlayerLocation::StaticClass, TEXT("UBTTask_FindPlayerLocation"), &Z_Registration_Info_UClass_UBTTask_FindPlayerLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_FindPlayerLocation), 3777466276U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_BTTask_FindPlayerLocation_h_304148034(TEXT("/Script/ProjectWorkRedHogFp"),
	Z_CompiledInDeferFile_FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_BTTask_FindPlayerLocation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_BTTask_FindPlayerLocation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
