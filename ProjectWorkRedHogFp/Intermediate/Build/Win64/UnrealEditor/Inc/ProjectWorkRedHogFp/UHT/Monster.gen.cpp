// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectWorkRedHogFp/Public/NPC/Monster.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonster() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
PROJECTWORKREDHOGFP_API UClass* Z_Construct_UClass_AMonster();
PROJECTWORKREDHOGFP_API UClass* Z_Construct_UClass_AMonster_NoRegister();
PROJECTWORKREDHOGFP_API UClass* Z_Construct_UClass_APatrolPath_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectWorkRedHogFp();
// End Cross Module References

// Begin Class AMonster
void AMonster::StaticRegisterNativesAMonster()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMonster);
UClass* Z_Construct_UClass_AMonster_NoRegister()
{
	return AMonster::StaticClass();
}
struct Z_Construct_UClass_AMonster_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NPC/Monster.h" },
		{ "ModuleRelativePath", "Public/NPC/Monster.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tree_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/NPC/Monster.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatrolPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//crea la variabile BehaviorTree\n" },
#endif
		{ "ModuleRelativePath", "Public/NPC/Monster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "crea la variabile BehaviorTree" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Tree;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PatrolPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonster>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_Tree = { "Tree", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMonster, Tree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tree_MetaData), NewProp_Tree_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonster_Statics::NewProp_PatrolPath = { "PatrolPath", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMonster, PatrolPath), Z_Construct_UClass_APatrolPath_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatrolPath_MetaData), NewProp_PatrolPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMonster_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_Tree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Statics::NewProp_PatrolPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMonster_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectWorkRedHogFp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMonster_Statics::ClassParams = {
	&AMonster::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMonster_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Statics::Class_MetaDataParams), Z_Construct_UClass_AMonster_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMonster()
{
	if (!Z_Registration_Info_UClass_AMonster.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMonster.OuterSingleton, Z_Construct_UClass_AMonster_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMonster.OuterSingleton;
}
template<> PROJECTWORKREDHOGFP_API UClass* StaticClass<AMonster>()
{
	return AMonster::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMonster);
AMonster::~AMonster() {}
// End Class AMonster

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_Monster_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMonster, AMonster::StaticClass, TEXT("AMonster"), &Z_Registration_Info_UClass_AMonster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMonster), 3503933205U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_Monster_h_770063709(TEXT("/Script/ProjectWorkRedHogFp"),
	Z_CompiledInDeferFile_FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_Monster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_Monster_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
