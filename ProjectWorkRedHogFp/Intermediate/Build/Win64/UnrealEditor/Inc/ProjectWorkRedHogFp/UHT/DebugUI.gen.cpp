// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectWorkRedHogFp/Public/Player/DebugUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugUI() {}

// Begin Cross Module References
PROJECTWORKREDHOGFP_API UClass* Z_Construct_UClass_UDebugUI();
PROJECTWORKREDHOGFP_API UClass* Z_Construct_UClass_UDebugUI_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ProjectWorkRedHogFp();
// End Cross Module References

// Begin Class UDebugUI Function UIUpdate
struct Z_Construct_UFunction_UDebugUI_UIUpdate_Statics
{
	struct DebugUI_eventUIUpdate_Parms
	{
		bool CanSeePlayer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/DebugUI.h" },
	};
#endif // WITH_METADATA
	static void NewProp_CanSeePlayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanSeePlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDebugUI_UIUpdate_Statics::NewProp_CanSeePlayer_SetBit(void* Obj)
{
	((DebugUI_eventUIUpdate_Parms*)Obj)->CanSeePlayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDebugUI_UIUpdate_Statics::NewProp_CanSeePlayer = { "CanSeePlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DebugUI_eventUIUpdate_Parms), &Z_Construct_UFunction_UDebugUI_UIUpdate_Statics::NewProp_CanSeePlayer_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDebugUI_UIUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDebugUI_UIUpdate_Statics::NewProp_CanSeePlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDebugUI_UIUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDebugUI_UIUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDebugUI, nullptr, "UIUpdate", nullptr, nullptr, Z_Construct_UFunction_UDebugUI_UIUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDebugUI_UIUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDebugUI_UIUpdate_Statics::DebugUI_eventUIUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDebugUI_UIUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDebugUI_UIUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDebugUI_UIUpdate_Statics::DebugUI_eventUIUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDebugUI_UIUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDebugUI_UIUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDebugUI::execUIUpdate)
{
	P_GET_UBOOL(Z_Param_CanSeePlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UIUpdate(Z_Param_CanSeePlayer);
	P_NATIVE_END;
}
// End Class UDebugUI Function UIUpdate

// Begin Class UDebugUI
void UDebugUI::StaticRegisterNativesUDebugUI()
{
	UClass* Class = UDebugUI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UIUpdate", &UDebugUI::execUIUpdate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDebugUI);
UClass* Z_Construct_UClass_UDebugUI_NoRegister()
{
	return UDebugUI::StaticClass();
}
struct Z_Construct_UClass_UDebugUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Player/DebugUI.h" },
		{ "ModuleRelativePath", "Public/Player/DebugUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DebugUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/DebugUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DebugText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDebugUI_UIUpdate, "UIUpdate" }, // 2965148389
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDebugUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDebugUI_Statics::NewProp_DebugText = { "DebugText", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDebugUI, DebugText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugText_MetaData), NewProp_DebugText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDebugUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugUI_Statics::NewProp_DebugText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDebugUI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDebugUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectWorkRedHogFp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDebugUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDebugUI_Statics::ClassParams = {
	&UDebugUI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDebugUI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDebugUI_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDebugUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UDebugUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDebugUI()
{
	if (!Z_Registration_Info_UClass_UDebugUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDebugUI.OuterSingleton, Z_Construct_UClass_UDebugUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDebugUI.OuterSingleton;
}
template<> PROJECTWORKREDHOGFP_API UClass* StaticClass<UDebugUI>()
{
	return UDebugUI::StaticClass();
}
UDebugUI::UDebugUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDebugUI);
UDebugUI::~UDebugUI() {}
// End Class UDebugUI

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_Player_DebugUI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDebugUI, UDebugUI::StaticClass, TEXT("UDebugUI"), &Z_Registration_Info_UClass_UDebugUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDebugUI), 530931348U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_Player_DebugUI_h_1035274225(TEXT("/Script/ProjectWorkRedHogFp"),
	Z_CompiledInDeferFile_FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_Player_DebugUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_Player_DebugUI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
