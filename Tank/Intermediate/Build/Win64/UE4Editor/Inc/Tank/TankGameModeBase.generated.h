// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANK_TankGameModeBase_generated_h
#error "TankGameModeBase.generated.h already included, missing '#pragma once' in TankGameModeBase.h"
#endif
#define TANK_TankGameModeBase_generated_h

#define Tank_Source_Tank_TankGameModeBase_h_15_RPC_WRAPPERS
#define Tank_Source_Tank_TankGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Tank_Source_Tank_TankGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATankGameModeBase(); \
	friend TANK_API class UClass* Z_Construct_UClass_ATankGameModeBase(); \
public: \
	DECLARE_CLASS(ATankGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Tank"), NO_API) \
	DECLARE_SERIALIZER(ATankGameModeBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Tank_Source_Tank_TankGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATankGameModeBase(); \
	friend TANK_API class UClass* Z_Construct_UClass_ATankGameModeBase(); \
public: \
	DECLARE_CLASS(ATankGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Tank"), NO_API) \
	DECLARE_SERIALIZER(ATankGameModeBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Tank_Source_Tank_TankGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankGameModeBase(ATankGameModeBase&&); \
	NO_API ATankGameModeBase(const ATankGameModeBase&); \
public:


#define Tank_Source_Tank_TankGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankGameModeBase(ATankGameModeBase&&); \
	NO_API ATankGameModeBase(const ATankGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankGameModeBase)


#define Tank_Source_Tank_TankGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define Tank_Source_Tank_TankGameModeBase_h_12_PROLOG
#define Tank_Source_Tank_TankGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tank_Source_Tank_TankGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Tank_Source_Tank_TankGameModeBase_h_15_RPC_WRAPPERS \
	Tank_Source_Tank_TankGameModeBase_h_15_INCLASS \
	Tank_Source_Tank_TankGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tank_Source_Tank_TankGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tank_Source_Tank_TankGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Tank_Source_Tank_TankGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Tank_Source_Tank_TankGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	Tank_Source_Tank_TankGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tank_Source_Tank_TankGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
