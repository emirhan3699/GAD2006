// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LabWork4/Private/NetGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetGameState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
LABWORK4_API UClass* Z_Construct_UClass_ANetGameState();
LABWORK4_API UClass* Z_Construct_UClass_ANetGameState_NoRegister();
LABWORK4_API UClass* Z_Construct_UClass_ANetPlayerState_NoRegister();
UPackage* Z_Construct_UPackage__Script_LabWork4();
// End Cross Module References

// Begin Class ANetGameState Function GetPlayerStateByIndex
struct Z_Construct_UFunction_ANetGameState_GetPlayerStateByIndex_Statics
{
	struct NetGameState_eventGetPlayerStateByIndex_Parms
	{
		int32 PlayerIndex;
		ANetPlayerState* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NetGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANetGameState_GetPlayerStateByIndex_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetGameState_eventGetPlayerStateByIndex_Parms, PlayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANetGameState_GetPlayerStateByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetGameState_eventGetPlayerStateByIndex_Parms, ReturnValue), Z_Construct_UClass_ANetPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANetGameState_GetPlayerStateByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetGameState_GetPlayerStateByIndex_Statics::NewProp_PlayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetGameState_GetPlayerStateByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetGameState_GetPlayerStateByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetGameState_GetPlayerStateByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetGameState, nullptr, "GetPlayerStateByIndex", nullptr, nullptr, Z_Construct_UFunction_ANetGameState_GetPlayerStateByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetGameState_GetPlayerStateByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANetGameState_GetPlayerStateByIndex_Statics::NetGameState_eventGetPlayerStateByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetGameState_GetPlayerStateByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetGameState_GetPlayerStateByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANetGameState_GetPlayerStateByIndex_Statics::NetGameState_eventGetPlayerStateByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANetGameState_GetPlayerStateByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetGameState_GetPlayerStateByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANetGameState::execGetPlayerStateByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ANetPlayerState**)Z_Param__Result=P_THIS->GetPlayerStateByIndex(Z_Param_PlayerIndex);
	P_NATIVE_END;
}
// End Class ANetGameState Function GetPlayerStateByIndex

// Begin Class ANetGameState Function OnRep_RemainingTime
struct Z_Construct_UFunction_ANetGameState_OnRep_RemainingTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NetGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetGameState_OnRep_RemainingTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetGameState, nullptr, "OnRep_RemainingTime", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetGameState_OnRep_RemainingTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetGameState_OnRep_RemainingTime_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANetGameState_OnRep_RemainingTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetGameState_OnRep_RemainingTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANetGameState::execOnRep_RemainingTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_RemainingTime();
	P_NATIVE_END;
}
// End Class ANetGameState Function OnRep_RemainingTime

// Begin Class ANetGameState Function OnRep_Winner
struct Z_Construct_UFunction_ANetGameState_OnRep_Winner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NetGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetGameState_OnRep_Winner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetGameState, nullptr, "OnRep_Winner", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetGameState_OnRep_Winner_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetGameState_OnRep_Winner_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANetGameState_OnRep_Winner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetGameState_OnRep_Winner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANetGameState::execOnRep_Winner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Winner();
	P_NATIVE_END;
}
// End Class ANetGameState Function OnRep_Winner

// Begin Class ANetGameState Function OnRestart
static FName NAME_ANetGameState_OnRestart = FName(TEXT("OnRestart"));
void ANetGameState::OnRestart()
{
	ProcessEvent(FindFunctionChecked(NAME_ANetGameState_OnRestart),NULL);
}
struct Z_Construct_UFunction_ANetGameState_OnRestart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NetGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetGameState_OnRestart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetGameState, nullptr, "OnRestart", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetGameState_OnRestart_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetGameState_OnRestart_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANetGameState_OnRestart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetGameState_OnRestart_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ANetGameState Function OnRestart

