// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LabWork4/Private/NetGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
LABWORK4_API UClass* Z_Construct_UClass_ANetAvatar_NoRegister();
LABWORK4_API UClass* Z_Construct_UClass_ANetGameMode();
LABWORK4_API UClass* Z_Construct_UClass_ANetGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_LabWork4();
// End Cross Module References

// Begin Class ANetGameMode Function AvatarsOverlapped
struct Z_Construct_UFunction_ANetGameMode_AvatarsOverlapped_Statics
{
	struct NetGameMode_eventAvatarsOverlapped_Parms
	{
		ANetAvatar* AvatarA;
		ANetAvatar* AvatarB;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NetGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AvatarA;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AvatarB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANetGameMode_AvatarsOverlapped_Statics::NewProp_AvatarA = { "AvatarA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetGameMode_eventAvatarsOverlapped_Parms, AvatarA), Z_Construct_UClass_ANetAvatar_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANetGameMode_AvatarsOverlapped_Statics::NewProp_AvatarB = { "AvatarB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetGameMode_eventAvatarsOverlapped_Parms, AvatarB), Z_Construct_UClass_ANetAvatar_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANetGameMode_AvatarsOverlapped_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetGameMode_AvatarsOverlapped_Statics::NewProp_AvatarA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetGameMode_AvatarsOverlapped_Statics::NewProp_AvatarB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetGameMode_AvatarsOverlapped_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetGameMode_AvatarsOverlapped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetGameMode, nullptr, "AvatarsOverlapped", nullptr, nullptr, Z_Construct_UFunction_ANetGameMode_AvatarsOverlapped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetGameMode_AvatarsOverlapped_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANetGameMode_AvatarsOverlapped_Statics::NetGameMode_eventAvatarsOverlapped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetGameMode_AvatarsOverlapped_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetGameMode_AvatarsOverlapped_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANetGameMode_AvatarsOverlapped_Statics::NetGameMode_eventAvatarsOverlapped_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANetGameMode_AvatarsOverlapped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetGameMode_AvatarsOverlapped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANetGameMode::execAvatarsOverlapped)
{
	P_GET_OBJECT(ANetAvatar,Z_Param_AvatarA);
	P_GET_OBJECT(ANetAvatar,Z_Param_AvatarB);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AvatarsOverlapped(Z_Param_AvatarA,Z_Param_AvatarB);
	P_NATIVE_END;
}
// End Class ANetGameMode Function AvatarsOverlapped

// Begin Class ANetGameMode Function EndGame
struct Z_Construct_UFunction_ANetGameMode_EndGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NetGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetGameMode_EndGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetGameMode, nullptr, "EndGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetGameMode_EndGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetGameMode_EndGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANetGameMode_EndGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetGameMode_EndGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANetGameMode::execEndGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndGame();
	P_NATIVE_END;
}
// End Class ANetGameMode Function EndGame

