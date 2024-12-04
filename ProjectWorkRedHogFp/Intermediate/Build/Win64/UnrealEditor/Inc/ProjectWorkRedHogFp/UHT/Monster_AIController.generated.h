// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NPC/Monster_AIController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FAIStimulus;
#ifdef PROJECTWORKREDHOGFP_Monster_AIController_generated_h
#error "Monster_AIController.generated.h already included, missing '#pragma once' in Monster_AIController.h"
#endif
#define PROJECTWORKREDHOGFP_Monster_AIController_generated_h

#define FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_Monster_AIController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnTargetDetected);


#define FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_Monster_AIController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMonster_AIController(); \
	friend struct Z_Construct_UClass_AMonster_AIController_Statics; \
public: \
	DECLARE_CLASS(AMonster_AIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectWorkRedHogFp"), NO_API) \
	DECLARE_SERIALIZER(AMonster_AIController)


#define FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_Monster_AIController_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMonster_AIController(AMonster_AIController&&); \
	AMonster_AIController(const AMonster_AIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonster_AIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonster_AIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMonster_AIController) \
	NO_API virtual ~AMonster_AIController();


#define FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_Monster_AIController_h_13_PROLOG
#define FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_Monster_AIController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_Monster_AIController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_Monster_AIController_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_Monster_AIController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTWORKREDHOGFP_API UClass* StaticClass<class AMonster_AIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Roberto_Desktop_ProjectWorkRedHogFP_ProjectWorkRedHogFp_Source_ProjectWorkRedHogFp_Public_NPC_Monster_AIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
