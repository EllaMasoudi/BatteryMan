// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef GAMEUSINGC_BatteryMan_generated_h
#error "BatteryMan.generated.h already included, missing '#pragma once' in BatteryMan.h"
#endif
#define GAMEUSINGC_BatteryMan_generated_h

#define GameUsingC_Source_GameUsingC_BatteryMan_h_21_SPARSE_DATA
#define GameUsingC_Source_GameUsingC_BatteryMan_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define GameUsingC_Source_GameUsingC_BatteryMan_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define GameUsingC_Source_GameUsingC_BatteryMan_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABatteryMan(); \
	friend struct Z_Construct_UClass_ABatteryMan_Statics; \
public: \
	DECLARE_CLASS(ABatteryMan, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameUsingC"), NO_API) \
	DECLARE_SERIALIZER(ABatteryMan)


#define GameUsingC_Source_GameUsingC_BatteryMan_h_21_INCLASS \
private: \
	static void StaticRegisterNativesABatteryMan(); \
	friend struct Z_Construct_UClass_ABatteryMan_Statics; \
public: \
	DECLARE_CLASS(ABatteryMan, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameUsingC"), NO_API) \
	DECLARE_SERIALIZER(ABatteryMan)


#define GameUsingC_Source_GameUsingC_BatteryMan_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABatteryMan(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABatteryMan) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABatteryMan); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatteryMan); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABatteryMan(ABatteryMan&&); \
	NO_API ABatteryMan(const ABatteryMan&); \
public:


#define GameUsingC_Source_GameUsingC_BatteryMan_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABatteryMan(ABatteryMan&&); \
	NO_API ABatteryMan(const ABatteryMan&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABatteryMan); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatteryMan); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABatteryMan)


#define GameUsingC_Source_GameUsingC_BatteryMan_h_21_PRIVATE_PROPERTY_OFFSET
#define GameUsingC_Source_GameUsingC_BatteryMan_h_18_PROLOG
#define GameUsingC_Source_GameUsingC_BatteryMan_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameUsingC_Source_GameUsingC_BatteryMan_h_21_PRIVATE_PROPERTY_OFFSET \
	GameUsingC_Source_GameUsingC_BatteryMan_h_21_SPARSE_DATA \
	GameUsingC_Source_GameUsingC_BatteryMan_h_21_RPC_WRAPPERS \
	GameUsingC_Source_GameUsingC_BatteryMan_h_21_INCLASS \
	GameUsingC_Source_GameUsingC_BatteryMan_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GameUsingC_Source_GameUsingC_BatteryMan_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameUsingC_Source_GameUsingC_BatteryMan_h_21_PRIVATE_PROPERTY_OFFSET \
	GameUsingC_Source_GameUsingC_BatteryMan_h_21_SPARSE_DATA \
	GameUsingC_Source_GameUsingC_BatteryMan_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	GameUsingC_Source_GameUsingC_BatteryMan_h_21_INCLASS_NO_PURE_DECLS \
	GameUsingC_Source_GameUsingC_BatteryMan_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEUSINGC_API UClass* StaticClass<class ABatteryMan>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GameUsingC_Source_GameUsingC_BatteryMan_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
