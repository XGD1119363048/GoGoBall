// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoGoBall/GameMode/GoGoBallGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoGoBallGameModeBase() {}
// Cross Module References
	GOGOBALL_API UClass* Z_Construct_UClass_AGoGoBallGameModeBase_NoRegister();
	GOGOBALL_API UClass* Z_Construct_UClass_AGoGoBallGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GoGoBall();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GOGOBALL_API UClass* Z_Construct_UClass_ASpherePawnBase_NoRegister();
// End Cross Module References
	void AGoGoBallGameModeBase::StaticRegisterNativesAGoGoBallGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AGoGoBallGameModeBase_NoRegister()
	{
		return AGoGoBallGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AGoGoBallGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isEnd_MetaData[];
#endif
		static void NewProp_isEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerDieNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerDieNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentStartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentStartLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerSpherePawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerSpherePawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGoGoBallGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GoGoBall,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoGoBallGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameMode/GoGoBallGameModeBase.h" },
		{ "ModuleRelativePath", "GameMode/GoGoBallGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoGoBallGameModeBase_Statics::NewProp_isEnd_MetaData[] = {
		{ "Category", "GoGoBallGameModeBase" },
		{ "ModuleRelativePath", "GameMode/GoGoBallGameModeBase.h" },
	};
#endif
	void Z_Construct_UClass_AGoGoBallGameModeBase_Statics::NewProp_isEnd_SetBit(void* Obj)
	{
		((AGoGoBallGameModeBase*)Obj)->isEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGoGoBallGameModeBase_Statics::NewProp_isEnd = { "isEnd", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGoGoBallGameModeBase), &Z_Construct_UClass_AGoGoBallGameModeBase_Statics::NewProp_isEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGoGoBallGameModeBase_Statics::NewProp_isEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGoGoBallGameModeBase_Statics::NewProp_isEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoGoBallGameModeBase_Statics::NewProp_PlayerDieNum_MetaData[] = {
		{ "Category", "GoGoBallGameModeBase" },
		{ "ModuleRelativePath", "GameMode/GoGoBallGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGoGoBallGameModeBase_Statics::NewProp_PlayerDieNum = { "PlayerDieNum", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGoGoBallGameModeBase, PlayerDieNum), METADATA_PARAMS(Z_Construct_UClass_AGoGoBallGameModeBase_Statics::NewProp_PlayerDieNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGoGoBallGameModeBase_Statics::NewProp_PlayerDieNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoGoBallGameModeBase_Statics::NewProp_CurrentStartLocation_MetaData[] = {
		{ "Category", "CurrentStart" },
		{ "ModuleRelativePath", "GameMode/GoGoBallGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGoGoBallGameModeBase_Statics::NewProp_CurrentStartLocation = { "CurrentStartLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGoGoBallGameModeBase, CurrentStartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AGoGoBallGameModeBase_Statics::NewProp_CurrentStartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGoGoBallGameModeBase_Statics::NewProp_CurrentStartLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoGoBallGameModeBase_Statics::NewProp_PlayerSpherePawn_MetaData[] = {
		{ "Category", "PlayerPawn" },
		{ "ModuleRelativePath", "GameMode/GoGoBallGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoGoBallGameModeBase_Statics::NewProp_PlayerSpherePawn = { "PlayerSpherePawn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGoGoBallGameModeBase, PlayerSpherePawn), Z_Construct_UClass_ASpherePawnBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGoGoBallGameModeBase_Statics::NewProp_PlayerSpherePawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGoGoBallGameModeBase_Statics::NewProp_PlayerSpherePawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGoGoBallGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoGoBallGameModeBase_Statics::NewProp_isEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoGoBallGameModeBase_Statics::NewProp_PlayerDieNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoGoBallGameModeBase_Statics::NewProp_CurrentStartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoGoBallGameModeBase_Statics::NewProp_PlayerSpherePawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGoGoBallGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGoGoBallGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGoGoBallGameModeBase_Statics::ClassParams = {
		&AGoGoBallGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGoGoBallGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGoGoBallGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGoGoBallGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGoGoBallGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGoGoBallGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGoGoBallGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGoGoBallGameModeBase, 42031439);
	template<> GOGOBALL_API UClass* StaticClass<AGoGoBallGameModeBase>()
	{
		return AGoGoBallGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGoGoBallGameModeBase(Z_Construct_UClass_AGoGoBallGameModeBase, &AGoGoBallGameModeBase::StaticClass, TEXT("/Script/GoGoBall"), TEXT("AGoGoBallGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGoGoBallGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
