// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoGoBall/HitBox/GateDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGateDoor() {}
// Cross Module References
	GOGOBALL_API UClass* Z_Construct_UClass_AGateDoor_NoRegister();
	GOGOBALL_API UClass* Z_Construct_UClass_AGateDoor();
	GOGOBALL_API UClass* Z_Construct_UClass_AHitBoxBase();
	UPackage* Z_Construct_UPackage__Script_GoGoBall();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AGateDoor::StaticRegisterNativesAGateDoor()
	{
	}
	UClass* Z_Construct_UClass_AGateDoor_NoRegister()
	{
		return AGateDoor::StaticClass();
	}
	struct Z_Construct_UClass_AGateDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextRenderComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextRenderComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextLevelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NextLevelName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleSystemComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleSystemComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGateDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHitBoxBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GoGoBall,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGateDoor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HitBox/GateDoor.h" },
		{ "ModuleRelativePath", "HitBox/GateDoor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGateDoor_Statics::NewProp_TextRenderComp_MetaData[] = {
		{ "Category", "NextLevelText" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HitBox/GateDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGateDoor_Statics::NewProp_TextRenderComp = { "TextRenderComp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGateDoor, TextRenderComp), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGateDoor_Statics::NewProp_TextRenderComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGateDoor_Statics::NewProp_TextRenderComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGateDoor_Statics::NewProp_NextLevelName_MetaData[] = {
		{ "Category", "NextLevel" },
		{ "ModuleRelativePath", "HitBox/GateDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGateDoor_Statics::NewProp_NextLevelName = { "NextLevelName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGateDoor, NextLevelName), METADATA_PARAMS(Z_Construct_UClass_AGateDoor_Statics::NewProp_NextLevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGateDoor_Statics::NewProp_NextLevelName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGateDoor_Statics::NewProp_ParticleSystemComp_MetaData[] = {
		{ "Category", "GateDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HitBox/GateDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGateDoor_Statics::NewProp_ParticleSystemComp = { "ParticleSystemComp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGateDoor, ParticleSystemComp), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGateDoor_Statics::NewProp_ParticleSystemComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGateDoor_Statics::NewProp_ParticleSystemComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGateDoor_Statics::NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "GateDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HitBox/GateDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGateDoor_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGateDoor, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGateDoor_Statics::NewProp_StaticMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGateDoor_Statics::NewProp_StaticMeshComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGateDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGateDoor_Statics::NewProp_TextRenderComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGateDoor_Statics::NewProp_NextLevelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGateDoor_Statics::NewProp_ParticleSystemComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGateDoor_Statics::NewProp_StaticMeshComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGateDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGateDoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGateDoor_Statics::ClassParams = {
		&AGateDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGateDoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGateDoor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGateDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGateDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGateDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGateDoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGateDoor, 103364758);
	template<> GOGOBALL_API UClass* StaticClass<AGateDoor>()
	{
		return AGateDoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGateDoor(Z_Construct_UClass_AGateDoor, &AGateDoor::StaticClass, TEXT("/Script/GoGoBall"), TEXT("AGateDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGateDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
