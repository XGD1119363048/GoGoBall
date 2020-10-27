// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOGOBALL_SpherePawnBase_generated_h
#error "SpherePawnBase.generated.h already included, missing '#pragma once' in SpherePawnBase.h"
#endif
#define GOGOBALL_SpherePawnBase_generated_h

#define GoGoBall_Source_GoGoBall_Player_SpherePawnBase_h_12_SPARSE_DATA
#define GoGoBall_Source_GoGoBall_Player_SpherePawnBase_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpeedDown); \
	DECLARE_FUNCTION(execSpeedUp); \
	DECLARE_FUNCTION(execCameraZoom); \
	DECLARE_FUNCTION(execTurn); \
	DECLARE_FUNCTION(execLookUp); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define GoGoBall_Source_GoGoBall_Player_SpherePawnBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpeedDown); \
	DECLARE_FUNCTION(execSpeedUp); \
	DECLARE_FUNCTION(execCameraZoom); \
	DECLARE_FUNCTION(execTurn); \
	DECLARE_FUNCTION(execLookUp); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define GoGoBall_Source_GoGoBall_Player_SpherePawnBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpherePawnBase(); \
	friend struct Z_Construct_UClass_ASpherePawnBase_Statics; \
public: \
	DECLARE_CLASS(ASpherePawnBase, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GoGoBall"), NO_API) \
	DECLARE_SERIALIZER(ASpherePawnBase)


#define GoGoBall_Source_GoGoBall_Player_SpherePawnBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASpherePawnBase(); \
	friend struct Z_Construct_UClass_ASpherePawnBase_Statics; \
public: \
	DECLARE_CLASS(ASpherePawnBase, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GoGoBall"), NO_API) \
	DECLARE_SERIALIZER(ASpherePawnBase)


#define GoGoBall_Source_GoGoBall_Player_SpherePawnBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpherePawnBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpherePawnBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpherePawnBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpherePawnBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpherePawnBase(ASpherePawnBase&&); \
	NO_API ASpherePawnBase(const ASpherePawnBase&); \
public:


#define GoGoBall_Source_GoGoBall_Player_SpherePawnBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpherePawnBase(ASpherePawnBase&&); \
	NO_API ASpherePawnBase(const ASpherePawnBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpherePawnBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpherePawnBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpherePawnBase)


#define GoGoBall_Source_GoGoBall_Player_SpherePawnBase_h_12_PRIVATE_PROPERTY_OFFSET
#define GoGoBall_Source_GoGoBall_Player_SpherePawnBase_h_9_PROLOG
#define GoGoBall_Source_GoGoBall_Player_SpherePawnBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoGoBall_Source_GoGoBall_Player_SpherePawnBase_h_12_PRIVATE_PROPERTY_OFFSET \
	GoGoBall_Source_GoGoBall_Player_SpherePawnBase_h_12_SPARSE_DATA \
	GoGoBall_Source_GoGoBall_Player_SpherePawnBase_h_12_RPC_WRAPPERS \
	GoGoBall_Source_GoGoBall_Player_SpherePawnBase_h_12_INCLASS \
	GoGoBall_Source_GoGoBall_Player_SpherePawnBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GoGoBall_Source_GoGoBall_Player_SpherePawnBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoGoBall_Source_GoGoBall_Player_SpherePawnBase_h_12_PRIVATE_PROPERTY_OFFSET \
	GoGoBall_Source_GoGoBall_Player_SpherePawnBase_h_12_SPARSE_DATA \
	GoGoBall_Source_GoGoBall_Player_SpherePawnBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GoGoBall_Source_GoGoBall_Player_SpherePawnBase_h_12_INCLASS_NO_PURE_DECLS \
	GoGoBall_Source_GoGoBall_Player_SpherePawnBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOGOBALL_API UClass* StaticClass<class ASpherePawnBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GoGoBall_Source_GoGoBall_Player_SpherePawnBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
