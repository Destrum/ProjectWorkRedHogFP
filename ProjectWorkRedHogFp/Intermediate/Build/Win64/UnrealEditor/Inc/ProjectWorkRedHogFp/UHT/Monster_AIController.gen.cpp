// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectWorkRedHogFp/Public/NPC/Monster_AIController.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonster_AIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTWORKREDHOGFP_API UClass* Z_Construct_UClass_AMonster_AIController();
PROJECTWORKREDHOGFP_API UClass* Z_Construct_UClass_AMonster_AIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectWorkRedHogFp();
// End Cross Module References

// Begin Class AMonster_AIController Function OnTargetDetected
struct Z_Construct_UFunction_AMonster_AIController_OnTargetDetected_Statics
{
	struct Monster_AIController_eventOnTargetDetected_Parms
	{
		AActor* Actor;
		FAIStimulus Stimulus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NPC/Monster_AIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stimulus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stimulus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMonster_AIController_OnTargetDetected_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Monster_AIController_eventOnTargetDetected_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMonster_AIController_OnTargetDetected_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Monster_AIController_eventOnTargetDetected_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stimulus_MetaData), NewProp_Stimulus_MetaData) }; // 177100813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMonster_AIController_OnTargetDetected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMonster_AIController_OnTargetDetected_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMonster_AIController_OnTargetDetected_Statics::NewProp_Stimulus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMonster_AIController_OnTargetDetected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMonster_AIController_OnTargetDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMonster_AIController, nullptr, "OnTargetDetected", nullptr, nullptr, Z_Construct_UFunction_AMonster_AIController_OnTargetDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMonster_AIController_OnTargetDetected_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMonster_AIController_OnTargetDetected_Statics::Monster_AIController_eventOnTargetDetected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMonster_AIController_OnTargetDetected_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMonster_AIController_OnTargetDetected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMonster_AIController_OnTargetDetected_Statics::Monster_AIController_eventOnTargetDetected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMonster_AIController_OnTargetDetected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMonster_AIController_OnTargetDetected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMonster_AIController::execOnTargetDetected)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTargetDetected(Z_Param_Actor,Z_Param_Stimulus);
	P_NATIVE_END;
}
// End Class AMonster_AIController Function OnTargetDetected

// Begin Class AMonster_AIController
void AMonster_AIController::StaticRegisterNativesAMonster_AIController()
{
	UClass* Class = AMonster_AIController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnTargetDetected", &AMonster_AIController::execOnTargetDetected },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMonster_AIController);
UClass* Z_Construct_UClass_AMonster_AIController_NoRegister()
{
	return AMonster_AIController::StaticClass();
}
struct Z_Construct_UClass_AMonster_AIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "NPC/Monster_AIController.h" },
		{ "ModuleRelativePath", "Public/NPC/Monster_AIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SightRadiusVariable_MetaData[] = {
		{ "Category", "Monster_AIController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Constructor\n" },
#endif
		{ "ModuleRelativePath", "Public/NPC/Monster_AIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Constructor" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SightRadiusVariable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMonster_AIController_OnTargetDetected, "OnTargetDetected" }, // 2511736265
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonster_AIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonster_AIController_Statics::NewProp_SightRadiusVariable = { "SightRadiusVariable", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMonster_AIController, SightRadiusVariable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SightRadiusVariable_MetaData), NewProp_SightRadiusVariable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMonster_AIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_AIController_Statics::NewProp_SightRadiusVariable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_AIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMonster_AIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectWorkRedHogFp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_AIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMonster_AIController_Statics::ClassParams = {
	&AMonster_AIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMonster_AIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_AIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_AIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMonster_AIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMonster_AIController()
{
	if (!Z_Registration_Info_UClass_AMonster_AIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMonster_AIController.OuterSingleton, Z_Construct_UClass_AMonster_AIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMonster_AIController.OuterSingleton;
}
template<> PROJECTWORKREDHOGFP_API UClass* StaticClass<AMonster_AIController>()
{
	return AMonster_AIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMonster_AIController);
AMonster_AIController::~AMonster_AIController() {}
// End Class AMonster_AIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_Monster_AIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMonster_AIController, AMonster_AIController::StaticClass, TEXT("AMonster_AIController"), &Z_Registration_Info_UClass_AMonster_AIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMonster_AIController), 24140000U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_Monster_AIController_h_1189285099(TEXT("/Script/ProjectWorkRedHogFp"),
	Z_CompiledInDeferFile_FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_Monster_AIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_Monster_AIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
