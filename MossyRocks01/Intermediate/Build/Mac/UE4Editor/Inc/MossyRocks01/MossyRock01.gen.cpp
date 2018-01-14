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
	MOSSYROCKS01_API UFunction* Z_Construct_UFunction_AMossyRock01_SpawnNewMoss();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	MOSSYROCKS01_API UClass* Z_Construct_UClass_UMossyStaticMesh01_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AMossyRock01::StaticRegisterNativesAMossyRock01()
	{
		UClass* Class = AMossyRock01::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnNewMoss", (Native)&AMossyRock01::execSpawnNewMoss },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AMossyRock01_SpawnNewMoss()
	{
		struct MossyRock01_eventSpawnNewMoss_Parms
		{
			FTransform SpawnLocation;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "SpawnLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MossyRock01_eventSpawnNewMoss_Parms, SpawnLocation), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnLocation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Spawning" },
				{ "ModuleRelativePath", "Public/MossyRock01.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMossyRock01, "SpawnNewMoss", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(MossyRock01_eventSpawnNewMoss_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
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
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AMossyRock01_SpawnNewMoss, "SpawnNewMoss" }, // 1584633891
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "MossyRock01.h" },
				{ "ModuleRelativePath", "Public/MossyRock01.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpMossyStaticMesh_MetaData[] = {
				{ "Category", "MyBPForCPP" },
				{ "ModuleRelativePath", "Public/MossyRock01.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpMossyStaticMesh = { UE4CodeGen_Private::EPropertyClass::Class, "bpMossyStaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000010015, 1, nullptr, STRUCT_OFFSET(AMossyRock01, bpMossyStaticMesh), Z_Construct_UClass_UMossyStaticMesh01_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_bpMossyStaticMesh_MetaData, ARRAY_COUNT(NewProp_bpMossyStaticMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rock_MetaData[] = {
				{ "Category", "MossyRock01" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MossyRock01.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Rock = { UE4CodeGen_Private::EPropertyClass::Object, "Rock", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008001d, 1, nullptr, STRUCT_OFFSET(AMossyRock01, Rock), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Rock_MetaData, ARRAY_COUNT(NewProp_Rock_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpMossyStaticMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rock,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMossyRock01>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMossyRock01::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AMossyRock01, 2535696827);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMossyRock01(Z_Construct_UClass_AMossyRock01, &AMossyRock01::StaticClass, TEXT("/Script/MossyRocks01"), TEXT("AMossyRock01"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMossyRock01);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
