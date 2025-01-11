// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NetPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LABWORK4_NetPlayerState_generated_h
#error "NetPlayerState.generated.h already included, missing '#pragma once' in NetPlayerState.h"
#endif
#define LABWORK4_NetPlayerState_generated_h

#define FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetPlayerState_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_PlayerInfo);


#define FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetPlayerState_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANetPlayerState(); \
	friend struct Z_Construct_UClass_ANetPlayerState_Statics; \
public: \
	DECLARE_CLASS(ANetPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LabWork4"), NO_API) \
	DECLARE_SERIALIZER(ANetPlayerState) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Data=NETFIELD_REP_START, \
		PlayerIndex, \
		NETFIELD_REP_END=PlayerIndex	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetPlayerState_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANetPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANetPlayerState(ANetPlayerState&&); \
	ANetPlayerState(const ANetPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANetPlayerState) \
	NO_API virtual ~ANetPlayerState();


#define FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetPlayerState_h_13_PROLOG
#define FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetPlayerState_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetPlayerState_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetPlayerState_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetPlayerState_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LABWORK4_API UClass* StaticClass<class ANetPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
