// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "WebSocketDGameModeBase.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebSocketDGameModeBase() {}
// Cross Module References
	DECORADO_API UClass* Z_Construct_UClass_AWebSocketDGameModeBase_NoRegister();
	DECORADO_API UClass* Z_Construct_UClass_AWebSocketDGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DECORADO();
// End Cross Module References
	void AWebSocketDGameModeBase::StaticRegisterNativesAWebSocketDGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AWebSocketDGameModeBase_NoRegister()
	{
		return AWebSocketDGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AWebSocketDGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_DECORADO();
			OuterClass = AWebSocketDGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900288u;


				static TCppClassTypeInfo<TCppClassTypeTraits<AWebSocketDGameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("WebSocketDGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("WebSocketDGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWebSocketDGameModeBase, 1026517990);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWebSocketDGameModeBase(Z_Construct_UClass_AWebSocketDGameModeBase, &AWebSocketDGameModeBase::StaticClass, TEXT("/Script/DECORADO"), TEXT("AWebSocketDGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWebSocketDGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
