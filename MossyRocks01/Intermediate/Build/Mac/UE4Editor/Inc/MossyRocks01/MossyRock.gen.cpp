// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MossyRock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMossyRock() {}
// Cross Module References
	MOSSYROCKS01_API UClass* Z_Construct_UClass_AMossyRock_NoRegister();
	MOSSYROCKS01_API UClass* Z_Construct_UClass_AMossyRock();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MossyRocks01();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AMossyRock::StaticRegisterNativesAMossyRock()
	{
	}
	UClass* Z_Construct_UClass_AMossyRock_NoRegister()
	{
		return AMossyRock::StaticClass();
	}
	UClass* Z_Construct_UClass_AMossyRock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_MossyRocks01,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "MossyRock.h" },
				{ "ModuleRelativePath", "Public/MossyRock.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rock_MetaData[] = {
				{ "Category", "MossyRock" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MossyRock.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Rock = { UE4CodeGen_Private::EPropertyClass::Object, "Rock", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008001d, 1, nullptr, STRUCT_OFFSET(AMossyRock, Rock), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Rock_MetaData, ARRAY_COUNT(NewProp_Rock_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rock,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMossyRock>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMossyRock::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMossyRock, 1460877214);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMossyRock(Z_Construct_UClass_AMossyRock, &AMossyRock::StaticClass, TEXT("/Script/MossyRocks01"), TEXT("AMossyRock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMossyRock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
