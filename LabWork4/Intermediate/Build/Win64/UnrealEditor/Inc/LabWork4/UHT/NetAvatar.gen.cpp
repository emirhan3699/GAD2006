// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LabWork4/Private/NetAvatar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetAvatar() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
LABWORK4_API UClass* Z_Construct_UClass_ANetAvatar();
LABWORK4_API UClass* Z_Construct_UClass_ANetAvatar_NoRegister();
LABWORK4_API UClass* Z_Construct_UClass_ANetBaseCharacter();
UPackage* Z_Construct_UPackage__Script_LabWork4();
// End Cross Module References

// Begin Class ANetAvatar Function OnRep_UpdateMovementParams
struct Z_Construct_UFunction_ANetAvatar_OnRep_UpdateMovementParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NetAvatar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetAvatar_OnRep_UpdateMovementParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetAvatar, nullptr, "OnRep_UpdateMovementParams", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetAvatar_OnRep_UpdateMovementParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetAvatar_OnRep_UpdateMovementParams_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANetAvatar_OnRep_UpdateMovementParams()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetAvatar_OnRep_UpdateMovementParams_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANetAvatar::execOnRep_UpdateMovementParams)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_UpdateMovementParams();
	P_NATIVE_END;
}
// End Class ANetAvatar Function OnRep_UpdateMovementParams

// Begin Class ANetAvatar Function ServerStartRunning
static const FName NAME_ANetAvatar_ServerStartRunning = FName(TEXT("ServerStartRunning"));
void ANetAvatar::ServerStartRunning()
{
	UFunction* Func = FindFunctionChecked(NAME_ANetAvatar_ServerStartRunning);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ANetAvatar_ServerStartRunning_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NetAvatar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetAvatar_ServerStartRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetAvatar, nullptr, "ServerStartRunning", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetAvatar_ServerStartRunning_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetAvatar_ServerStartRunning_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANetAvatar_ServerStartRunning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetAvatar_ServerStartRunning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANetAvatar::execServerStartRunning)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerStartRunning_Implementation();
	P_NATIVE_END;
}
// End Class ANetAvatar Function ServerStartRunning

// Begin Class ANetAvatar Function ServerStopRunning
static const FName NAME_ANetAvatar_ServerStopRunning = FName(TEXT("ServerStopRunning"));
void ANetAvatar::ServerStopRunning()
{
	UFunction* Func = FindFunctionChecked(NAME_ANetAvatar_ServerStopRunning);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ANetAvatar_ServerStopRunning_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NetAvatar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetAvatar_ServerStopRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetAvatar, nullptr, "ServerStopRunning", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetAvatar_ServerStopRunning_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetAvatar_ServerStopRunning_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANetAvatar_ServerStopRunning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetAvatar_ServerStopRunning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANetAvatar::execServerStopRunning)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerStopRunning_Implementation();
	P_NATIVE_END;
}
// End Class ANetAvatar Function ServerStopRunning

// Begin Class ANetAvatar
void ANetAvatar::StaticRegisterNativesANetAvatar()
{
	UClass* Class = ANetAvatar::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_UpdateMovementParams", &ANetAvatar::execOnRep_UpdateMovementParams },
		{ "ServerStartRunning", &ANetAvatar::execServerStartRunning },
		{ "ServerStopRunning", &ANetAvatar::execServerStopRunning },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANetAvatar);
UClass* Z_Construct_UClass_ANetAvatar_NoRegister()
{
	return ANetAvatar::StaticClass();
}
struct Z_Construct_UClass_ANetAvatar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NetAvatar.h" },
		{ "ModuleRelativePath", "Private/NetAvatar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "NetAvatar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/NetAvatar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "NetAvatar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/NetAvatar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHoldingRunKey_MetaData[] = {
		{ "Category", "NetAvatar" },
		{ "ModuleRelativePath", "Private/NetAvatar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementScale_MetaData[] = {
		{ "Category", "NetAvatar" },
		{ "ModuleRelativePath", "Private/NetAvatar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static void NewProp_bHoldingRunKey_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHoldingRunKey;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANetAvatar_OnRep_UpdateMovementParams, "OnRep_UpdateMovementParams" }, // 1283198895
		{ &Z_Construct_UFunction_ANetAvatar_ServerStartRunning, "ServerStartRunning" }, // 2733929371
		{ &Z_Construct_UFunction_ANetAvatar_ServerStopRunning, "ServerStopRunning" }, // 2982263644
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetAvatar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetAvatar_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetAvatar, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetAvatar_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetAvatar, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
void Z_Construct_UClass_ANetAvatar_Statics::NewProp_bHoldingRunKey_SetBit(void* Obj)
{
	((ANetAvatar*)Obj)->bHoldingRunKey = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANetAvatar_Statics::NewProp_bHoldingRunKey = { "bHoldingRunKey", "OnRep_UpdateMovementParams", (EPropertyFlags)0x0010000100020021, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANetAvatar), &Z_Construct_UClass_ANetAvatar_Statics::NewProp_bHoldingRunKey_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHoldingRunKey_MetaData), NewProp_bHoldingRunKey_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANetAvatar_Statics::NewProp_MovementScale = { "MovementScale", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetAvatar, MovementScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementScale_MetaData), NewProp_MovementScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANetAvatar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetAvatar_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetAvatar_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetAvatar_Statics::NewProp_bHoldingRunKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetAvatar_Statics::NewProp_MovementScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetAvatar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANetAvatar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ANetBaseCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_LabWork4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetAvatar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANetAvatar_Statics::ClassParams = {
	&ANetAvatar::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANetAvatar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANetAvatar_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetAvatar_Statics::Class_MetaDataParams), Z_Construct_UClass_ANetAvatar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANetAvatar()
{
	if (!Z_Registration_Info_UClass_ANetAvatar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANetAvatar.OuterSingleton, Z_Construct_UClass_ANetAvatar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANetAvatar.OuterSingleton;
}
template<> LABWORK4_API UClass* StaticClass<ANetAvatar>()
{
	return ANetAvatar::StaticClass();
}
void ANetAvatar::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_bHoldingRunKey(TEXT("bHoldingRunKey"));
	const bool bIsValid = true
		&& Name_bHoldingRunKey == ClassReps[(int32)ENetFields_Private::bHoldingRunKey].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ANetAvatar"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANetAvatar);
ANetAvatar::~ANetAvatar() {}
// End Class ANetAvatar

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetAvatar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANetAvatar, ANetAvatar::StaticClass, TEXT("ANetAvatar"), &Z_Registration_Info_UClass_ANetAvatar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANetAvatar), 3118533946U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetAvatar_h_641870240(TEXT("/Script/LabWork4"),
	Z_CompiledInDeferFile_FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetAvatar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Harvert_Documents_GitHub_GAD2006_LabWork4_Source_LabWork4_Private_NetAvatar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