// Begin Class ANetGameMode Function SetWinner
struct Z_Construct_UFunction_ANetGameMode_SetWinner_Statics
{
	struct NetGameMode_eventSetWinner_Parms
	{
		ANetAvatar* AAvatar;
		ANetAvatar* BAvatar;
		bool bRedWon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NetGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AAvatar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BAvatar;
	static void NewProp_bRedWon_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRedWon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANetGameMode_SetWinner_Statics::NewProp_AAvatar = { "AAvatar", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetGameMode_eventSetWinner_Parms, AAvatar), Z_Construct_UClass_ANetAvatar_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANetGameMode_SetWinner_Statics::NewProp_BAvatar = { "BAvatar", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetGameMode_eventSetWinner_Parms, BAvatar), Z_Construct_UClass_ANetAvatar_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ANetGameMode_SetWinner_Statics::NewProp_bRedWon_SetBit(void* Obj)
{
	((NetGameMode_eventSetWinner_Parms*)Obj)->bRedWon = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANetGameMode_SetWinner_Statics::NewProp_bRedWon = { "bRedWon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NetGameMode_eventSetWinner_Parms), &Z_Construct_UFunction_ANetGameMode_SetWinner_Statics::NewProp_bRedWon_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANetGameMode_SetWinner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetGameMode_SetWinner_Statics::NewProp_AAvatar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetGameMode_SetWinner_Statics::NewProp_BAvatar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetGameMode_SetWinner_Statics::NewProp_bRedWon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetGameMode_SetWinner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetGameMode_SetWinner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetGameMode, nullptr, "SetWinner", nullptr, nullptr, Z_Construct_UFunction_ANetGameMode_SetWinner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetGameMode_SetWinner_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANetGameMode_SetWinner_Statics::NetGameMode_eventSetWinner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetGameMode_SetWinner_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetGameMode_SetWinner_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANetGameMode_SetWinner_Statics::NetGameMode_eventSetWinner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANetGameMode_SetWinner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetGameMode_SetWinner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANetGameMode::execSetWinner)
{
	P_GET_OBJECT(ANetAvatar,Z_Param_AAvatar);
	P_GET_OBJECT(ANetAvatar,Z_Param_BAvatar);
	P_GET_UBOOL(Z_Param_bRedWon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWinner(Z_Param_AAvatar,Z_Param_BAvatar,Z_Param_bRedWon);
	P_NATIVE_END;
}
// End Class ANetGameMode Function SetWinner

// Begin Class ANetGameMode Function TimeOver
static const FName NAME_ANetGameMode_TimeOver = FName(TEXT("TimeOver"));
void ANetGameMode::TimeOver()
{
	UFunction* Func = FindFunctionChecked(NAME_ANetGameMode_TimeOver);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ANetGameMode_TimeOver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NetGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetGameMode_TimeOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetGameMode, nullptr, "TimeOver", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetGameMode_TimeOver_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetGameMode_TimeOver_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANetGameMode_TimeOver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetGameMode_TimeOver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANetGameMode::execTimeOver)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TimeOver_Implementation();
	P_NATIVE_END;
}
// End Class ANetGameMode Function TimeOver

// Begin Class ANetGameMode
void ANetGameMode::StaticRegisterNativesANetGameMode()
{
	UClass* Class = ANetGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AvatarsOverlapped", &ANetGameMode::execAvatarsOverlapped },
		{ "EndGame", &ANetGameMode::execEndGame },
		{ "SetWinner", &ANetGameMode::execSetWinner },
		{ "TimeOver", &ANetGameMode::execTimeOver },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANetGameMode);
UClass* Z_Construct_UClass_ANetGameMode_NoRegister()
{
	return ANetGameMode::StaticClass();
}
struct Z_Construct_UClass_ANetGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "NetGameMode.h" },
		{ "ModuleRelativePath", "Private/NetGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANetGameMode_AvatarsOverlapped, "AvatarsOverlapped" }, // 1441499364
		{ &Z_Construct_UFunction_ANetGameMode_EndGame, "EndGame" }, // 395544603
		{ &Z_Construct_UFunction_ANetGameMode_SetWinner, "SetWinner" }, // 3157878541
		{ &Z_Construct_UFunction_ANetGameMode_TimeOver, "TimeOver" }, // 1684176106
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANetGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_LabWork4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANetGameMode_Statics::ClassParams = {
	&ANetGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x008002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ANetGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANetGameMode()
{
	if (!Z_Registration_Info_UClass_ANetGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANetGameMode.OuterSingleton, Z_Construct_UClass_ANetGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANetGameMode.OuterSingleton;
}
template<> LABWORK4_API UClass* StaticClass<ANetGameMode>()
{
	return ANetGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANetGameMode);
ANetGameMode::~ANetGameMode() {}
// End Class ANetGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANetGameMode, ANetGameMode::StaticClass, TEXT("ANetGameMode"), &Z_Registration_Info_UClass_ANetGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANetGameMode), 2809565055U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetGameMode_h_2979379523(TEXT("/Script/LabWork4"),
	Z_CompiledInDeferFile_FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
