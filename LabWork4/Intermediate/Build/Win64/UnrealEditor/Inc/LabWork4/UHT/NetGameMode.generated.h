// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NetGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ANetAvatar;
#ifdef LABWORK4_NetGameMode_generated_h
#error "NetGameMode.generated.h already included, missing '#pragma once' in NetGameMode.h"
#endif
#define LABWORK4_NetGameMode_generated_h

#define FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetGameMode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void TimeOver_Implementation(); \
	DECLARE_FUNCTION(execEndGame); \
	DECLARE_FUNCTION(execSetWinner); \
	DECLARE_FUNCTION(execTimeOver); \
	DECLARE_FUNCTION(execAvatarsOverlapped);


#define FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetGameMode_h_16_CALLBACK_WRAPPERS
#define FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetGameMode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANetGameMode(); \
	friend struct Z_Construct_UClass_ANetGameMode_Statics; \
public: \
	DECLARE_CLASS(ANetGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/LabWork4"), NO_API) \
	DECLARE_SERIALIZER(ANetGameMode)


#define FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetGameMode_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANetGameMode(ANetGameMode&&); \
	ANetGameMode(const ANetGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANetGameMode) \
	NO_API virtual ~ANetGameMode();


#define FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetGameMode_h_13_PROLOG
#define FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetGameMode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetGameMode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetGameMode_h_16_CALLBACK_WRAPPERS \
	FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetGameMode_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetGameMode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LABWORK4_API UClass* StaticClass<class ANetGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
