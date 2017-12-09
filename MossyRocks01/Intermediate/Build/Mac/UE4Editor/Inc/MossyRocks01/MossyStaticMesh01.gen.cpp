// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MossyStaticMesh01.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMossyStaticMesh01() {}
// Cross Module References
	MOSSYROCKS01_API UClass* Z_Construct_UClass_UMossyStaticMesh01_NoRegister();
	MOSSYROCKS01_API UClass* Z_Construct_UClass_UMossyStaticMesh01();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_MossyRocks01();
// End Cross Module References
	void UMossyStaticMesh01::StaticRegisterNativesUMossyStaticMesh01()
	{
	}
	UClass* Z_Construct_UClass_UMossyStaticMesh01_NoRegister()
	{
		return UMossyStaticMesh01::StaticClass();
	}
	UClass* Z_Construct_UClass_UMossyStaticMesh01()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_MossyRocks01,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object Activation Components|Activation Trigger" },
				{ "IncludePath", "MossyStaticMesh01.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/MossyStaticMesh01.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMossyStaticMesh01>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMossyStaticMesh01::StaticClass,
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
	IMPLEMENT_CLASS(UMossyStaticMesh01, 3676612802);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMossyStaticMesh01(Z_Construct_UClass_UMossyStaticMesh01, &UMossyStaticMesh01::StaticClass, TEXT("/Script/MossyRocks01"), TEXT("UMossyStaticMesh01"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMossyStaticMesh01);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
