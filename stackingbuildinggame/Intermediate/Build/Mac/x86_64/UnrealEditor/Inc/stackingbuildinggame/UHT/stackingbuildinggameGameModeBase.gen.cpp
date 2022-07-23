// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "stackingbuildinggame/stackingbuildinggameGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodestackingbuildinggameGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	STACKINGBUILDINGGAME_API UClass* Z_Construct_UClass_AstackingbuildinggameGameModeBase();
	STACKINGBUILDINGGAME_API UClass* Z_Construct_UClass_AstackingbuildinggameGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_stackingbuildinggame();
// End Cross Module References
	void AstackingbuildinggameGameModeBase::StaticRegisterNativesAstackingbuildinggameGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AstackingbuildinggameGameModeBase);
	UClass* Z_Construct_UClass_AstackingbuildinggameGameModeBase_NoRegister()
	{
		return AstackingbuildinggameGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AstackingbuildinggameGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AstackingbuildinggameGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_stackingbuildinggame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AstackingbuildinggameGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "stackingbuildinggameGameModeBase.h" },
		{ "ModuleRelativePath", "stackingbuildinggameGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AstackingbuildinggameGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AstackingbuildinggameGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AstackingbuildinggameGameModeBase_Statics::ClassParams = {
		&AstackingbuildinggameGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AstackingbuildinggameGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AstackingbuildinggameGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AstackingbuildinggameGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AstackingbuildinggameGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AstackingbuildinggameGameModeBase.OuterSingleton, Z_Construct_UClass_AstackingbuildinggameGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AstackingbuildinggameGameModeBase.OuterSingleton;
	}
	template<> STACKINGBUILDINGGAME_API UClass* StaticClass<AstackingbuildinggameGameModeBase>()
	{
		return AstackingbuildinggameGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AstackingbuildinggameGameModeBase);
	struct Z_CompiledInDeferFile_FID_stackingbuildinggame_Source_stackingbuildinggame_stackingbuildinggameGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_stackingbuildinggame_Source_stackingbuildinggame_stackingbuildinggameGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AstackingbuildinggameGameModeBase, AstackingbuildinggameGameModeBase::StaticClass, TEXT("AstackingbuildinggameGameModeBase"), &Z_Registration_Info_UClass_AstackingbuildinggameGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AstackingbuildinggameGameModeBase), 745161398U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_stackingbuildinggame_Source_stackingbuildinggame_stackingbuildinggameGameModeBase_h_491884834(TEXT("/Script/stackingbuildinggame"),
		Z_CompiledInDeferFile_FID_stackingbuildinggame_Source_stackingbuildinggame_stackingbuildinggameGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_stackingbuildinggame_Source_stackingbuildinggame_stackingbuildinggameGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
