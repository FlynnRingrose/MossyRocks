// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MossyRock01.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMossyRock01() {}
// Cross Module References
	MOSSYROCKS01_API UClass* Z_Construct_UClass_AMossyRock01_NoRegister();
	MOSSYROCKS01_API UClass* Z_Construct_UClass_AMossyRock01();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_MossyRocks01();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AMossyRock01::StaticRegisterNativesAMossyRock01()
	{
	}
	UClass* Z_Construct_UClass_AMossyRock01_NoRegister()
	{
		return AMossyRock01::StaticClass();
	}
	UClass* Z_Construct_UClass_AMossyRock01()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_MossyRocks01,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "MossyRock01.h" },
				{ "ModuleRelativePath", "Public/MossyRock01.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rock_MetaData[] = {
				{ "Category", "MossyRock01" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MossyRock01.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Rock = { UE4CodeGen_Private::EPropertyClass::Object, "Rock", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008001d, 1, nullptr, STRUCT_OFFSET(AMossyRock01, Rock), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Rock_MetaData, ARRAY_COUNT(NewProp_Rock_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rock,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMossyRock01>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMossyRock01::StaticClass,
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
	IMPLEMENT_CLASS(AMossyRock01, 4130987415);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMossyRock01(Z_Construct_UClass_AMossyRock01, &AMossyRock01::StaticClass, TEXT("/Script/MossyRocks01"), TEXT("AMossyRock01"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMossyRock01);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
