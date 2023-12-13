// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleEventSubsystem_init() {}
	SIMPLEEVENTSUBSYSTEM_API UFunction* Z_Construct_UDelegateFunction_SimpleEventSubsystem_SimpleEventManagetDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SimpleEventSubsystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SimpleEventSubsystem()
	{
		if (!Z_Registration_Info_UPackage__Script_SimpleEventSubsystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SimpleEventSubsystem_SimpleEventManagetDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SimpleEventSubsystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xBB6EB06B,
				0x4709A027,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SimpleEventSubsystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SimpleEventSubsystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SimpleEventSubsystem(Z_Construct_UPackage__Script_SimpleEventSubsystem, TEXT("/Script/SimpleEventSubsystem"), Z_Registration_Info_UPackage__Script_SimpleEventSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xBB6EB06B, 0x4709A027));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
