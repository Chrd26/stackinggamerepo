// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "stackingbuildinggame/buildingpart.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodebuildingpart() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	STACKINGBUILDINGGAME_API UClass* Z_Construct_UClass_Abuildingpart();
	STACKINGBUILDINGGAME_API UClass* Z_Construct_UClass_Abuildingpart_NoRegister();
	UPackage* Z_Construct_UPackage__Script_stackingbuildinggame();
// End Cross Module References
	void Abuildingpart::StaticRegisterNativesAbuildingpart()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Abuildingpart);
	UClass* Z_Construct_UClass_Abuildingpart_NoRegister()
	{
		return Abuildingpart::StaticClass();
	}
	struct Z_Construct_UClass_Abuildingpart_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_collision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_collision;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Abuildingpart_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_stackingbuildinggame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Abuildingpart_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "buildingpart.h" },
		{ "ModuleRelativePath", "buildingpart.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Abuildingpart_Statics::NewProp_collision_MetaData[] = {
		{ "Category", "buildingpart" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "buildingpart.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Abuildingpart_Statics::NewProp_collision = { "collision", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Abuildingpart, collision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Abuildingpart_Statics::NewProp_collision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Abuildingpart_Statics::NewProp_collision_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Abuildingpart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Abuildingpart_Statics::NewProp_collision,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Abuildingpart_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Abuildingpart>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Abuildingpart_Statics::ClassParams = {
		&Abuildingpart::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_Abuildingpart_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_Abuildingpart_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Abuildingpart_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Abuildingpart_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Abuildingpart()
	{
		if (!Z_Registration_Info_UClass_Abuildingpart.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Abuildingpart.OuterSingleton, Z_Construct_UClass_Abuildingpart_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Abuildingpart.OuterSingleton;
	}
	template<> STACKINGBUILDINGGAME_API UClass* StaticClass<Abuildingpart>()
	{
		return Abuildingpart::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Abuildingpart);
	struct Z_CompiledInDeferFile_FID_stackingbuildinggame_Source_stackingbuildinggame_buildingpart_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_stackingbuildinggame_Source_stackingbuildinggame_buildingpart_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Abuildingpart, Abuildingpart::StaticClass, TEXT("Abuildingpart"), &Z_Registration_Info_UClass_Abuildingpart, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Abuildingpart), 397375945U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_stackingbuildinggame_Source_stackingbuildinggame_buildingpart_h_3878726001(TEXT("/Script/stackingbuildinggame"),
		Z_CompiledInDeferFile_FID_stackingbuildinggame_Source_stackingbuildinggame_buildingpart_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_stackingbuildinggame_Source_stackingbuildinggame_buildingpart_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