// Begin Class ANetGameState Function OnVictory
static FName NAME_ANetGameState_OnVictory = FName(TEXT("OnVictory"));
void ANetGameState::OnVictory()
{
	ProcessEvent(FindFunctionChecked(NAME_ANetGameState_OnVictory),NULL);
}
struct Z_Construct_UFunction_ANetGameState_OnVictory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NetGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetGameState_OnVictory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetGameState, nullptr, "OnVictory", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetGameState_OnVictory_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetGameState_OnVictory_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANetGameState_OnVictory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetGameState_OnVictory_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ANetGameState Function OnVictory

// Begin Class ANetGameState Function StartTimer
struct Z_Construct_UFunction_ANetGameState_StartTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NetGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetGameState_StartTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetGameState, nullptr, "StartTimer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetGameState_StartTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetGameState_StartTimer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANetGameState_StartTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetGameState_StartTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANetGameState::execStartTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartTimer();
	P_NATIVE_END;
}
// End Class ANetGameState Function StartTimer

// Begin Class ANetGameState Function StopTimer
static FName NAME_ANetGameState_StopTimer = FName(TEXT("StopTimer"));
void ANetGameState::StopTimer()
{
	ProcessEvent(FindFunctionChecked(NAME_ANetGameState_StopTimer),NULL);
}
struct Z_Construct_UFunction_ANetGameState_StopTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NetGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetGameState_StopTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetGameState, nullptr, "StopTimer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetGameState_StopTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetGameState_StopTimer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANetGameState_StopTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetGameState_StopTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANetGameState::execStopTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopTimer_Implementation();
	P_NATIVE_END;
}
// End Class ANetGameState Function StopTimer

// Begin Class ANetGameState Function TriggerRestart
static FName NAME_ANetGameState_TriggerRestart = FName(TEXT("TriggerRestart"));
void ANetGameState::TriggerRestart()
{
	ProcessEvent(FindFunctionChecked(NAME_ANetGameState_TriggerRestart),NULL);
}
struct Z_Construct_UFunction_ANetGameState_TriggerRestart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NetGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetGameState_TriggerRestart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetGameState, nullptr, "TriggerRestart", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetGameState_TriggerRestart_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetGameState_TriggerRestart_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANetGameState_TriggerRestart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetGameState_TriggerRestart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANetGameState::execTriggerRestart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerRestart_Implementation();
	P_NATIVE_END;
}
// End Class ANetGameState Function TriggerRestart

// Begin Class ANetGameState Function UpdateTimerDisplay
static FName NAME_ANetGameState_UpdateTimerDisplay = FName(TEXT("UpdateTimerDisplay"));
void ANetGameState::UpdateTimerDisplay()
{
	ProcessEvent(FindFunctionChecked(NAME_ANetGameState_UpdateTimerDisplay),NULL);
}
struct Z_Construct_UFunction_ANetGameState_UpdateTimerDisplay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NetGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetGameState_UpdateTimerDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetGameState, nullptr, "UpdateTimerDisplay", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetGameState_UpdateTimerDisplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetGameState_UpdateTimerDisplay_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANetGameState_UpdateTimerDisplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetGameState_UpdateTimerDisplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ANetGameState Function UpdateTimerDisplay

// Begin Class ANetGameState
void ANetGameState::StaticRegisterNativesANetGameState()
{
	UClass* Class = ANetGameState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPlayerStateByIndex", &ANetGameState::execGetPlayerStateByIndex },
		{ "OnRep_RemainingTime", &ANetGameState::execOnRep_RemainingTime },
		{ "OnRep_Winner", &ANetGameState::execOnRep_Winner },
		{ "StartTimer", &ANetGameState::execStartTimer },
		{ "StopTimer", &ANetGameState::execStopTimer },
		{ "TriggerRestart", &ANetGameState::execTriggerRestart },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANetGameState);
