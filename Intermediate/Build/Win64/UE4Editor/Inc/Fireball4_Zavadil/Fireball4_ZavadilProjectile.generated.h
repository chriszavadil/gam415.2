// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef FIREBALL4_ZAVADIL_Fireball4_ZavadilProjectile_generated_h
#error "Fireball4_ZavadilProjectile.generated.h already included, missing '#pragma once' in Fireball4_ZavadilProjectile.h"
#endif
#define FIREBALL4_ZAVADIL_Fireball4_ZavadilProjectile_generated_h

#define Fireball4_Zavadil_Source_Fireball4_Zavadil_Fireball4_ZavadilProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Fireball4_Zavadil_Source_Fireball4_Zavadil_Fireball4_ZavadilProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Fireball4_Zavadil_Source_Fireball4_Zavadil_Fireball4_ZavadilProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFireball4_ZavadilProjectile(); \
	friend FIREBALL4_ZAVADIL_API class UClass* Z_Construct_UClass_AFireball4_ZavadilProjectile(); \
public: \
	DECLARE_CLASS(AFireball4_ZavadilProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Fireball4_Zavadil"), NO_API) \
	DECLARE_SERIALIZER(AFireball4_ZavadilProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Fireball4_Zavadil_Source_Fireball4_Zavadil_Fireball4_ZavadilProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFireball4_ZavadilProjectile(); \
	friend FIREBALL4_ZAVADIL_API class UClass* Z_Construct_UClass_AFireball4_ZavadilProjectile(); \
public: \
	DECLARE_CLASS(AFireball4_ZavadilProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Fireball4_Zavadil"), NO_API) \
	DECLARE_SERIALIZER(AFireball4_ZavadilProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Fireball4_Zavadil_Source_Fireball4_Zavadil_Fireball4_ZavadilProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFireball4_ZavadilProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFireball4_ZavadilProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFireball4_ZavadilProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFireball4_ZavadilProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFireball4_ZavadilProjectile(AFireball4_ZavadilProjectile&&); \
	NO_API AFireball4_ZavadilProjectile(const AFireball4_ZavadilProjectile&); \
public:


#define Fireball4_Zavadil_Source_Fireball4_Zavadil_Fireball4_ZavadilProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFireball4_ZavadilProjectile(AFireball4_ZavadilProjectile&&); \
	NO_API AFireball4_ZavadilProjectile(const AFireball4_ZavadilProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFireball4_ZavadilProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFireball4_ZavadilProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFireball4_ZavadilProjectile)


#define Fireball4_Zavadil_Source_Fireball4_Zavadil_Fireball4_ZavadilProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AFireball4_ZavadilProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AFireball4_ZavadilProjectile, ProjectileMovement); }


#define Fireball4_Zavadil_Source_Fireball4_Zavadil_Fireball4_ZavadilProjectile_h_9_PROLOG
#define Fireball4_Zavadil_Source_Fireball4_Zavadil_Fireball4_ZavadilProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Fireball4_Zavadil_Source_Fireball4_Zavadil_Fireball4_ZavadilProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Fireball4_Zavadil_Source_Fireball4_Zavadil_Fireball4_ZavadilProjectile_h_12_RPC_WRAPPERS \
	Fireball4_Zavadil_Source_Fireball4_Zavadil_Fireball4_ZavadilProjectile_h_12_INCLASS \
	Fireball4_Zavadil_Source_Fireball4_Zavadil_Fireball4_ZavadilProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Fireball4_Zavadil_Source_Fireball4_Zavadil_Fireball4_ZavadilProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Fireball4_Zavadil_Source_Fireball4_Zavadil_Fireball4_ZavadilProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Fireball4_Zavadil_Source_Fireball4_Zavadil_Fireball4_ZavadilProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Fireball4_Zavadil_Source_Fireball4_Zavadil_Fireball4_ZavadilProjectile_h_12_INCLASS_NO_PURE_DECLS \
	Fireball4_Zavadil_Source_Fireball4_Zavadil_Fireball4_ZavadilProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Fireball4_Zavadil_Source_Fireball4_Zavadil_Fireball4_ZavadilProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
