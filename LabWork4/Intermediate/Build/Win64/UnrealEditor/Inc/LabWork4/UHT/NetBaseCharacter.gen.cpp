// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LabWork4/Private/NetBaseCharacter.h"
#include "LabWork4/Private/NetGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetBaseCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
LABWORK4_API UClass* Z_Construct_UClass_ANetBaseCharacter();
LABWORK4_API UClass* Z_Construct_UClass_ANetBaseCharacter_NoRegister();
LABWORK4_API UEnum* Z_Construct_UEnum_LabWork4_EBodyPart();
LABWORK4_API UScriptStruct* Z_Construct_UScriptStruct_FSMeshAssetList();
LABWORK4_API UScriptStruct* Z_Construct_UScriptStruct_FSPlayerInfo();
UPackage* Z_Construct_UPackage__Script_LabWork4();
// End Cross Module References

// Begin Enum EBodyPart
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBodyPart;
static UEnum* EBodyPart_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBodyPart.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBodyPart.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LabWork4_EBodyPart, (UObject*)Z_Construct_UPackage__Script_LabWork4(), TEXT("EBodyPart"));
	}
	return Z_Registration_Info_UEnum_EBodyPart.OuterSingleton;
}
template<> LABWORK4_API UEnum* StaticEnum<EBodyPart>()
{
	return EBodyPart_StaticEnum();
}
struct Z_Construct_UEnum_LabWork4_EBodyPart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BP_Beard.Name", "EBodyPart::BP_Beard" },
		{ "BP_BodyType.Name", "EBodyPart::BP_BodyType" },
		{ "BP_Chest.Name", "EBodyPart::BP_Chest" },
		{ "BP_COUNT.Name", "EBodyPart::BP_COUNT" },
		{ "BP_EyeBrows.Name", "EBodyPart::BP_EyeBrows" },
		{ "BP_Face.Name", "EBodyPart::BP_Face" },
		{ "BP_Hair.Name", "EBodyPart::BP_Hair" },
		{ "BP_Hands.Name", "EBodyPart::BP_Hands" },
		{ "BP_Legs.Name", "EBodyPart::BP_Legs" },
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBodyPart::BP_Face", (int64)EBodyPart::BP_Face },
		{ "EBodyPart::BP_Hair", (int64)EBodyPart::BP_Hair },
		{ "EBodyPart::BP_Chest", (int64)EBodyPart::BP_Chest },
		{ "EBodyPart::BP_Hands", (int64)EBodyPart::BP_Hands },
		{ "EBodyPart::BP_Legs", (int64)EBodyPart::BP_Legs },
		{ "EBodyPart::BP_Beard", (int64)EBodyPart::BP_Beard },
		{ "EBodyPart::BP_EyeBrows", (int64)EBodyPart::BP_EyeBrows },
		{ "EBodyPart::BP_BodyType", (int64)EBodyPart::BP_BodyType },
		{ "EBodyPart::BP_COUNT", (int64)EBodyPart::BP_COUNT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LabWork4_EBodyPart_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LabWork4,
	nullptr,
	"EBodyPart",
	"EBodyPart",
	Z_Construct_UEnum_LabWork4_EBodyPart_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LabWork4_EBodyPart_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LabWork4_EBodyPart_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LabWork4_EBodyPart_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LabWork4_EBodyPart()
{
	if (!Z_Registration_Info_UEnum_EBodyPart.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBodyPart.InnerSingleton, Z_Construct_UEnum_LabWork4_EBodyPart_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBodyPart.InnerSingleton;
}
// End Enum EBodyPart

// Begin ScriptStruct FSMeshAssetList
static_assert(std::is_polymorphic<FSMeshAssetList>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSMeshAssetList cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SMeshAssetList;
class UScriptStruct* FSMeshAssetList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SMeshAssetList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SMeshAssetList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMeshAssetList, (UObject*)Z_Construct_UPackage__Script_LabWork4(), TEXT("SMeshAssetList"));
	}
	return Z_Registration_Info_UScriptStruct_SMeshAssetList.OuterSingleton;
}
template<> LABWORK4_API UScriptStruct* StaticStruct<FSMeshAssetList>()
{
	return FSMeshAssetList::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSMeshAssetList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ListSkeletal_MetaData[] = {
		{ "Category", "SMeshAssetList" },
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ListStatic_MetaData[] = {
		{ "Category", "SMeshAssetList" },
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ListSkeletal_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ListSkeletal;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ListStatic_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ListStatic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMeshAssetList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSMeshAssetList_Statics::NewProp_ListSkeletal_Inner = { "ListSkeletal", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSMeshAssetList_Statics::NewProp_ListSkeletal = { "ListSkeletal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSMeshAssetList, ListSkeletal), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ListSkeletal_MetaData), NewProp_ListSkeletal_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSMeshAssetList_Statics::NewProp_ListStatic_Inner = { "ListStatic", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSMeshAssetList_Statics::NewProp_ListStatic = { "ListStatic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSMeshAssetList, ListStatic), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ListStatic_MetaData), NewProp_ListStatic_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMeshAssetList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMeshAssetList_Statics::NewProp_ListSkeletal_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMeshAssetList_Statics::NewProp_ListSkeletal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMeshAssetList_Statics::NewProp_ListStatic_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMeshAssetList_Statics::NewProp_ListStatic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMeshAssetList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMeshAssetList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LabWork4,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"SMeshAssetList",
	Z_Construct_UScriptStruct_FSMeshAssetList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMeshAssetList_Statics::PropPointers),
	sizeof(FSMeshAssetList),
	alignof(FSMeshAssetList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMeshAssetList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSMeshAssetList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSMeshAssetList()
{
	if (!Z_Registration_Info_UScriptStruct_SMeshAssetList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SMeshAssetList.InnerSingleton, Z_Construct_UScriptStruct_FSMeshAssetList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SMeshAssetList.InnerSingleton;
}
// End ScriptStruct FSMeshAssetList

// Begin Class ANetBaseCharacter Function ChangeBodyPart
struct Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics
{
	struct NetBaseCharacter_eventChangeBodyPart_Parms
	{
		EBodyPart index;
		int32 value;
		bool DirectSet;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_index_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_value;
	static void NewProp_DirectSet_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DirectSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics::NewProp_index_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetBaseCharacter_eventChangeBodyPart_Parms, index), Z_Construct_UEnum_LabWork4_EBodyPart, METADATA_PARAMS(0, nullptr) }; // 3801398634
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetBaseCharacter_eventChangeBodyPart_Parms, value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics::NewProp_DirectSet_SetBit(void* Obj)
{
	((NetBaseCharacter_eventChangeBodyPart_Parms*)Obj)->DirectSet = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics::NewProp_DirectSet = { "DirectSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NetBaseCharacter_eventChangeBodyPart_Parms), &Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics::NewProp_DirectSet_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics::NewProp_index_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics::NewProp_index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics::NewProp_value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics::NewProp_DirectSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetBaseCharacter, nullptr, "ChangeBodyPart", nullptr, nullptr, Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics::NetBaseCharacter_eventChangeBodyPart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics::NetBaseCharacter_eventChangeBodyPart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANetBaseCharacter::execChangeBodyPart)
{
	P_GET_ENUM(EBodyPart,Z_Param_index);
	P_GET_PROPERTY(FIntProperty,Z_Param_value);
	P_GET_UBOOL(Z_Param_DirectSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeBodyPart(EBodyPart(Z_Param_index),Z_Param_value,Z_Param_DirectSet);
	P_NATIVE_END;
}
// End Class ANetBaseCharacter Function ChangeBodyPart

// Begin Class ANetBaseCharacter Function CheckPlayerInfo
struct Z_Construct_UFunction_ANetBaseCharacter_CheckPlayerInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetBaseCharacter_CheckPlayerInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetBaseCharacter, nullptr, "CheckPlayerInfo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetBaseCharacter_CheckPlayerInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetBaseCharacter_CheckPlayerInfo_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANetBaseCharacter_CheckPlayerInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetBaseCharacter_CheckPlayerInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANetBaseCharacter::execCheckPlayerInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckPlayerInfo();
	P_NATIVE_END;
}
// End Class ANetBaseCharacter Function CheckPlayerInfo

// Begin Class ANetBaseCharacter Function CheckPlayerState
struct Z_Construct_UFunction_ANetBaseCharacter_CheckPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Timer for waiting PlayerState\n" },
#endif
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Timer for waiting PlayerState" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetBaseCharacter_CheckPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetBaseCharacter, nullptr, "CheckPlayerState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetBaseCharacter_CheckPlayerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetBaseCharacter_CheckPlayerState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANetBaseCharacter_CheckPlayerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetBaseCharacter_CheckPlayerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANetBaseCharacter::execCheckPlayerState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckPlayerState();
	P_NATIVE_END;
}
// End Class ANetBaseCharacter Function CheckPlayerState

// Begin Class ANetBaseCharacter Function GetCustomizationData
struct Z_Construct_UFunction_ANetBaseCharacter_GetCustomizationData_Statics
{
	struct NetBaseCharacter_eventGetCustomizationData_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANetBaseCharacter_GetCustomizationData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetBaseCharacter_eventGetCustomizationData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANetBaseCharacter_GetCustomizationData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetBaseCharacter_GetCustomizationData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetBaseCharacter_GetCustomizationData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetBaseCharacter_GetCustomizationData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetBaseCharacter, nullptr, "GetCustomizationData", nullptr, nullptr, Z_Construct_UFunction_ANetBaseCharacter_GetCustomizationData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetBaseCharacter_GetCustomizationData_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANetBaseCharacter_GetCustomizationData_Statics::NetBaseCharacter_eventGetCustomizationData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetBaseCharacter_GetCustomizationData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetBaseCharacter_GetCustomizationData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANetBaseCharacter_GetCustomizationData_Statics::NetBaseCharacter_eventGetCustomizationData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANetBaseCharacter_GetCustomizationData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetBaseCharacter_GetCustomizationData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANetBaseCharacter::execGetCustomizationData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetCustomizationData();
	P_NATIVE_END;
}
// End Class ANetBaseCharacter Function GetCustomizationData

// Begin Class ANetBaseCharacter Function OnPlayerInfoChanged
static FName NAME_ANetBaseCharacter_OnPlayerInfoChanged = FName(TEXT("OnPlayerInfoChanged"));
void ANetBaseCharacter::OnPlayerInfoChanged()
{
	ProcessEvent(FindFunctionChecked(NAME_ANetBaseCharacter_OnPlayerInfoChanged),NULL);
}
struct Z_Construct_UFunction_ANetBaseCharacter_OnPlayerInfoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetBaseCharacter_OnPlayerInfoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetBaseCharacter, nullptr, "OnPlayerInfoChanged", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetBaseCharacter_OnPlayerInfoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetBaseCharacter_OnPlayerInfoChanged_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANetBaseCharacter_OnPlayerInfoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetBaseCharacter_OnPlayerInfoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ANetBaseCharacter Function OnPlayerInfoChanged

// Begin Class ANetBaseCharacter Function SubmitPlayerInfoToServer
struct NetBaseCharacter_eventSubmitPlayerInfoToServer_Parms
{
	FSPlayerInfo Info;
};
static FName NAME_ANetBaseCharacter_SubmitPlayerInfoToServer = FName(TEXT("SubmitPlayerInfoToServer"));
void ANetBaseCharacter::SubmitPlayerInfoToServer(FSPlayerInfo Info)
{
	NetBaseCharacter_eventSubmitPlayerInfoToServer_Parms Parms;
	Parms.Info=Info;
	ProcessEvent(FindFunctionChecked(NAME_ANetBaseCharacter_SubmitPlayerInfoToServer),&Parms);
}
struct Z_Construct_UFunction_ANetBaseCharacter_SubmitPlayerInfoToServer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTION(BlueprintCallable)\n//void ChangeGender(bool isFemale);\n" },
#endif
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION(BlueprintCallable)\nvoid ChangeGender(bool isFemale);" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Info;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANetBaseCharacter_SubmitPlayerInfoToServer_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetBaseCharacter_eventSubmitPlayerInfoToServer_Parms, Info), Z_Construct_UScriptStruct_FSPlayerInfo, METADATA_PARAMS(0, nullptr) }; // 3000031940
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANetBaseCharacter_SubmitPlayerInfoToServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetBaseCharacter_SubmitPlayerInfoToServer_Statics::NewProp_Info,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetBaseCharacter_SubmitPlayerInfoToServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetBaseCharacter_SubmitPlayerInfoToServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetBaseCharacter, nullptr, "SubmitPlayerInfoToServer", nullptr, nullptr, Z_Construct_UFunction_ANetBaseCharacter_SubmitPlayerInfoToServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetBaseCharacter_SubmitPlayerInfoToServer_Statics::PropPointers), sizeof(NetBaseCharacter_eventSubmitPlayerInfoToServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetBaseCharacter_SubmitPlayerInfoToServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetBaseCharacter_SubmitPlayerInfoToServer_Statics::Function_MetaDataParams) };
static_assert(sizeof(NetBaseCharacter_eventSubmitPlayerInfoToServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANetBaseCharacter_SubmitPlayerInfoToServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetBaseCharacter_SubmitPlayerInfoToServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANetBaseCharacter::execSubmitPlayerInfoToServer)
{
	P_GET_STRUCT(FSPlayerInfo,Z_Param_Info);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SubmitPlayerInfoToServer_Implementation(Z_Param_Info);
	P_NATIVE_END;
}
// End Class ANetBaseCharacter Function SubmitPlayerInfoToServer

// Begin Class ANetBaseCharacter
void ANetBaseCharacter::StaticRegisterNativesANetBaseCharacter()
{
	UClass* Class = ANetBaseCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeBodyPart", &ANetBaseCharacter::execChangeBodyPart },
		{ "CheckPlayerInfo", &ANetBaseCharacter::execCheckPlayerInfo },
		{ "CheckPlayerState", &ANetBaseCharacter::execCheckPlayerState },
		{ "GetCustomizationData", &ANetBaseCharacter::execGetCustomizationData },
		{ "SubmitPlayerInfoToServer", &ANetBaseCharacter::execSubmitPlayerInfoToServer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANetBaseCharacter);
UClass* Z_Construct_UClass_ANetBaseCharacter_NoRegister()
{
	return ANetBaseCharacter::StaticClass();
}
struct Z_Construct_UClass_ANetBaseCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NetBaseCharacter.h" },
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartNickName_MetaData[] = {
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextRenderer_MetaData[] = {
		{ "Category", "NetBaseCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartFace_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartHair_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartBeard_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartEyeBrows_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartEyes_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartHands_MetaData[] = {
		{ "Category", "NetBaseCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartLegs_MetaData[] = {
		{ "Category", "NetBaseCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IpAdress_MetaData[] = {
		{ "Category", "NetBaseCharacter" },
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerNickName_MetaData[] = {
		{ "Category", "NetBaseCharacter" },
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_PartNickName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextRenderer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PartFace;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PartHair;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PartBeard;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PartEyeBrows;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PartEyes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PartHands;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PartLegs;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IpAdress;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerNickName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart, "ChangeBodyPart" }, // 3005169659
		{ &Z_Construct_UFunction_ANetBaseCharacter_CheckPlayerInfo, "CheckPlayerInfo" }, // 742796960
		{ &Z_Construct_UFunction_ANetBaseCharacter_CheckPlayerState, "CheckPlayerState" }, // 1213615315
		{ &Z_Construct_UFunction_ANetBaseCharacter_GetCustomizationData, "GetCustomizationData" }, // 2577626015
		{ &Z_Construct_UFunction_ANetBaseCharacter_OnPlayerInfoChanged, "OnPlayerInfoChanged" }, // 1174810100
		{ &Z_Construct_UFunction_ANetBaseCharacter_SubmitPlayerInfoToServer, "SubmitPlayerInfoToServer" }, // 2971918091
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetBaseCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ANetBaseCharacter_Statics::NewProp_PartNickName = { "PartNickName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetBaseCharacter, PartNickName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartNickName_MetaData), NewProp_PartNickName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetBaseCharacter_Statics::NewProp_TextRenderer = { "TextRenderer", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetBaseCharacter, TextRenderer), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextRenderer_MetaData), NewProp_TextRenderer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetBaseCharacter_Statics::NewProp_PartFace = { "PartFace", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetBaseCharacter, PartFace), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartFace_MetaData), NewProp_PartFace_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetBaseCharacter_Statics::NewProp_PartHair = { "PartHair", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetBaseCharacter, PartHair), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartHair_MetaData), NewProp_PartHair_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetBaseCharacter_Statics::NewProp_PartBeard = { "PartBeard", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetBaseCharacter, PartBeard), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartBeard_MetaData), NewProp_PartBeard_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetBaseCharacter_Statics::NewProp_PartEyeBrows = { "PartEyeBrows", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetBaseCharacter, PartEyeBrows), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartEyeBrows_MetaData), NewProp_PartEyeBrows_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetBaseCharacter_Statics::NewProp_PartEyes = { "PartEyes", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetBaseCharacter, PartEyes), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartEyes_MetaData), NewProp_PartEyes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetBaseCharacter_Statics::NewProp_PartHands = { "PartHands", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetBaseCharacter, PartHands), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartHands_MetaData), NewProp_PartHands_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetBaseCharacter_Statics::NewProp_PartLegs = { "PartLegs", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetBaseCharacter, PartLegs), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartLegs_MetaData), NewProp_PartLegs_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ANetBaseCharacter_Statics::NewProp_IpAdress = { "IpAdress", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetBaseCharacter, IpAdress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IpAdress_MetaData), NewProp_IpAdress_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ANetBaseCharacter_Statics::NewProp_PlayerNickName = { "PlayerNickName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetBaseCharacter, PlayerNickName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerNickName_MetaData), NewProp_PlayerNickName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANetBaseCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetBaseCharacter_Statics::NewProp_PartNickName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetBaseCharacter_Statics::NewProp_TextRenderer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetBaseCharacter_Statics::NewProp_PartFace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetBaseCharacter_Statics::NewProp_PartHair,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetBaseCharacter_Statics::NewProp_PartBeard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetBaseCharacter_Statics::NewProp_PartEyeBrows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetBaseCharacter_Statics::NewProp_PartEyes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetBaseCharacter_Statics::NewProp_PartHands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetBaseCharacter_Statics::NewProp_PartLegs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetBaseCharacter_Statics::NewProp_IpAdress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetBaseCharacter_Statics::NewProp_PlayerNickName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetBaseCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANetBaseCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_LabWork4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetBaseCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANetBaseCharacter_Statics::ClassParams = {
	&ANetBaseCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANetBaseCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANetBaseCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetBaseCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ANetBaseCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANetBaseCharacter()
{
	if (!Z_Registration_Info_UClass_ANetBaseCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANetBaseCharacter.OuterSingleton, Z_Construct_UClass_ANetBaseCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANetBaseCharacter.OuterSingleton;
}
template<> LABWORK4_API UClass* StaticClass<ANetBaseCharacter>()
{
	return ANetBaseCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANetBaseCharacter);
ANetBaseCharacter::~ANetBaseCharacter() {}
// End Class ANetBaseCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_EnesAkar_Desktop_LabWork4_Source_LabWork4_Private_NetBaseCharacter_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBodyPart_StaticEnum, TEXT("EBodyPart"), &Z_Registration_Info_UEnum_EBodyPart, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3801398634U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSMeshAssetList::StaticStruct, Z_Construct_UScriptStruct_FSMeshAssetList_Statics::NewStructOps, TEXT("SMeshAssetList"), &Z_Registration_Info_UScriptStruct_SMeshAssetList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSMeshAssetList), 3951247443U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANetBaseCharacter, ANetBaseCharacter::StaticClass, TEXT("ANetBaseCharacter"), &Z_Registration_Info_UClass_ANetBaseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANetBaseCharacter), 3939852819U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_EnesAkar_Desktop_LabWork4_Source_LabWork4_Private_NetBaseCharacter_h_1412293320(TEXT("/Script/LabWork4"),
	Z_CompiledInDeferFile_FID_Users_EnesAkar_Desktop_LabWork4_Source_LabWork4_Private_NetBaseCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_EnesAkar_Desktop_LabWork4_Source_LabWork4_Private_NetBaseCharacter_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_EnesAkar_Desktop_LabWork4_Source_LabWork4_Private_NetBaseCharacter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_EnesAkar_Desktop_LabWork4_Source_LabWork4_Private_NetBaseCharacter_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_EnesAkar_Desktop_LabWork4_Source_LabWork4_Private_NetBaseCharacter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_EnesAkar_Desktop_LabWork4_Source_LabWork4_Private_NetBaseCharacter_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
