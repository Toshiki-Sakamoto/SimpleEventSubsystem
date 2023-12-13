// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleEventSubsystem/Public/SimpleEvenManager.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleEvenManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	SIMPLEEVENTSUBSYSTEM_API UClass* Z_Construct_UClass_USimpleEventBase_NoRegister();
	SIMPLEEVENTSUBSYSTEM_API UClass* Z_Construct_UClass_USimpleEventManager();
	SIMPLEEVENTSUBSYSTEM_API UClass* Z_Construct_UClass_USimpleEventManager_NoRegister();
	SIMPLEEVENTSUBSYSTEM_API UFunction* Z_Construct_UDelegateFunction_SimpleEventSubsystem_SimpleEventManagetDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SimpleEventSubsystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SimpleEventSubsystem_SimpleEventManagetDelegate__DelegateSignature_Statics
	{
		struct _Script_SimpleEventSubsystem_eventSimpleEventManagetDelegate_Parms
		{
			UObject* Payload;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SimpleEventSubsystem_SimpleEventManagetDelegate__DelegateSignature_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SimpleEventSubsystem_eventSimpleEventManagetDelegate_Parms, Payload), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SimpleEventSubsystem_SimpleEventManagetDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SimpleEventSubsystem_SimpleEventManagetDelegate__DelegateSignature_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SimpleEventSubsystem_SimpleEventManagetDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event Delegate : Only one parameter\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleEvenManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event Delegate : Only one parameter" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SimpleEventSubsystem_SimpleEventManagetDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SimpleEventSubsystem, nullptr, "SimpleEventManagetDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SimpleEventSubsystem_SimpleEventManagetDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleEventSubsystem_SimpleEventManagetDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SimpleEventSubsystem_SimpleEventManagetDelegate__DelegateSignature_Statics::_Script_SimpleEventSubsystem_eventSimpleEventManagetDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleEventSubsystem_SimpleEventManagetDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SimpleEventSubsystem_SimpleEventManagetDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SimpleEventSubsystem_SimpleEventManagetDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SimpleEventSubsystem_SimpleEventManagetDelegate__DelegateSignature_Statics::_Script_SimpleEventSubsystem_eventSimpleEventManagetDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SimpleEventSubsystem_SimpleEventManagetDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SimpleEventSubsystem_SimpleEventManagetDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSimpleEventManagetDelegate_DelegateWrapper(const FScriptDelegate& SimpleEventManagetDelegate, UObject* Payload)
{
	struct _Script_SimpleEventSubsystem_eventSimpleEventManagetDelegate_Parms
	{
		UObject* Payload;
	};
	_Script_SimpleEventSubsystem_eventSimpleEventManagetDelegate_Parms Parms;
	Parms.Payload=Payload;
	SimpleEventManagetDelegate.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(USimpleEventManager::execRemoveListener)
	{
		P_GET_OBJECT(UObject,Z_Param_Listener);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveListener(Z_Param_Listener);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleEventManager::execAddActorListener)
	{
		P_GET_OBJECT(AActor,Z_Param_Listener);
		P_GET_OBJECT(UClass,Z_Param_EventType);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddActorListener(Z_Param_Listener,Z_Param_EventType,FSimpleEventManagetDelegate(Z_Param_Delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleEventManager::execAddListener)
	{
		P_GET_OBJECT(UObject,Z_Param_Listener);
		P_GET_OBJECT(UClass,Z_Param_EventType);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddListener(Z_Param_Listener,Z_Param_EventType,FSimpleEventManagetDelegate(Z_Param_Delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleEventManager::execTrigger)
	{
		P_GET_OBJECT(USimpleEventBase,Z_Param_Payload);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Trigger(Z_Param_Payload);
		P_NATIVE_END;
	}
	void USimpleEventManager::StaticRegisterNativesUSimpleEventManager()
	{
		UClass* Class = USimpleEventManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddActorListener", &USimpleEventManager::execAddActorListener },
			{ "AddListener", &USimpleEventManager::execAddListener },
			{ "RemoveListener", &USimpleEventManager::execRemoveListener },
			{ "Trigger", &USimpleEventManager::execTrigger },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleEventManager_AddActorListener_Statics
	{
		struct SimpleEventManager_eventAddActorListener_Parms
		{
			AActor* Listener;
			TSubclassOf<USimpleEventBase>  EventType;
			FScriptDelegate Delegate;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Listener;
		static const UECodeGen_Private::FClassPropertyParams NewProp_EventType;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleEventManager_AddActorListener_Statics::NewProp_Listener = { "Listener", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleEventManager_eventAddActorListener_Parms, Listener), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USimpleEventManager_AddActorListener_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleEventManager_eventAddActorListener_Parms, EventType), Z_Construct_UClass_UClass, Z_Construct_UClass_USimpleEventBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USimpleEventManager_AddActorListener_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleEventManager_eventAddActorListener_Parms, Delegate), Z_Construct_UDelegateFunction_SimpleEventSubsystem_SimpleEventManagetDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1589896883
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleEventManager_AddActorListener_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleEventManager_AddActorListener_Statics::NewProp_Listener,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleEventManager_AddActorListener_Statics::NewProp_EventType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleEventManager_AddActorListener_Statics::NewProp_Delegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleEventManager_AddActorListener_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleEvent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \"OnDestroy\" automatically calls Remove.\n" },
#endif
		{ "DefaultToSelf", "Listener" },
		{ "ModuleRelativePath", "Public/SimpleEvenManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\"OnDestroy\" automatically calls Remove." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleEventManager_AddActorListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleEventManager, nullptr, "AddActorListener", nullptr, nullptr, Z_Construct_UFunction_USimpleEventManager_AddActorListener_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleEventManager_AddActorListener_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleEventManager_AddActorListener_Statics::SimpleEventManager_eventAddActorListener_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleEventManager_AddActorListener_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleEventManager_AddActorListener_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleEventManager_AddActorListener_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleEventManager_AddActorListener_Statics::SimpleEventManager_eventAddActorListener_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleEventManager_AddActorListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleEventManager_AddActorListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleEventManager_AddListener_Statics
	{
		struct SimpleEventManager_eventAddListener_Parms
		{
			UObject* Listener;
			TSubclassOf<USimpleEventBase>  EventType;
			FScriptDelegate Delegate;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Listener;
		static const UECodeGen_Private::FClassPropertyParams NewProp_EventType;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleEventManager_AddListener_Statics::NewProp_Listener = { "Listener", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleEventManager_eventAddListener_Parms, Listener), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USimpleEventManager_AddListener_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleEventManager_eventAddListener_Parms, EventType), Z_Construct_UClass_UClass, Z_Construct_UClass_USimpleEventBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USimpleEventManager_AddListener_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleEventManager_eventAddListener_Parms, Delegate), Z_Construct_UDelegateFunction_SimpleEventSubsystem_SimpleEventManagetDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1589896883
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleEventManager_AddListener_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleEventManager_AddListener_Statics::NewProp_Listener,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleEventManager_AddListener_Statics::NewProp_EventType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleEventManager_AddListener_Statics::NewProp_Delegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleEventManager_AddListener_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleEvent" },
		{ "DefaultToSelf", "Listener" },
		{ "ModuleRelativePath", "Public/SimpleEvenManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleEventManager_AddListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleEventManager, nullptr, "AddListener", nullptr, nullptr, Z_Construct_UFunction_USimpleEventManager_AddListener_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleEventManager_AddListener_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleEventManager_AddListener_Statics::SimpleEventManager_eventAddListener_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleEventManager_AddListener_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleEventManager_AddListener_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleEventManager_AddListener_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleEventManager_AddListener_Statics::SimpleEventManager_eventAddListener_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleEventManager_AddListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleEventManager_AddListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleEventManager_RemoveListener_Statics
	{
		struct SimpleEventManager_eventRemoveListener_Parms
		{
			UObject* Listener;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Listener;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleEventManager_RemoveListener_Statics::NewProp_Listener = { "Listener", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleEventManager_eventRemoveListener_Parms, Listener), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleEventManager_RemoveListener_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleEventManager_RemoveListener_Statics::NewProp_Listener,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleEventManager_RemoveListener_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleEvent" },
		{ "DefaultToSelf", "Listener" },
		{ "ModuleRelativePath", "Public/SimpleEvenManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleEventManager_RemoveListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleEventManager, nullptr, "RemoveListener", nullptr, nullptr, Z_Construct_UFunction_USimpleEventManager_RemoveListener_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleEventManager_RemoveListener_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleEventManager_RemoveListener_Statics::SimpleEventManager_eventRemoveListener_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleEventManager_RemoveListener_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleEventManager_RemoveListener_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleEventManager_RemoveListener_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleEventManager_RemoveListener_Statics::SimpleEventManager_eventRemoveListener_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleEventManager_RemoveListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleEventManager_RemoveListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleEventManager_Trigger_Statics
	{
		struct SimpleEventManager_eventTrigger_Parms
		{
			USimpleEventBase* Payload;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Payload;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleEventManager_Trigger_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleEventManager_eventTrigger_Parms, Payload), Z_Construct_UClass_USimpleEventBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleEventManager_Trigger_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleEventManager_eventTrigger_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleEventManager_Trigger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleEventManager_eventTrigger_Parms), &Z_Construct_UFunction_USimpleEventManager_Trigger_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleEventManager_Trigger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleEventManager_Trigger_Statics::NewProp_Payload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleEventManager_Trigger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleEventManager_Trigger_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleEvent" },
		{ "ModuleRelativePath", "Public/SimpleEvenManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleEventManager_Trigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleEventManager, nullptr, "Trigger", nullptr, nullptr, Z_Construct_UFunction_USimpleEventManager_Trigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleEventManager_Trigger_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleEventManager_Trigger_Statics::SimpleEventManager_eventTrigger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleEventManager_Trigger_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleEventManager_Trigger_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleEventManager_Trigger_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleEventManager_Trigger_Statics::SimpleEventManager_eventTrigger_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleEventManager_Trigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleEventManager_Trigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleEventManager);
	UClass* Z_Construct_UClass_USimpleEventManager_NoRegister()
	{
		return USimpleEventManager::StaticClass();
	}
	struct Z_Construct_UClass_USimpleEventManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleEventManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleEventSubsystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleEventManager_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleEventManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleEventManager_AddActorListener, "AddActorListener" }, // 3467264603
		{ &Z_Construct_UFunction_USimpleEventManager_AddListener, "AddListener" }, // 2395789233
		{ &Z_Construct_UFunction_USimpleEventManager_RemoveListener, "RemoveListener" }, // 91516824
		{ &Z_Construct_UFunction_USimpleEventManager_Trigger, "Trigger" }, // 980187654
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleEventManager_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleEventManager_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Subsystem that calls events with class as type.\n * Zero dependencies between classes\n *\n * [[IMPORTANT]]\n * You are responsible for your own destruction of subscriptions.\n * Access violations will not be considered. Better to drop it.\n */" },
#endif
		{ "IncludePath", "SimpleEvenManager.h" },
		{ "ModuleRelativePath", "Public/SimpleEvenManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Subsystem that calls events with class as type.\nZero dependencies between classes\n\n[[IMPORTANT]]\nYou are responsible for your own destruction of subscriptions.\nAccess violations will not be considered. Better to drop it." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleEventManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleEventManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleEventManager_Statics::ClassParams = {
		&USimpleEventManager::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleEventManager_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleEventManager_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USimpleEventManager()
	{
		if (!Z_Registration_Info_UClass_USimpleEventManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleEventManager.OuterSingleton, Z_Construct_UClass_USimpleEventManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleEventManager.OuterSingleton;
	}
	template<> SIMPLEEVENTSUBSYSTEM_API UClass* StaticClass<USimpleEventManager>()
	{
		return USimpleEventManager::StaticClass();
	}
	USimpleEventManager::USimpleEventManager() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleEventManager);
	USimpleEventManager::~USimpleEventManager() {}
	struct Z_CompiledInDeferFile_FID_Users_Toshi_Documents_GitHub_Persiko_Proto2_Plugins_SimpleEventSubsystem_Source_SimpleEventSubsystem_Public_SimpleEvenManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Toshi_Documents_GitHub_Persiko_Proto2_Plugins_SimpleEventSubsystem_Source_SimpleEventSubsystem_Public_SimpleEvenManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleEventManager, USimpleEventManager::StaticClass, TEXT("USimpleEventManager"), &Z_Registration_Info_UClass_USimpleEventManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleEventManager), 1478211393U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Toshi_Documents_GitHub_Persiko_Proto2_Plugins_SimpleEventSubsystem_Source_SimpleEventSubsystem_Public_SimpleEvenManager_h_2063470428(TEXT("/Script/SimpleEventSubsystem"),
		Z_CompiledInDeferFile_FID_Users_Toshi_Documents_GitHub_Persiko_Proto2_Plugins_SimpleEventSubsystem_Source_SimpleEventSubsystem_Public_SimpleEvenManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Toshi_Documents_GitHub_Persiko_Proto2_Plugins_SimpleEventSubsystem_Source_SimpleEventSubsystem_Public_SimpleEvenManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
