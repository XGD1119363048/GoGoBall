// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoGoBall/HitBox/JumpLocation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJumpLocation() {}
// Cross Module References
	GOGOBALL_API UClass* Z_Construct_UClass_AJumpLocation_NoRegister();
	GOGOBALL_API UClass* Z_Construct_UClass_AJumpLocation();
	GOGOBALL_API UClass* Z_Construct_UClass_AHitBoxBase();
	UPackage* Z_Construct_UPackage__Script_GoGoBall();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AJumpLocation::StaticRegisterNativesAJumpLocation()
	{
	}
	UClass* Z_Construct_UClass_AJumpLocation_NoRegister()
	{
		return AJumpLocation::StaticClass();
	}
	struct Z_Construct_UClass_AJumpLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleSystemComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleSystemComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJumpLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHitBoxBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GoGoBall,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJumpLocation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HitBox/JumpLocation.h" },
		{ "ModuleRelativePath", "HitBox/JumpLocation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJumpLocation_Statics::NewProp_UpSpeed_MetaData[] = {
		{ "Category", "UpSpeed" },
		{ "ModuleRelativePath", "HitBox/JumpLocation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJumpLocation_Statics::NewProp_UpSpeed = { "UpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJumpLocation, UpSpeed), METADATA_PARAMS(Z_Construct_UClass_AJumpLocation_Statics::NewProp_UpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJumpLocation_Statics::NewProp_UpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJumpLocation_Statics::NewProp_ParticleSystemComp_MetaData[] = {
		{ "Category", "JumpLocation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HitBox/JumpLocation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJumpLocation_Statics::NewProp_ParticleSystemComp = { "ParticleSystemComp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJumpLocation, ParticleSystemComp), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJumpLocation_Statics::NewProp_ParticleSystemComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJumpLocation_Statics::NewProp_ParticleSystemComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJumpLocation_Statics::NewProp_SceneComp_MetaData[] = {
		{ "Category", "JumpLocation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HitBox/JumpLocation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJumpLocation_Statics::NewProp_SceneComp = { "SceneComp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJumpLocation, SceneComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJumpLocation_Statics::NewProp_SceneComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJumpLocation_Statics::NewProp_SceneComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AJumpLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJumpLocation_Statics::NewProp_UpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJumpLocation_Statics::NewProp_ParticleSystemComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJumpLocation_Statics::NewProp_SceneComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJumpLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJumpLocation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AJumpLocation_Statics::ClassParams = {
		&AJumpLocation::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AJumpLocation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AJumpLocation_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AJumpLocation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJumpLocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJumpLocation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AJumpLocation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AJumpLocation, 359824305);
	template<> GOGOBALL_API UClass* StaticClass<AJumpLocation>()
	{
		return AJumpLocation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJumpLocation(Z_Construct_UClass_AJumpLocation, &AJumpLocation::StaticClass, TEXT("/Script/GoGoBall"), TEXT("AJumpLocation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJumpLocation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
