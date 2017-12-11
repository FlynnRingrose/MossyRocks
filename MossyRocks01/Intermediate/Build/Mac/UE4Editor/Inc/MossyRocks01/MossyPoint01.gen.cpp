// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MossyPoint01.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMossyPoint01() {}
// Cross Module References
	MOSSYROCKS01_API UClass* Z_Construct_UClass_UMossyPoint01_NoRegister();
	MOSSYROCKS01_API UClass* Z_Construct_UClass_UMossyPoint01();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_MossyRocks01();
// End Cross Module References
	void UMossyPoint01::StaticRegisterNativesUMossyPoint01()
	{
	}
	UClass* Z_Construct_UClass_UMossyPoint01_NoRegister()
	{
		return UMossyPoint01::StaticClass();
	}
	UClass* Z_Construct_UClass_UMossyPoint01()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInstancedStaticMeshComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_MossyRocks01,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Activation Components|Activation Trigger" },
				{ "IncludePath", "MossyPoint01.h" },
				{ "ModuleRelativePath", "Public/MossyPoint01.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMossyPoint01>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMossyPoint01::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMossyPoint01, 3041815894);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMossyPoint01(Z_Construct_UClass_UMossyPoint01, &UMossyPoint01::StaticClass, TEXT("/Script/MossyRocks01"), TEXT("UMossyPoint01"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMossyPoint01);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
