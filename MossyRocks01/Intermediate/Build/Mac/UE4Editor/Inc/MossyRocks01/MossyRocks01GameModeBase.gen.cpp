// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MossyRocks01GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMossyRocks01GameModeBase() {}
// Cross Module References
	MOSSYROCKS01_API UClass* Z_Construct_UClass_AMossyRocks01GameModeBase_NoRegister();
	MOSSYROCKS01_API UClass* Z_Construct_UClass_AMossyRocks01GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MossyRocks01();
// End Cross Module References
	void AMossyRocks01GameModeBase::StaticRegisterNativesAMossyRocks01GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AMossyRocks01GameModeBase_NoRegister()
	{
		return AMossyRocks01GameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AMossyRocks01GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_MossyRocks01,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "MossyRocks01GameModeBase.h" },
				{ "ModuleRelativePath", "MossyRocks01GameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMossyRocks01GameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMossyRocks01GameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
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
	IMPLEMENT_CLASS(AMossyRocks01GameModeBase, 457056828);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMossyRocks01GameModeBase(Z_Construct_UClass_AMossyRocks01GameModeBase, &AMossyRocks01GameModeBase::StaticClass, TEXT("/Script/MossyRocks01"), TEXT("AMossyRocks01GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMossyRocks01GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
