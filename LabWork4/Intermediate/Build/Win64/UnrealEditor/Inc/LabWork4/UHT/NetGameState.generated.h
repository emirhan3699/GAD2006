// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NetGameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ANetPlayerState;
#ifdef LABWORK4_NetGameState_generated_h
#error "NetGameState.generated.h already included, missing '#pragma once' in NetGameState.h"
#endif
#define LABWORK4_NetGameState_generated_h

#define FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetGameState_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void StopTimer_Implementation(); \
	virtual void TriggerRestart_Implementation(); \
	DECLARE_FUNCTION(execOnRep_RemainingTime); \
	DECLARE_FUNCTION(execStopTimer); \
	DECLARE_FUNCTION(execStartTimer); \
	DECLARE_FUNCTION(execGetPlayerStateByIndex); \
	DECLARE_FUNCTION(execTriggerRestart); \
	DECLARE_FUNCTION(execOnRep_Winner);


#define FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetGameState_h_19_CALLBACK_WRAPPERS
#define FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetGameState_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANetGameState(); \
	friend struct Z_Construct_UClass_ANetGameState_Statics; \
public: \
	DECLARE_CLASS(ANetGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LabWork4"), NO_API) \
	DECLARE_SERIALIZER(ANetGameState) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WinningPlayer=NETFIELD_REP_START, \
		RemainingTime, \
		NETFIELD_REP_END=RemainingTime	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetGameState_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANetGameState(ANetGameState&&); \
	ANetGameState(const ANetGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANetGameState) \
	NO_API virtual ~ANetGameState();


#define FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetGameState_h_16_PROLOG
#define FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetGameState_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetGameState_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetGameState_h_19_CALLBACK_WRAPPERS \
	FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetGameState_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetGameState_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LABWORK4_API UClass* StaticClass<class ANetGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
