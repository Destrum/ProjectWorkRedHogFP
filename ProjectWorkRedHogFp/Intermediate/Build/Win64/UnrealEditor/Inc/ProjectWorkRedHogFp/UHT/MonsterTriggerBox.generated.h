// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NPC/MonsterTriggerBox.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PROJECTWORKREDHOGFP_MonsterTriggerBox_generated_h
#error "MonsterTriggerBox.generated.h already included, missing '#pragma once' in MonsterTriggerBox.h"
#endif
#define PROJECTWORKREDHOGFP_MonsterTriggerBox_generated_h

#define FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_MonsterTriggerBox_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleEndOverlap); \
	DECLARE_FUNCTION(execHandleBeginOverlap);


#define FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_MonsterTriggerBox_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMonsterTriggerBox(); \
	friend struct Z_Construct_UClass_AMonsterTriggerBox_Statics; \
public: \
	DECLARE_CLASS(AMonsterTriggerBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectWorkRedHogFp"), NO_API) \
	DECLARE_SERIALIZER(AMonsterTriggerBox)


#define FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_MonsterTriggerBox_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMonsterTriggerBox(AMonsterTriggerBox&&); \
	AMonsterTriggerBox(const AMonsterTriggerBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonsterTriggerBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonsterTriggerBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMonsterTriggerBox) \
	NO_API virtual ~AMonsterTriggerBox();


#define FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_MonsterTriggerBox_h_11_PROLOG
#define FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_MonsterTriggerBox_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_MonsterTriggerBox_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_MonsterTriggerBox_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_MonsterTriggerBox_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTWORKREDHOGFP_API UClass* StaticClass<class AMonsterTriggerBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_MonsterTriggerBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
