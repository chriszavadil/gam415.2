// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Fireball4_ZavadilHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireball4_ZavadilHUD() {}
// Cross Module References
	FIREBALL4_ZAVADIL_API UClass* Z_Construct_UClass_AFireball4_ZavadilHUD_NoRegister();
	FIREBALL4_ZAVADIL_API UClass* Z_Construct_UClass_AFireball4_ZavadilHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Fireball4_Zavadil();
// End Cross Module References
	void AFireball4_ZavadilHUD::StaticRegisterNativesAFireball4_ZavadilHUD()
	{
	}
	UClass* Z_Construct_UClass_AFireball4_ZavadilHUD_NoRegister()
	{
		return AFireball4_ZavadilHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_AFireball4_ZavadilHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AHUD,
				(UObject* (*)())Z_Construct_UPackage__Script_Fireball4_Zavadil,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Rendering Actor Input Replication" },
				{ "IncludePath", "Fireball4_ZavadilHUD.h" },
				{ "ModuleRelativePath", "Fireball4_ZavadilHUD.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AFireball4_ZavadilHUD>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AFireball4_ZavadilHUD::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0080028Cu,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFireball4_ZavadilHUD, 1833704434);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFireball4_ZavadilHUD(Z_Construct_UClass_AFireball4_ZavadilHUD, &AFireball4_ZavadilHUD::StaticClass, TEXT("/Script/Fireball4_Zavadil"), TEXT("AFireball4_ZavadilHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFireball4_ZavadilHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
