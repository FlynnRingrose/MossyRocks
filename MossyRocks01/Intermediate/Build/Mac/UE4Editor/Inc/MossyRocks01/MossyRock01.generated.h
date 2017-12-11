// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FKey;
#ifdef MOSSYROCKS01_MossyRock01_generated_h
#error "MossyRock01.generated.h already included, missing '#pragma once' in MossyRock01.h"
#endif
#define MOSSYROCKS01_MossyRock01_generated_h

#define MossyRocks01_Source_MossyRocks01_Public_MossyRock01_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSelected) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ClickedActor); \
		P_GET_STRUCT(FKey,Z_Param_ButtonPressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnSelected(Z_Param_ClickedActor,Z_Param_ButtonPressed); \
		P_NATIVE_END; \
	}


#define MossyRocks01_Source_MossyRocks01_Public_MossyRock01_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSelected) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ClickedActor); \
		P_GET_STRUCT(FKey,Z_Param_ButtonPressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnSelected(Z_Param_ClickedActor,Z_Param_ButtonPressed); \
		P_NATIVE_END; \
	}


#define MossyRocks01_Source_MossyRocks01_Public_MossyRock01_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMossyRock01(); \
	friend MOSSYROCKS01_API class UClass* Z_Construct_UClass_AMossyRock01(); \
public: \
	DECLARE_CLASS(AMossyRock01, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MossyRocks01"), NO_API) \
	DECLARE_SERIALIZER(AMossyRock01) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MossyRocks01_Source_MossyRocks01_Public_MossyRock01_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAMossyRock01(); \
	friend MOSSYROCKS01_API class UClass* Z_Construct_UClass_AMossyRock01(); \
public: \
	DECLARE_CLASS(AMossyRock01, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MossyRocks01"), NO_API) \
	DECLARE_SERIALIZER(AMossyRock01) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MossyRocks01_Source_MossyRocks01_Public_MossyRock01_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMossyRock01(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMossyRock01) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMossyRock01); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMossyRock01); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMossyRock01(AMossyRock01&&); \
	NO_API AMossyRock01(const AMossyRock01&); \
public:


#define MossyRocks01_Source_MossyRocks01_Public_MossyRock01_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMossyRock01(AMossyRock01&&); \
	NO_API AMossyRock01(const AMossyRock01&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMossyRock01); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMossyRock01); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMossyRock01)


#define MossyRocks01_Source_MossyRocks01_Public_MossyRock01_h_17_PRIVATE_PROPERTY_OFFSET
#define MossyRocks01_Source_MossyRocks01_Public_MossyRock01_h_14_PROLOG
#define MossyRocks01_Source_MossyRocks01_Public_MossyRock01_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MossyRocks01_Source_MossyRocks01_Public_MossyRock01_h_17_PRIVATE_PROPERTY_OFFSET \
	MossyRocks01_Source_MossyRocks01_Public_MossyRock01_h_17_RPC_WRAPPERS \
	MossyRocks01_Source_MossyRocks01_Public_MossyRock01_h_17_INCLASS \
	MossyRocks01_Source_MossyRocks01_Public_MossyRock01_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MossyRocks01_Source_MossyRocks01_Public_MossyRock01_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MossyRocks01_Source_MossyRocks01_Public_MossyRock01_h_17_PRIVATE_PROPERTY_OFFSET \
	MossyRocks01_Source_MossyRocks01_Public_MossyRock01_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	MossyRocks01_Source_MossyRocks01_Public_MossyRock01_h_17_INCLASS_NO_PURE_DECLS \
	MossyRocks01_Source_MossyRocks01_Public_MossyRock01_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MossyRocks01_Source_MossyRocks01_Public_MossyRock01_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
