// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LABWORK3/Private/TileBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
LABWORK3_API UClass* Z_Construct_UClass_ATileBase();
LABWORK3_API UClass* Z_Construct_UClass_ATileBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_LABWORK3();
// End Cross Module References

// Begin Class ATileBase
void ATileBase::StaticRegisterNativesATileBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATileBase);
UClass* Z_Construct_UClass_ATileBase_NoRegister()
{
	return ATileBase::StaticClass();
}
struct Z_Construct_UClass_ATileBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TileBase.h" },
		{ "ModuleRelativePath", "Private/TileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseMesh_MetaData[] = {
		{ "Category", "TileBase" },
		{ "ModuleRelativePath", "Private/TileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancedMesh_MetaData[] = {
		{ "Category", "TileBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/TileBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstancedMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATileBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATileBase_Statics::NewProp_BaseMesh = { "BaseMesh", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATileBase, BaseMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseMesh_MetaData), NewProp_BaseMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATileBase_Statics::NewProp_InstancedMesh = { "InstancedMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATileBase, InstancedMesh), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancedMesh_MetaData), NewProp_InstancedMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATileBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileBase_Statics::NewProp_BaseMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileBase_Statics::NewProp_InstancedMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATileBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATileBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_LABWORK3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATileBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATileBase_Statics::ClassParams = {
	&ATileBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATileBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATileBase_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATileBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ATileBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATileBase()
{
	if (!Z_Registration_Info_UClass_ATileBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATileBase.OuterSingleton, Z_Construct_UClass_ATileBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATileBase.OuterSingleton;
}
template<> LABWORK3_API UClass* StaticClass<ATileBase>()
{
	return ATileBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATileBase);
ATileBase::~ATileBase() {}
// End Class ATileBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Harvert_Documents_Unreal_Projects_LABWORK3_5_5_Source_LABWORK3_Private_TileBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATileBase, ATileBase::StaticClass, TEXT("ATileBase"), &Z_Registration_Info_UClass_ATileBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATileBase), 2871081847U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Harvert_Documents_Unreal_Projects_LABWORK3_5_5_Source_LABWORK3_Private_TileBase_h_3369437647(TEXT("/Script/LABWORK3"),
	Z_CompiledInDeferFile_FID_Users_Harvert_Documents_Unreal_Projects_LABWORK3_5_5_Source_LABWORK3_Private_TileBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Harvert_Documents_Unreal_Projects_LABWORK3_5_5_Source_LABWORK3_Private_TileBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
