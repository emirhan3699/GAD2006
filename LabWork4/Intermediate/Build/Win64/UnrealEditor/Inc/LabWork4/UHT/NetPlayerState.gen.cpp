// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LabWork4/Private/NetPlayerState.h"
#include "LabWork4/Private/NetGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetPlayerState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
LABWORK4_API UClass* Z_Construct_UClass_ANetPlayerState();
LABWORK4_API UClass* Z_Construct_UClass_ANetPlayerState_NoRegister();
LABWORK4_API UScriptStruct* Z_Construct_UScriptStruct_FSPlayerInfo();
UPackage* Z_Construct_UPackage__Script_LabWork4();
// End Cross Module References

// Begin Class ANetPlayerState Function OnRep_PlayerInfo
struct Z_Construct_UFunction_ANetPlayerState_OnRep_PlayerInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NetPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetPlayerState_OnRep_PlayerInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetPlayerState, nullptr, "OnRep_PlayerInfo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetPlayerState_OnRep_PlayerInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetPlayerState_OnRep_PlayerInfo_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANetPlayerState_OnRep_PlayerInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetPlayerState_OnRep_PlayerInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANetPlayerState::execOnRep_PlayerInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_PlayerInfo();
	P_NATIVE_END;
}
// End Class ANetPlayerState Function OnRep_PlayerInfo

// Begin Class ANetPlayerState
void ANetPlayerState::StaticRegisterNativesANetPlayerState()
{
	UClass* Class = ANetPlayerState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_PlayerInfo", &ANetPlayerState::execOnRep_PlayerInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANetPlayerState);
UClass* Z_Construct_UClass_ANetPlayerState_NoRegister()
{
	return ANetPlayerState::StaticClass();
}
struct Z_Construct_UClass_ANetPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "NetPlayerState.h" },
		{ "ModuleRelativePath", "Private/NetPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "NetPlayerState" },
		{ "ModuleRelativePath", "Private/NetPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[] = {
		{ "Category", "NetPlayerState" },
		{ "ModuleRelativePath", "Private/NetPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANetPlayerState_OnRep_PlayerInfo, "OnRep_PlayerInfo" }, // 3271746077
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANetPlayerState_Statics::NewProp_Data = { "Data", "OnRep_PlayerInfo", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetPlayerState, Data), Z_Construct_UScriptStruct_FSPlayerInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3000031940
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANetPlayerState_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetPlayerState, PlayerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerIndex_MetaData), NewProp_PlayerIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANetPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetPlayerState_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetPlayerState_Statics::NewProp_PlayerIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANetPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_LabWork4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANetPlayerState_Statics::ClassParams = {
	&ANetPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANetPlayerState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANetPlayerState_Statics::PropPointers),
	0,
	0x008002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ANetPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANetPlayerState()
{
	if (!Z_Registration_Info_UClass_ANetPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANetPlayerState.OuterSingleton, Z_Construct_UClass_ANetPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANetPlayerState.OuterSingleton;
}
template<> LABWORK4_API UClass* StaticClass<ANetPlayerState>()
{
	return ANetPlayerState::StaticClass();
}
void ANetPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Data(TEXT("Data"));
	static const FName Name_PlayerIndex(TEXT("PlayerIndex"));
	const bool bIsValid = true
		&& Name_Data == ClassReps[(int32)ENetFields_Private::Data].Property->GetFName()
		&& Name_PlayerIndex == ClassReps[(int32)ENetFields_Private::PlayerIndex].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ANetPlayerState"));
}
ANetPlayerState::ANetPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANetPlayerState);
ANetPlayerState::~ANetPlayerState() {}
// End Class ANetPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_EnesAkar_Desktop_LabWork4_Source_LabWork4_Private_NetPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANetPlayerState, ANetPlayerState::StaticClass, TEXT("ANetPlayerState"), &Z_Registration_Info_UClass_ANetPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANetPlayerState), 1364403305U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_EnesAkar_Desktop_LabWork4_Source_LabWork4_Private_NetPlayerState_h_2780411122(TEXT("/Script/LabWork4"),
	Z_CompiledInDeferFile_FID_Users_EnesAkar_Desktop_LabWork4_Source_LabWork4_Private_NetPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_EnesAkar_Desktop_LabWork4_Source_LabWork4_Private_NetPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS