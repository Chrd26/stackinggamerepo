// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "stackingbuildinggame/mainPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodemainPlayer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	STACKINGBUILDINGGAME_API UClass* Z_Construct_UClass_AmainPlayer();
	STACKINGBUILDINGGAME_API UClass* Z_Construct_UClass_AmainPlayer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_stackingbuildinggame();
// End Cross Module References
	void AmainPlayer::StaticRegisterNativesAmainPlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AmainPlayer);
	UClass* Z_Construct_UClass_AmainPlayer_NoRegister()
	{
		return AmainPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AmainPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mainCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mainCamera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AmainPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_stackingbuildinggame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AmainPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "mainPlayer.h" },
		{ "ModuleRelativePath", "mainPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AmainPlayer_Statics::NewProp_mainCamera_MetaData[] = {
		{ "Category", "mainPlayer" },
		{ "Comment", "// UPROPERTY(EditAnywhere)\n// class USpringArmComponent *springArm;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "mainPlayer.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere)\nclass USpringArmComponent *springArm;" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AmainPlayer_Statics::NewProp_mainCamera = { "mainCamera", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AmainPlayer, mainCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AmainPlayer_Statics::NewProp_mainCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AmainPlayer_Statics::NewProp_mainCamera_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AmainPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AmainPlayer_Statics::NewProp_mainCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AmainPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AmainPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AmainPlayer_Statics::ClassParams = {
		&AmainPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AmainPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AmainPlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AmainPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AmainPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AmainPlayer()
	{
		if (!Z_Registration_Info_UClass_AmainPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AmainPlayer.OuterSingleton, Z_Construct_UClass_AmainPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AmainPlayer.OuterSingleton;
	}
	template<> STACKINGBUILDINGGAME_API UClass* StaticClass<AmainPlayer>()
	{
		return AmainPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AmainPlayer);
	struct Z_CompiledInDeferFile_FID_stackingbuildinggame_Source_stackingbuildinggame_mainPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_stackingbuildinggame_Source_stackingbuildinggame_mainPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AmainPlayer, AmainPlayer::StaticClass, TEXT("AmainPlayer"), &Z_Registration_Info_UClass_AmainPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AmainPlayer), 3708824923U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_stackingbuildinggame_Source_stackingbuildinggame_mainPlayer_h_1508358194(TEXT("/Script/stackingbuildinggame"),
		Z_CompiledInDeferFile_FID_stackingbuildinggame_Source_stackingbuildinggame_mainPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_stackingbuildinggame_Source_stackingbuildinggame_mainPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
