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
#ifdef GOGOBALL_HitBoxBase_generated_h
#error "HitBoxBase.generated.h already included, missing '#pragma once' in HitBoxBase.h"
#endif
#define GOGOBALL_HitBoxBase_generated_h

#define GoGoBall_Source_GoGoBall_HitBox_HitBoxBase_h_12_SPARSE_DATA
#define GoGoBall_Source_GoGoBall_HitBox_HitBoxBase_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBeginHitSphere);


#define GoGoBall_Source_GoGoBall_HitBox_HitBoxBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBeginHitSphere);


#define GoGoBall_Source_GoGoBall_HitBox_HitBoxBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHitBoxBase(); \
	friend struct Z_Construct_UClass_AHitBoxBase_Statics; \
public: \
	DECLARE_CLASS(AHitBoxBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GoGoBall"), NO_API) \
	DECLARE_SERIALIZER(AHitBoxBase)


#define GoGoBall_Source_GoGoBall_HitBox_HitBoxBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAHitBoxBase(); \
	friend struct Z_Construct_UClass_AHitBoxBase_Statics; \
public: \
	DECLARE_CLASS(AHitBoxBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GoGoBall"), NO_API) \
	DECLARE_SERIALIZER(AHitBoxBase)


#define GoGoBall_Source_GoGoBall_HitBox_HitBoxBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHitBoxBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHitBoxBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHitBoxBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHitBoxBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHitBoxBase(AHitBoxBase&&); \
	NO_API AHitBoxBase(const AHitBoxBase&); \
public:


#define GoGoBall_Source_GoGoBall_HitBox_HitBoxBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHitBoxBase(AHitBoxBase&&); \
	NO_API AHitBoxBase(const AHitBoxBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHitBoxBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHitBoxBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHitBoxBase)


#define GoGoBall_Source_GoGoBall_HitBox_HitBoxBase_h_12_PRIVATE_PROPERTY_OFFSET
#define GoGoBall_Source_GoGoBall_HitBox_HitBoxBase_h_9_PROLOG
#define GoGoBall_Source_GoGoBall_HitBox_HitBoxBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoGoBall_Source_GoGoBall_HitBox_HitBoxBase_h_12_PRIVATE_PROPERTY_OFFSET \
	GoGoBall_Source_GoGoBall_HitBox_HitBoxBase_h_12_SPARSE_DATA \
	GoGoBall_Source_GoGoBall_HitBox_HitBoxBase_h_12_RPC_WRAPPERS \
	GoGoBall_Source_GoGoBall_HitBox_HitBoxBase_h_12_INCLASS \
	GoGoBall_Source_GoGoBall_HitBox_HitBoxBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GoGoBall_Source_GoGoBall_HitBox_HitBoxBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoGoBall_Source_GoGoBall_HitBox_HitBoxBase_h_12_PRIVATE_PROPERTY_OFFSET \
	GoGoBall_Source_GoGoBall_HitBox_HitBoxBase_h_12_SPARSE_DATA \
	GoGoBall_Source_GoGoBall_HitBox_HitBoxBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GoGoBall_Source_GoGoBall_HitBox_HitBoxBase_h_12_INCLASS_NO_PURE_DECLS \
	GoGoBall_Source_GoGoBall_HitBox_HitBoxBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOGOBALL_API UClass* StaticClass<class AHitBoxBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GoGoBall_Source_GoGoBall_HitBox_HitBoxBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
