// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleEventSubsystem/Public/SimpleEventBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleEventBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SIMPLEEVENTSUBSYSTEM_API UClass* Z_Construct_UClass_USimpleEventBase();
	SIMPLEEVENTSUBSYSTEM_API UClass* Z_Construct_UClass_USimpleEventBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleEventSubsystem();
// End Cross Module References
	void USimpleEventBase::StaticRegisterNativesUSimpleEventBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleEventBase);
	UClass* Z_Construct_UClass_USimpleEventBase_NoRegister()
	{
		return USimpleEventBase::StaticClass();
	}
	struct Z_Construct_UClass_USimpleEventBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleEventBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleEventSubsystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleEventBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleEventBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Events should be created by inheriting from this class\n */" },
#endif
		{ "IncludePath", "SimpleEventBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimpleEventBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Events should be created by inheriting from this class" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleEventBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleEventBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleEventBase_Statics::ClassParams = {
		&USimpleEventBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleEventBase_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleEventBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USimpleEventBase()
	{
		if (!Z_Registration_Info_UClass_USimpleEventBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleEventBase.OuterSingleton, Z_Construct_UClass_USimpleEventBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleEventBase.OuterSingleton;
	}
	template<> SIMPLEEVENTSUBSYSTEM_API UClass* StaticClass<USimpleEventBase>()
	{
		return USimpleEventBase::StaticClass();
	}
	USimpleEventBase::USimpleEventBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleEventBase);
	USimpleEventBase::~USimpleEventBase() {}
	struct Z_CompiledInDeferFile_FID_Users_Toshi_Documents_GitHub_Persiko_Proto2_Plugins_SimpleEventSubsystem_Source_SimpleEventSubsystem_Public_SimpleEventBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Toshi_Documents_GitHub_Persiko_Proto2_Plugins_SimpleEventSubsystem_Source_SimpleEventSubsystem_Public_SimpleEventBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleEventBase, USimpleEventBase::StaticClass, TEXT("USimpleEventBase"), &Z_Registration_Info_UClass_USimpleEventBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleEventBase), 932658053U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Toshi_Documents_GitHub_Persiko_Proto2_Plugins_SimpleEventSubsystem_Source_SimpleEventSubsystem_Public_SimpleEventBase_h_2430348938(TEXT("/Script/SimpleEventSubsystem"),
		Z_CompiledInDeferFile_FID_Users_Toshi_Documents_GitHub_Persiko_Proto2_Plugins_SimpleEventSubsystem_Source_SimpleEventSubsystem_Public_SimpleEventBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Toshi_Documents_GitHub_Persiko_Proto2_Plugins_SimpleEventSubsystem_Source_SimpleEventSubsystem_Public_SimpleEventBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
