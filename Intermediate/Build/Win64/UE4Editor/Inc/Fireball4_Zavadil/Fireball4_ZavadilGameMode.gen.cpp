// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Fireball4_ZavadilGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireball4_ZavadilGameMode() {}
// Cross Module References
	FIREBALL4_ZAVADIL_API UClass* Z_Construct_UClass_AFireball4_ZavadilGameMode_NoRegister();
	FIREBALL4_ZAVADIL_API UClass* Z_Construct_UClass_AFireball4_ZavadilGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Fireball4_Zavadil();
// End Cross Module References
	void AFireball4_ZavadilGameMode::StaticRegisterNativesAFireball4_ZavadilGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFireball4_ZavadilGameMode_NoRegister()
	{
		return AFireball4_ZavadilGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AFireball4_ZavadilGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Fireball4_Zavadil,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "Fireball4_ZavadilGameMode.h" },
				{ "ModuleRelativePath", "Fireball4_ZavadilGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AFireball4_ZavadilGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AFireball4_ZavadilGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFireball4_ZavadilGameMode, 2926656951);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFireball4_ZavadilGameMode(Z_Construct_UClass_AFireball4_ZavadilGameMode, &AFireball4_ZavadilGameMode::StaticClass, TEXT("/Script/Fireball4_Zavadil"), TEXT("AFireball4_ZavadilGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFireball4_ZavadilGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
