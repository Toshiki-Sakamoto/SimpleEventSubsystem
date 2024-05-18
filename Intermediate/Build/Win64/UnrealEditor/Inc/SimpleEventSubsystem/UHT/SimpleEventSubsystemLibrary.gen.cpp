// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleEventSubsystem/Public/SimpleEventSubsystemLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleEventSubsystemLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	SIMPLEEVENTSUBSYSTEM_API UClass* Z_Construct_UClass_USimpleEventBase_NoRegister();
	SIMPLEEVENTSUBSYSTEM_API UClass* Z_Construct_UClass_USimpleEventSubsystemLibrary();
	SIMPLEEVENTSUBSYSTEM_API UClass* Z_Construct_UClass_USimpleEventSubsystemLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleEventSubsystem();
// End Cross Module References
	DEFINE_FUNCTION(USimpleEventSubsystemLibrary::execMakeSimpleEvent)
	{
		P_GET_OBJECT(UClass,Z_Param_Event);
		P_GET_OBJECT_REF(USimpleEventBase,Z_Param_Out_CreatedEventInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleEventSubsystemLibrary::MakeSimpleEvent(Z_Param_Event,Z_Param_Out_CreatedEventInstance);
		P_NATIVE_END;
	}
	void USimpleEventSubsystemLibrary::StaticRegisterNativesUSimpleEventSubsystemLibrary()
	{
		UClass* Class = USimpleEventSubsystemLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MakeSimpleEvent", &USimpleEventSubsystemLibrary::execMakeSimpleEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleEventSubsystemLibrary_MakeSimpleEvent_Statics
	{
		struct SimpleEventSubsystemLibrary_eventMakeSimpleEvent_Parms
		{
			const TSubclassOf<USimpleEventBase>  Event;
			USimpleEventBase* CreatedEventInstance;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Event;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedEventInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleEventSubsystemLibrary_MakeSimpleEvent_Statics::NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USimpleEventSubsystemLibrary_MakeSimpleEvent_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleEventSubsystemLibrary_eventMakeSimpleEvent_Parms, Event), Z_Construct_UClass_UClass, Z_Construct_UClass_USimpleEventBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleEventSubsystemLibrary_MakeSimpleEvent_Statics::NewProp_Event_MetaData), Z_Construct_UFunction_USimpleEventSubsystemLibrary_MakeSimpleEvent_Statics::NewProp_Event_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleEventSubsystemLibrary_MakeSimpleEvent_Statics::NewProp_CreatedEventInstance = { "CreatedEventInstance", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleEventSubsystemLibrary_eventMakeSimpleEvent_Parms, CreatedEventInstance), Z_Construct_UClass_USimpleEventBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleEventSubsystemLibrary_MakeSimpleEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleEventSubsystemLibrary_MakeSimpleEvent_Statics::NewProp_Event,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleEventSubsystemLibrary_MakeSimpleEvent_Statics::NewProp_CreatedEventInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleEventSubsystemLibrary_MakeSimpleEvent_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "SimpleEvent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Creates a FSimpleEventBase */" },
#endif
		{ "ModuleRelativePath", "Public/SimpleEventSubsystemLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a FSimpleEventBase" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleEventSubsystemLibrary_MakeSimpleEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleEventSubsystemLibrary, nullptr, "MakeSimpleEvent", nullptr, nullptr, Z_Construct_UFunction_USimpleEventSubsystemLibrary_MakeSimpleEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleEventSubsystemLibrary_MakeSimpleEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleEventSubsystemLibrary_MakeSimpleEvent_Statics::SimpleEventSubsystemLibrary_eventMakeSimpleEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleEventSubsystemLibrary_MakeSimpleEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleEventSubsystemLibrary_MakeSimpleEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleEventSubsystemLibrary_MakeSimpleEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleEventSubsystemLibrary_MakeSimpleEvent_Statics::SimpleEventSubsystemLibrary_eventMakeSimpleEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleEventSubsystemLibrary_MakeSimpleEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleEventSubsystemLibrary_MakeSimpleEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleEventSubsystemLibrary);
	UClass* Z_Construct_UClass_USimpleEventSubsystemLibrary_NoRegister()
	{
		return USimpleEventSubsystemLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USimpleEventSubsystemLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleEventSubsystemLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleEventSubsystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleEventSubsystemLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleEventSubsystemLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleEventSubsystemLibrary_MakeSimpleEvent, "MakeSimpleEvent" }, // 3750035729
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleEventSubsystemLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleEventSubsystemLibrary_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Simple Event BP Function Library\n */" },
#endif
		{ "IncludePath", "SimpleEventSubsystemLibrary.h" },
		{ "ModuleRelativePath", "Public/SimpleEventSubsystemLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple Event BP Function Library" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleEventSubsystemLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleEventSubsystemLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleEventSubsystemLibrary_Statics::ClassParams = {
		&USimpleEventSubsystemLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleEventSubsystemLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleEventSubsystemLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USimpleEventSubsystemLibrary()
	{
		if (!Z_Registration_Info_UClass_USimpleEventSubsystemLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleEventSubsystemLibrary.OuterSingleton, Z_Construct_UClass_USimpleEventSubsystemLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleEventSubsystemLibrary.OuterSingleton;
	}
	template<> SIMPLEEVENTSUBSYSTEM_API UClass* StaticClass<USimpleEventSubsystemLibrary>()
	{
		return USimpleEventSubsystemLibrary::StaticClass();
	}
	USimpleEventSubsystemLibrary::USimpleEventSubsystemLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleEventSubsystemLibrary);
	USimpleEventSubsystemLibrary::~USimpleEventSubsystemLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_Toshi_Documents_GitHub_Persiko_Proto2_Plugins_SimpleEventSubsystem_Source_SimpleEventSubsystem_Public_SimpleEventSubsystemLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Toshi_Documents_GitHub_Persiko_Proto2_Plugins_SimpleEventSubsystem_Source_SimpleEventSubsystem_Public_SimpleEventSubsystemLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleEventSubsystemLibrary, USimpleEventSubsystemLibrary::StaticClass, TEXT("USimpleEventSubsystemLibrary"), &Z_Registration_Info_UClass_USimpleEventSubsystemLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleEventSubsystemLibrary), 453641734U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Toshi_Documents_GitHub_Persiko_Proto2_Plugins_SimpleEventSubsystem_Source_SimpleEventSubsystem_Public_SimpleEventSubsystemLibrary_h_948589304(TEXT("/Script/SimpleEventSubsystem"),
		Z_CompiledInDeferFile_FID_Users_Toshi_Documents_GitHub_Persiko_Proto2_Plugins_SimpleEventSubsystem_Source_SimpleEventSubsystem_Public_SimpleEventSubsystemLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Toshi_Documents_GitHub_Persiko_Proto2_Plugins_SimpleEventSubsystem_Source_SimpleEventSubsystem_Public_SimpleEventSubsystemLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
