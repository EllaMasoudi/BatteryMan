// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameUsingC/GameUsingCGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameUsingCGameMode() {}
// Cross Module References
	GAMEUSINGC_API UClass* Z_Construct_UClass_AGameUsingCGameMode_NoRegister();
	GAMEUSINGC_API UClass* Z_Construct_UClass_AGameUsingCGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GameUsingC();
// End Cross Module References
	void AGameUsingCGameMode::StaticRegisterNativesAGameUsingCGameMode()
	{
	}
	UClass* Z_Construct_UClass_AGameUsingCGameMode_NoRegister()
	{
		return AGameUsingCGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGameUsingCGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameUsingCGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GameUsingC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameUsingCGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameUsingCGameMode.h" },
		{ "ModuleRelativePath", "GameUsingCGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameUsingCGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameUsingCGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameUsingCGameMode_Statics::ClassParams = {
		&AGameUsingCGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGameUsingCGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameUsingCGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameUsingCGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameUsingCGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameUsingCGameMode, 2748226287);
	template<> GAMEUSINGC_API UClass* StaticClass<AGameUsingCGameMode>()
	{
		return AGameUsingCGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameUsingCGameMode(Z_Construct_UClass_AGameUsingCGameMode, &AGameUsingCGameMode::StaticClass, TEXT("/Script/GameUsingC"), TEXT("AGameUsingCGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameUsingCGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
