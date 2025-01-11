// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NetAvatar.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LABWORK4_NetAvatar_generated_h
#error "NetAvatar.generated.h already included, missing '#pragma once' in NetAvatar.h"
#endif
#define LABWORK4_NetAvatar_generated_h

#define FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetAvatar_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerStopRunning_Implementation(); \
	virtual void ServerStartRunning_Implementation(); \
	DECLARE_FUNCTION(execOnRep_UpdateMovementParams); \
	DECLARE_FUNCTION(execServerStopRunning); \
	DECLARE_FUNCTION(execServerStartRunning);


#define FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetAvatar_h_17_CALLBACK_WRAPPERS
#define FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetAvatar_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANetAvatar(); \
	friend struct Z_Construct_UClass_ANetAvatar_Statics; \
public: \
	DECLARE_CLASS(ANetAvatar, ANetBaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LabWork4"), NO_API) \
	DECLARE_SERIALIZER(ANetAvatar) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bHoldingRunKey=NETFIELD_REP_START, \
		NETFIELD_REP_END=bHoldingRunKey	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetAvatar_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANetAvatar(ANetAvatar&&); \
	ANetAvatar(const ANetAvatar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetAvatar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetAvatar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANetAvatar) \
	NO_API virtual ~ANetAvatar();


#define FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetAvatar_h_14_PROLOG
#define FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetAvatar_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetAvatar_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetAvatar_h_17_CALLBACK_WRAPPERS \
	FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetAvatar_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetAvatar_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LABWORK4_API UClass* StaticClass<class ANetAvatar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetAvatar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
