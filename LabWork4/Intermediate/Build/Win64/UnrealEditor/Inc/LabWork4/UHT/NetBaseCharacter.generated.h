// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NetBaseCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBodyPart : uint8;
struct FSPlayerInfo;
#ifdef LABWORK4_NetBaseCharacter_generated_h
#error "NetBaseCharacter.generated.h already included, missing '#pragma once' in NetBaseCharacter.h"
#endif
#define LABWORK4_NetBaseCharacter_generated_h

#define FID_Users_EnesAkar_Desktop_LabWork4_Source_LabWork4_Private_NetBaseCharacter_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSMeshAssetList_Statics; \
	LABWORK4_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> LABWORK4_API UScriptStruct* StaticStruct<struct FSMeshAssetList>();

#define FID_Users_EnesAkar_Desktop_LabWork4_Source_LabWork4_Private_NetBaseCharacter_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SubmitPlayerInfoToServer_Implementation(FSPlayerInfo Info); \
	DECLARE_FUNCTION(execCheckPlayerInfo); \
	DECLARE_FUNCTION(execCheckPlayerState); \
	DECLARE_FUNCTION(execSubmitPlayerInfoToServer); \
	DECLARE_FUNCTION(execChangeBodyPart); \
	DECLARE_FUNCTION(execGetCustomizationData);


#define FID_Users_EnesAkar_Desktop_LabWork4_Source_LabWork4_Private_NetBaseCharacter_h_43_CALLBACK_WRAPPERS
#define FID_Users_EnesAkar_Desktop_LabWork4_Source_LabWork4_Private_NetBaseCharacter_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANetBaseCharacter(); \
	friend struct Z_Construct_UClass_ANetBaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ANetBaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LabWork4"), NO_API) \
	DECLARE_SERIALIZER(ANetBaseCharacter)


#define FID_Users_EnesAkar_Desktop_LabWork4_Source_LabWork4_Private_NetBaseCharacter_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANetBaseCharacter(ANetBaseCharacter&&); \
	ANetBaseCharacter(const ANetBaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetBaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetBaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANetBaseCharacter) \
	NO_API virtual ~ANetBaseCharacter();


#define FID_Users_EnesAkar_Desktop_LabWork4_Source_LabWork4_Private_NetBaseCharacter_h_40_PROLOG
#define FID_Users_EnesAkar_Desktop_LabWork4_Source_LabWork4_Private_NetBaseCharacter_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_EnesAkar_Desktop_LabWork4_Source_LabWork4_Private_NetBaseCharacter_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_EnesAkar_Desktop_LabWork4_Source_LabWork4_Private_NetBaseCharacter_h_43_CALLBACK_WRAPPERS \
	FID_Users_EnesAkar_Desktop_LabWork4_Source_LabWork4_Private_NetBaseCharacter_h_43_INCLASS_NO_PURE_DECLS \
	FID_Users_EnesAkar_Desktop_LabWork4_Source_LabWork4_Private_NetBaseCharacter_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LABWORK4_API UClass* StaticClass<class ANetBaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_EnesAkar_Desktop_LabWork4_Source_LabWork4_Private_NetBaseCharacter_h


#define FOREACH_ENUM_EBODYPART(op) \
	op(EBodyPart::BP_Face) \
	op(EBodyPart::BP_Hair) \
	op(EBodyPart::BP_Chest) \
	op(EBodyPart::BP_Hands) \
	op(EBodyPart::BP_Legs) \
	op(EBodyPart::BP_Beard) \
	op(EBodyPart::BP_EyeBrows) \
	op(EBodyPart::BP_BodyType) \
	op(EBodyPart::BP_COUNT) 

enum class EBodyPart : uint8;
template<> struct TIsUEnumClass<EBodyPart> { enum { Value = true }; };
template<> LABWORK4_API UEnum* StaticEnum<EBodyPart>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
