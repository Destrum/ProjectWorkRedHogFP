// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectWorkRedHogFp/Public/NPC/BTTask_ChasePlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_ChasePlayer() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
PROJECTWORKREDHOGFP_API UClass* Z_Construct_UClass_UBTTask_ChasePlayer();
PROJECTWORKREDHOGFP_API UClass* Z_Construct_UClass_UBTTask_ChasePlayer_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectWorkRedHogFp();
// End Cross Module References

// Begin Class UBTTask_ChasePlayer
void UBTTask_ChasePlayer::StaticRegisterNativesUBTTask_ChasePlayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_ChasePlayer);
UClass* Z_Construct_UClass_UBTTask_ChasePlayer_NoRegister()
{
	return UBTTask_ChasePlayer::StaticClass();
}
struct Z_Construct_UClass_UBTTask_ChasePlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "NPC/BTTask_ChasePlayer.h" },
		{ "ModuleRelativePath", "Public/NPC/BTTask_ChasePlayer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_ChasePlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTTask_ChasePlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectWorkRedHogFp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChasePlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_ChasePlayer_Statics::ClassParams = {
	&UBTTask_ChasePlayer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChasePlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_ChasePlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_ChasePlayer()
{
	if (!Z_Registration_Info_UClass_UBTTask_ChasePlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_ChasePlayer.OuterSingleton, Z_Construct_UClass_UBTTask_ChasePlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_ChasePlayer.OuterSingleton;
}
template<> PROJECTWORKREDHOGFP_API UClass* StaticClass<UBTTask_ChasePlayer>()
{
	return UBTTask_ChasePlayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_ChasePlayer);
UBTTask_ChasePlayer::~UBTTask_ChasePlayer() {}
// End Class UBTTask_ChasePlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_BTTask_ChasePlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_ChasePlayer, UBTTask_ChasePlayer::StaticClass, TEXT("UBTTask_ChasePlayer"), &Z_Registration_Info_UClass_UBTTask_ChasePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_ChasePlayer), 812119257U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_BTTask_ChasePlayer_h_3578103686(TEXT("/Script/ProjectWorkRedHogFp"),
	Z_CompiledInDeferFile_FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_BTTask_ChasePlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_BTTask_ChasePlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