UClass* Z_Construct_UClass_ANetGameState_NoRegister()
{
	return ANetGameState::StaticClass();
}
struct Z_Construct_UClass_ANetGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "NetGameState.h" },
		{ "ModuleRelativePath", "Private/NetGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WinningPlayer_MetaData[] = {
		{ "Category", "NetGameState" },
		{ "ModuleRelativePath", "Private/NetGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Timer_MetaData[] = {
		{ "Category", "NetGameState" },
		{ "ModuleRelativePath", "Private/NetGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemainingTime_MetaData[] = {
		{ "Category", "NetGameState" },
		{ "ModuleRelativePath", "Private/NetGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_WinningPlayer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RemainingTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANetGameState_GetPlayerStateByIndex, "GetPlayerStateByIndex" }, // 2057351758
		{ &Z_Construct_UFunction_ANetGameState_OnRep_RemainingTime, "OnRep_RemainingTime" }, // 1603375226
		{ &Z_Construct_UFunction_ANetGameState_OnRep_Winner, "OnRep_Winner" }, // 1527841071
		{ &Z_Construct_UFunction_ANetGameState_OnRestart, "OnRestart" }, // 1204668653
		{ &Z_Construct_UFunction_ANetGameState_OnVictory, "OnVictory" }, // 386000265
		{ &Z_Construct_UFunction_ANetGameState_StartTimer, "StartTimer" }, // 3210299005
		{ &Z_Construct_UFunction_ANetGameState_StopTimer, "StopTimer" }, // 3085791173
		{ &Z_Construct_UFunction_ANetGameState_TriggerRestart, "TriggerRestart" }, // 1993218063
		{ &Z_Construct_UFunction_ANetGameState_UpdateTimerDisplay, "UpdateTimerDisplay" }, // 2321865871
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANetGameState_Statics::NewProp_WinningPlayer = { "WinningPlayer", "OnRep_Winner", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetGameState, WinningPlayer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WinningPlayer_MetaData), NewProp_WinningPlayer_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANetGameState_Statics::NewProp_Timer = { "Timer", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetGameState, Timer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Timer_MetaData), NewProp_Timer_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANetGameState_Statics::NewProp_RemainingTime = { "RemainingTime", "OnRep_RemainingTime", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetGameState, RemainingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemainingTime_MetaData), NewProp_RemainingTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANetGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetGameState_Statics::NewProp_WinningPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetGameState_Statics::NewProp_Timer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetGameState_Statics::NewProp_RemainingTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANetGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_LabWork4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANetGameState_Statics::ClassParams = {
	&ANetGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANetGameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANetGameState_Statics::PropPointers),
	0,
	0x008002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_ANetGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANetGameState()
{
	if (!Z_Registration_Info_UClass_ANetGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANetGameState.OuterSingleton, Z_Construct_UClass_ANetGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANetGameState.OuterSingleton;
}
template<> LABWORK4_API UClass* StaticClass<ANetGameState>()
{
	return ANetGameState::StaticClass();
}
void ANetGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_WinningPlayer(TEXT("WinningPlayer"));
	static const FName Name_RemainingTime(TEXT("RemainingTime"));
	const bool bIsValid = true
		&& Name_WinningPlayer == ClassReps[(int32)ENetFields_Private::WinningPlayer].Property->GetFName()
		&& Name_RemainingTime == ClassReps[(int32)ENetFields_Private::RemainingTime].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ANetGameState"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANetGameState);
ANetGameState::~ANetGameState() {}
// End Class ANetGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_EnesAkar_Desktop_LabWork4_Source_LabWork4_Private_NetGameState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANetGameState, ANetGameState::StaticClass, TEXT("ANetGameState"), &Z_Registration_Info_UClass_ANetGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANetGameState), 2002341792U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_EnesAkar_Desktop_LabWork4_Source_LabWork4_Private_NetGameState_h_472810059(TEXT("/Script/LabWork4"),
	Z_CompiledInDeferFile_FID_Users_EnesAkar_Desktop_LabWork4_Source_LabWork4_Private_NetGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_EnesAkar_Desktop_LabWork4_Source_LabWork4_Private_NetGameState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
