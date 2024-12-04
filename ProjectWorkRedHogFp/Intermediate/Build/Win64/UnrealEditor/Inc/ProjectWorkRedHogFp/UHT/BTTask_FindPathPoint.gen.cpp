// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectWorkRedHogFp/Public/NPC/BTTask_FindPathPoint.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_FindPathPoint() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
PROJECTWORKREDHOGFP_API UClass* Z_Construct_UClass_UBTTask_FindPathPoint();
PROJECTWORKREDHOGFP_API UClass* Z_Construct_UClass_UBTTask_FindPathPoint_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectWorkRedHogFp();
// End Cross Module References

// Begin Class UBTTask_FindPathPoint
void UBTTask_FindPathPoint::StaticRegisterNativesUBTTask_FindPathPoint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_FindPathPoint);
UClass* Z_Construct_UClass_UBTTask_FindPathPoint_NoRegister()
{
	return UBTTask_FindPathPoint::StaticClass();
}
struct Z_Construct_UClass_UBTTask_FindPathPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "NPC/BTTask_FindPathPoint.h" },
		{ "ModuleRelativePath", "Public/NPC/BTTask_FindPathPoint.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatrolPathVectorKey_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BlackBoard" },
		{ "ModuleRelativePath", "Public/NPC/BTTask_FindPathPoint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PatrolPathVectorKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_FindPathPoint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_FindPathPoint_Statics::NewProp_PatrolPathVectorKey = { "PatrolPathVectorKey", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_FindPathPoint, PatrolPathVectorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatrolPathVectorKey_MetaData), NewProp_PatrolPathVectorKey_MetaData) }; // 3940742986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_FindPathPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FindPathPoint_Statics::NewProp_PatrolPathVectorKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindPathPoint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_FindPathPoint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectWorkRedHogFp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindPathPoint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_FindPathPoint_Statics::ClassParams = {
	&UBTTask_FindPathPoint::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_FindPathPoint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindPathPoint_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindPathPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_FindPathPoint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_FindPathPoint()
{
	if (!Z_Registration_Info_UClass_UBTTask_FindPathPoint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_FindPathPoint.OuterSingleton, Z_Construct_UClass_UBTTask_FindPathPoint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_FindPathPoint.OuterSingleton;
}
template<> PROJECTWORKREDHOGFP_API UClass* StaticClass<UBTTask_FindPathPoint>()
{
	return UBTTask_FindPathPoint::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_FindPathPoint);
UBTTask_FindPathPoint::~UBTTask_FindPathPoint() {}
// End Class UBTTask_FindPathPoint

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_BTTask_FindPathPoint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_FindPathPoint, UBTTask_FindPathPoint::StaticClass, TEXT("UBTTask_FindPathPoint"), &Z_Registration_Info_UClass_UBTTask_FindPathPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_FindPathPoint), 3942639458U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_BTTask_FindPathPoint_h_240246084(TEXT("/Script/ProjectWorkRedHogFp"),
	Z_CompiledInDeferFile_FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_BTTask_FindPathPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_BTTask_FindPathPoint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
