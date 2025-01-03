// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LabWork4/Private/NetGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetGameInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
LABWORK4_API UClass* Z_Construct_UClass_UNetGameInstance();
LABWORK4_API UClass* Z_Construct_UClass_UNetGameInstance_NoRegister();
LABWORK4_API UEnum* Z_Construct_UEnum_LabWork4_EGameResults();
LABWORK4_API UEnum* Z_Construct_UEnum_LabWork4_EPlayerTeam();
LABWORK4_API UScriptStruct* Z_Construct_UScriptStruct_FSPlayerInfo();
UPackage* Z_Construct_UPackage__Script_LabWork4();
// End Cross Module References

// Begin Enum EPlayerTeam
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayerTeam;
static UEnum* EPlayerTeam_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPlayerTeam.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPlayerTeam.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LabWork4_EPlayerTeam, (UObject*)Z_Construct_UPackage__Script_LabWork4(), TEXT("EPlayerTeam"));
	}
	return Z_Registration_Info_UEnum_EPlayerTeam.OuterSingleton;
}
template<> LABWORK4_API UEnum* StaticEnum<EPlayerTeam>()
{
	return EPlayerTeam_StaticEnum();
}
struct Z_Construct_UEnum_LabWork4_EPlayerTeam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/NetGameInstance.h" },
		{ "TEAM_Blue.Name", "EPlayerTeam::TEAM_Blue" },
		{ "TEAM_Red.Name", "EPlayerTeam::TEAM_Red" },
		{ "TEAM_Unknown.Name", "EPlayerTeam::TEAM_Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPlayerTeam::TEAM_Unknown", (int64)EPlayerTeam::TEAM_Unknown },
		{ "EPlayerTeam::TEAM_Blue", (int64)EPlayerTeam::TEAM_Blue },
		{ "EPlayerTeam::TEAM_Red", (int64)EPlayerTeam::TEAM_Red },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LabWork4_EPlayerTeam_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LabWork4,
	nullptr,
	"EPlayerTeam",
	"EPlayerTeam",
	Z_Construct_UEnum_LabWork4_EPlayerTeam_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LabWork4_EPlayerTeam_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LabWork4_EPlayerTeam_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LabWork4_EPlayerTeam_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LabWork4_EPlayerTeam()
{
	if (!Z_Registration_Info_UEnum_EPlayerTeam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayerTeam.InnerSingleton, Z_Construct_UEnum_LabWork4_EPlayerTeam_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPlayerTeam.InnerSingleton;
}
// End Enum EPlayerTeam

// Begin Enum EGameResults
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameResults;
static UEnum* EGameResults_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameResults.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameResults.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LabWork4_EGameResults, (UObject*)Z_Construct_UPackage__Script_LabWork4(), TEXT("EGameResults"));
	}
	return Z_Registration_Info_UEnum_EGameResults.OuterSingleton;
}
template<> LABWORK4_API UEnum* StaticEnum<EGameResults>()
{
	return EGameResults_StaticEnum();
}
struct Z_Construct_UEnum_LabWork4_EGameResults_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/NetGameInstance.h" },
		{ "RESULT_Lost.Name", "EGameResults::RESULT_Lost" },
		{ "RESULT_Undefined.Name", "EGameResults::RESULT_Undefined" },
		{ "RESULT_Won.Name", "EGameResults::RESULT_Won" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameResults::RESULT_Undefined", (int64)EGameResults::RESULT_Undefined },
		{ "EGameResults::RESULT_Lost", (int64)EGameResults::RESULT_Lost },
		{ "EGameResults::RESULT_Won", (int64)EGameResults::RESULT_Won },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LabWork4_EGameResults_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LabWork4,
	nullptr,
	"EGameResults",
	"EGameResults",
	Z_Construct_UEnum_LabWork4_EGameResults_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LabWork4_EGameResults_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LabWork4_EGameResults_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LabWork4_EGameResults_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LabWork4_EGameResults()
{
	if (!Z_Registration_Info_UEnum_EGameResults.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameResults.InnerSingleton, Z_Construct_UEnum_LabWork4_EGameResults_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameResults.InnerSingleton;
}
// End Enum EGameResults

// Begin ScriptStruct FSPlayerInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SPlayerInfo;
class UScriptStruct* FSPlayerInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SPlayerInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SPlayerInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSPlayerInfo, (UObject*)Z_Construct_UPackage__Script_LabWork4(), TEXT("SPlayerInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SPlayerInfo.OuterSingleton;
}
template<> LABWORK4_API UScriptStruct* StaticStruct<FSPlayerInfo>()
{
	return FSPlayerInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSPlayerInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/NetGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Nickname_MetaData[] = {
		{ "Category", "SPlayerInfo" },
		{ "ModuleRelativePath", "Private/NetGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomizationData_MetaData[] = {
		{ "Category", "SPlayerInfo" },
		{ "ModuleRelativePath", "Private/NetGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamID_MetaData[] = {
		{ "Category", "SPlayerInfo" },
		{ "ModuleRelativePath", "Private/NetGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Nickname;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CustomizationData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TeamID_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TeamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSPlayerInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSPlayerInfo_Statics::NewProp_Nickname = { "Nickname", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSPlayerInfo, Nickname), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Nickname_MetaData), NewProp_Nickname_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSPlayerInfo_Statics::NewProp_CustomizationData = { "CustomizationData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSPlayerInfo, CustomizationData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomizationData_MetaData), NewProp_CustomizationData_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSPlayerInfo_Statics::NewProp_TeamID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSPlayerInfo_Statics::NewProp_TeamID = { "TeamID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSPlayerInfo, TeamID), Z_Construct_UEnum_LabWork4_EPlayerTeam, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamID_MetaData), NewProp_TeamID_MetaData) }; // 886290885
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSPlayerInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSPlayerInfo_Statics::NewProp_Nickname,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSPlayerInfo_Statics::NewProp_CustomizationData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSPlayerInfo_Statics::NewProp_TeamID_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSPlayerInfo_Statics::NewProp_TeamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSPlayerInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSPlayerInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LabWork4,
	nullptr,
	&NewStructOps,
	"SPlayerInfo",
	Z_Construct_UScriptStruct_FSPlayerInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSPlayerInfo_Statics::PropPointers),
	sizeof(FSPlayerInfo),
	alignof(FSPlayerInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSPlayerInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSPlayerInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSPlayerInfo()
{
	if (!Z_Registration_Info_UScriptStruct_SPlayerInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SPlayerInfo.InnerSingleton, Z_Construct_UScriptStruct_FSPlayerInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SPlayerInfo.InnerSingleton;
}
// End ScriptStruct FSPlayerInfo

// Begin Class UNetGameInstance Function host
struct Z_Construct_UFunction_UNetGameInstance_host_Statics
{
	struct NetGameInstance_eventhost_Parms
	{
		FString MapName;
		FSPlayerInfo PlayerInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NetGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MapName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNetGameInstance_host_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetGameInstance_eventhost_Parms, MapName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNetGameInstance_host_Statics::NewProp_PlayerInfo = { "PlayerInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetGameInstance_eventhost_Parms, PlayerInfo), Z_Construct_UScriptStruct_FSPlayerInfo, METADATA_PARAMS(0, nullptr) }; // 3000031940
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetGameInstance_host_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetGameInstance_host_Statics::NewProp_MapName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetGameInstance_host_Statics::NewProp_PlayerInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetGameInstance_host_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetGameInstance_host_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetGameInstance, nullptr, "host", nullptr, nullptr, Z_Construct_UFunction_UNetGameInstance_host_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetGameInstance_host_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNetGameInstance_host_Statics::NetGameInstance_eventhost_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetGameInstance_host_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNetGameInstance_host_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNetGameInstance_host_Statics::NetGameInstance_eventhost_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNetGameInstance_host()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNetGameInstance_host_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNetGameInstance::exechost)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MapName);
	P_GET_STRUCT(FSPlayerInfo,Z_Param_PlayerInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->host(Z_Param_MapName,Z_Param_PlayerInfo);
	P_NATIVE_END;
}
// End Class UNetGameInstance Function host

// Begin Class UNetGameInstance Function join
struct Z_Construct_UFunction_UNetGameInstance_join_Statics
{
	struct NetGameInstance_eventjoin_Parms
	{
		FString Address;
		FSPlayerInfo PlayerInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NetGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Address;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNetGameInstance_join_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetGameInstance_eventjoin_Parms, Address), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNetGameInstance_join_Statics::NewProp_PlayerInfo = { "PlayerInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetGameInstance_eventjoin_Parms, PlayerInfo), Z_Construct_UScriptStruct_FSPlayerInfo, METADATA_PARAMS(0, nullptr) }; // 3000031940
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetGameInstance_join_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetGameInstance_join_Statics::NewProp_Address,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetGameInstance_join_Statics::NewProp_PlayerInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetGameInstance_join_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetGameInstance_join_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetGameInstance, nullptr, "join", nullptr, nullptr, Z_Construct_UFunction_UNetGameInstance_join_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetGameInstance_join_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNetGameInstance_join_Statics::NetGameInstance_eventjoin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetGameInstance_join_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNetGameInstance_join_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNetGameInstance_join_Statics::NetGameInstance_eventjoin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNetGameInstance_join()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNetGameInstance_join_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNetGameInstance::execjoin)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Address);
	P_GET_STRUCT(FSPlayerInfo,Z_Param_PlayerInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->join(Z_Param_Address,Z_Param_PlayerInfo);
	P_NATIVE_END;
}
// End Class UNetGameInstance Function join

// Begin Class UNetGameInstance
void UNetGameInstance::StaticRegisterNativesUNetGameInstance()
{
	UClass* Class = UNetGameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "host", &UNetGameInstance::exechost },
		{ "join", &UNetGameInstance::execjoin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetGameInstance);
UClass* Z_Construct_UClass_UNetGameInstance_NoRegister()
{
	return UNetGameInstance::StaticClass();
}
struct Z_Construct_UClass_UNetGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "NetGameInstance.h" },
		{ "ModuleRelativePath", "Private/NetGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInfo_MetaData[] = {
		{ "Category", "NetGameInstance" },
		{ "ModuleRelativePath", "Private/NetGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNetGameInstance_host, "host" }, // 156205552
		{ &Z_Construct_UFunction_UNetGameInstance_join, "join" }, // 3124072343
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetGameInstance_Statics::NewProp_PlayerInfo = { "PlayerInfo", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetGameInstance, PlayerInfo), Z_Construct_UScriptStruct_FSPlayerInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerInfo_MetaData), NewProp_PlayerInfo_MetaData) }; // 3000031940
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetGameInstance_Statics::NewProp_PlayerInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetGameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNetGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_LabWork4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetGameInstance_Statics::ClassParams = {
	&UNetGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNetGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNetGameInstance_Statics::PropPointers),
	0,
	0x008000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetGameInstance()
{
	if (!Z_Registration_Info_UClass_UNetGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetGameInstance.OuterSingleton, Z_Construct_UClass_UNetGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetGameInstance.OuterSingleton;
}
template<> LABWORK4_API UClass* StaticClass<UNetGameInstance>()
{
	return UNetGameInstance::StaticClass();
}
UNetGameInstance::UNetGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetGameInstance);
UNetGameInstance::~UNetGameInstance() {}
// End Class UNetGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_EnesAkar_Desktop_LabWork4_Source_LabWork4_Private_NetGameInstance_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPlayerTeam_StaticEnum, TEXT("EPlayerTeam"), &Z_Registration_Info_UEnum_EPlayerTeam, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 886290885U) },
		{ EGameResults_StaticEnum, TEXT("EGameResults"), &Z_Registration_Info_UEnum_EGameResults, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1380642663U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSPlayerInfo::StaticStruct, Z_Construct_UScriptStruct_FSPlayerInfo_Statics::NewStructOps, TEXT("SPlayerInfo"), &Z_Registration_Info_UScriptStruct_SPlayerInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSPlayerInfo), 3000031940U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNetGameInstance, UNetGameInstance::StaticClass, TEXT("UNetGameInstance"), &Z_Registration_Info_UClass_UNetGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetGameInstance), 833210600U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_EnesAkar_Desktop_LabWork4_Source_LabWork4_Private_NetGameInstance_h_1792879142(TEXT("/Script/LabWork4"),
	Z_CompiledInDeferFile_FID_Users_EnesAkar_Desktop_LabWork4_Source_LabWork4_Private_NetGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_EnesAkar_Desktop_LabWork4_Source_LabWork4_Private_NetGameInstance_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_EnesAkar_Desktop_LabWork4_Source_LabWork4_Private_NetGameInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_EnesAkar_Desktop_LabWork4_Source_LabWork4_Private_NetGameInstance_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_EnesAkar_Desktop_LabWork4_Source_LabWork4_Private_NetGameInstance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_EnesAkar_Desktop_LabWork4_Source_LabWork4_Private_NetGameInstance_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
