// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Week5/Week5GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeek5GameModeBase() {}
// Cross Module References
	WEEK5_API UClass* Z_Construct_UClass_AWeek5GameModeBase_NoRegister();
	WEEK5_API UClass* Z_Construct_UClass_AWeek5GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Week5();
// End Cross Module References
	void AWeek5GameModeBase::StaticRegisterNativesAWeek5GameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeek5GameModeBase);
	UClass* Z_Construct_UClass_AWeek5GameModeBase_NoRegister()
	{
		return AWeek5GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AWeek5GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeek5GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Week5,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeek5GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Week5GameModeBase.h" },
		{ "ModuleRelativePath", "Week5GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeek5GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeek5GameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeek5GameModeBase_Statics::ClassParams = {
		&AWeek5GameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AWeek5GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeek5GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeek5GameModeBase()
	{
		if (!Z_Registration_Info_UClass_AWeek5GameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeek5GameModeBase.OuterSingleton, Z_Construct_UClass_AWeek5GameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWeek5GameModeBase.OuterSingleton;
	}
	template<> WEEK5_API UClass* StaticClass<AWeek5GameModeBase>()
	{
		return AWeek5GameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeek5GameModeBase);
	struct Z_CompiledInDeferFile_FID_Week5_Source_Week5_Week5GameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Week5_Source_Week5_Week5GameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWeek5GameModeBase, AWeek5GameModeBase::StaticClass, TEXT("AWeek5GameModeBase"), &Z_Registration_Info_UClass_AWeek5GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeek5GameModeBase), 3512097637U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Week5_Source_Week5_Week5GameModeBase_h_255000007(TEXT("/Script/Week5"),
		Z_CompiledInDeferFile_FID_Week5_Source_Week5_Week5GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Week5_Source_Week5_Week5GameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
