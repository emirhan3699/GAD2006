// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NetGameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSPlayerInfo;
#ifdef LABWORK4_NetGameInstance_generated_h
#error "NetGameInstance.generated.h already included, missing '#pragma once' in NetGameInstance.h"
#endif
#define LABWORK4_NetGameInstance_generated_h

#define FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetGameInstance_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSPlayerInfo_Statics; \
	LABWORK4_API static class UScriptStruct* StaticStruct();


template<> LABWORK4_API UScriptStruct* StaticStruct<struct FSPlayerInfo>();

#define FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetGameInstance_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execjoin); \
	DECLARE_FUNCTION(exechost);


#define FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetGameInstance_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetGameInstance(); \
	friend struct Z_Construct_UClass_UNetGameInstance_Statics; \
public: \
	DECLARE_CLASS(UNetGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LabWork4"), NO_API) \
	DECLARE_SERIALIZER(UNetGameInstance)


#define FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetGameInstance_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNetGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNetGameInstance(UNetGameInstance&&); \
	UNetGameInstance(const UNetGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetGameInstance) \
	NO_API virtual ~UNetGameInstance();


#define FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetGameInstance_h_43_PROLOG
#define FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetGameInstance_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetGameInstance_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetGameInstance_h_46_INCLASS_NO_PURE_DECLS \
	FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetGameInstance_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LABWORK4_API UClass* StaticClass<class UNetGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetGameInstance_h


#define FOREACH_ENUM_EPLAYERTEAM(op) \
	op(EPlayerTeam::TEAM_Unknown) \
	op(EPlayerTeam::TEAM_Blue) \
	op(EPlayerTeam::TEAM_Red) 

enum class EPlayerTeam : uint8;
template<> struct TIsUEnumClass<EPlayerTeam> { enum { Value = true }; };
template<> LABWORK4_API UEnum* StaticEnum<EPlayerTeam>();

#define FOREACH_ENUM_EGAMERESULTS(op) \
	op(EGameResults::RESULT_Undefined) \
	op(EGameResults::RESULT_Lost) \
	op(EGameResults::RESULT_Won) 

enum class EGameResults : uint8;
template<> struct TIsUEnumClass<EGameResults> { enum { Value = true }; };
template<> LABWORK4_API UEnum* StaticEnum<EGameResults>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
