// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MossyInstancedStaticMesh01.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMossyInstancedStaticMesh01() {}
// Cross Module References
	MOSSYROCKS01_API UClass* Z_Construct_UClass_UMossyInstancedStaticMesh01_NoRegister();
	MOSSYROCKS01_API UClass* Z_Construct_UClass_UMossyInstancedStaticMesh01();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_MossyRocks01();
// End Cross Module References
	void UMossyInstancedStaticMesh01::StaticRegisterNativesUMossyInstancedStaticMesh01()
	{
	}
	UClass* Z_Construct_UClass_UMossyInstancedStaticMesh01_NoRegister()
	{
		return UMossyInstancedStaticMesh01::StaticClass();
	}
	UClass* Z_Construct_UClass_UMossyInstancedStaticMesh01()
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
				{ "IncludePath", "MossyInstancedStaticMesh01.h" },
				{ "ModuleRelativePath", "Public/MossyInstancedStaticMesh01.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMossyInstancedStaticMesh01>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMossyInstancedStaticMesh01::StaticClass,
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
	IMPLEMENT_CLASS(UMossyInstancedStaticMesh01, 3039321047);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMossyInstancedStaticMesh01(Z_Construct_UClass_UMossyInstancedStaticMesh01, &UMossyInstancedStaticMesh01::StaticClass, TEXT("/Script/MossyRocks01"), TEXT("UMossyInstancedStaticMesh01"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMossyInstancedStaticMesh01);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
