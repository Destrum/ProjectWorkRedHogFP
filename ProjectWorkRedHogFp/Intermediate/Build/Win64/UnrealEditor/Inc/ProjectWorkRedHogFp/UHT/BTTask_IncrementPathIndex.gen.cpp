// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectWorkRedHogFp/Public/NPC/BTTask_IncrementPathIndex.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_IncrementPathIndex() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
PROJECTWORKREDHOGFP_API UClass* Z_Construct_UClass_UBTTask_IncrementPathIndex();
PROJECTWORKREDHOGFP_API UClass* Z_Construct_UClass_UBTTask_IncrementPathIndex_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectWorkRedHogFp();
// End Cross Module References

// Begin Class UBTTask_IncrementPathIndex
void UBTTask_IncrementPathIndex::StaticRegisterNativesUBTTask_IncrementPathIndex()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_IncrementPathIndex);
UClass* Z_Construct_UClass_UBTTask_IncrementPathIndex_NoRegister()
{
	return UBTTask_IncrementPathIndex::StaticClass();
}
struct Z_Construct_UClass_UBTTask_IncrementPathIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "NPC/BTTask_IncrementPathIndex.h" },
		{ "ModuleRelativePath", "Public/NPC/BTTask_IncrementPathIndex.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBiDirectional_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/NPC/BTTask_IncrementPathIndex.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bBiDirectional_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBiDirectional;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_IncrementPathIndex>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UBTTask_IncrementPathIndex_Statics::NewProp_bBiDirectional_SetBit(void* Obj)
{
	((UBTTask_IncrementPathIndex*)Obj)->bBiDirectional = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_IncrementPathIndex_Statics::NewProp_bBiDirectional = { "bBiDirectional", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBTTask_IncrementPathIndex), &Z_Construct_UClass_UBTTask_IncrementPathIndex_Statics::NewProp_bBiDirectional_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBiDirectional_MetaData), NewProp_bBiDirectional_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_IncrementPathIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_IncrementPathIndex_Statics::NewProp_bBiDirectional,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_IncrementPathIndex_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_IncrementPathIndex_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectWorkRedHogFp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_IncrementPathIndex_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_IncrementPathIndex_Statics::ClassParams = {
	&UBTTask_IncrementPathIndex::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_IncrementPathIndex_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_IncrementPathIndex_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_IncrementPathIndex_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_IncrementPathIndex_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_IncrementPathIndex()
{
	if (!Z_Registration_Info_UClass_UBTTask_IncrementPathIndex.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_IncrementPathIndex.OuterSingleton, Z_Construct_UClass_UBTTask_IncrementPathIndex_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_IncrementPathIndex.OuterSingleton;
}
template<> PROJECTWORKREDHOGFP_API UClass* StaticClass<UBTTask_IncrementPathIndex>()
{
	return UBTTask_IncrementPathIndex::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_IncrementPathIndex);
UBTTask_IncrementPathIndex::~UBTTask_IncrementPathIndex() {}
// End Class UBTTask_IncrementPathIndex

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_BTTask_IncrementPathIndex_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_IncrementPathIndex, UBTTask_IncrementPathIndex::StaticClass, TEXT("UBTTask_IncrementPathIndex"), &Z_Registration_Info_UClass_UBTTask_IncrementPathIndex, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_IncrementPathIndex), 3149309703U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_BTTask_IncrementPathIndex_h_2806619326(TEXT("/Script/ProjectWorkRedHogFp"),
	Z_CompiledInDeferFile_FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_BTTask_IncrementPathIndex_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_BTTask_IncrementPathIndex_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
