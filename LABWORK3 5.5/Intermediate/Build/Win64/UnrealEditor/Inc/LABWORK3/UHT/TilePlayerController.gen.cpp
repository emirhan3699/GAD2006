// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LABWORK3/Private/TilePlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTilePlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
LABWORK3_API UClass* Z_Construct_UClass_ATilePlayerController();
LABWORK3_API UClass* Z_Construct_UClass_ATilePlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_LABWORK3();
// End Cross Module References

// Begin Class ATilePlayerController
void ATilePlayerController::StaticRegisterNativesATilePlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATilePlayerController);
UClass* Z_Construct_UClass_ATilePlayerController_NoRegister()
{
	return ATilePlayerController::StaticClass();
}
struct Z_Construct_UClass_ATilePlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "TilePlayerController.h" },
		{ "ModuleRelativePath", "Private/TilePlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATilePlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATilePlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_LABWORK3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATilePlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATilePlayerController_Statics::ClassParams = {
	&ATilePlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATilePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ATilePlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATilePlayerController()
{
	if (!Z_Registration_Info_UClass_ATilePlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATilePlayerController.OuterSingleton, Z_Construct_UClass_ATilePlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATilePlayerController.OuterSingleton;
}
template<> LABWORK3_API UClass* StaticClass<ATilePlayerController>()
{
	return ATilePlayerController::StaticClass();
}
ATilePlayerController::ATilePlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATilePlayerController);
ATilePlayerController::~ATilePlayerController() {}
// End Class ATilePlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Harvert_Documents_Unreal_Projects_LABWORK3_5_5_Source_LABWORK3_Private_TilePlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATilePlayerController, ATilePlayerController::StaticClass, TEXT("ATilePlayerController"), &Z_Registration_Info_UClass_ATilePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATilePlayerController), 2484850171U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Harvert_Documents_Unreal_Projects_LABWORK3_5_5_Source_LABWORK3_Private_TilePlayerController_h_32398730(TEXT("/Script/LABWORK3"),
	Z_CompiledInDeferFile_FID_Users_Harvert_Documents_Unreal_Projects_LABWORK3_5_5_Source_LABWORK3_Private_TilePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Harvert_Documents_Unreal_Projects_LABWORK3_5_5_Source_LABWORK3_Private_TilePlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS