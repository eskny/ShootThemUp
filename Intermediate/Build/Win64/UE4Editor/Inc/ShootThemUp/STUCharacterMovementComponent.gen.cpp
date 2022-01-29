// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootThemUp/Public/Components/STUCharacterMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUCharacterMovementComponent() {}
// Cross Module References
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_USTUCharacterMovementComponent_NoRegister();
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_USTUCharacterMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_ShootThemUp();
// End Cross Module References
	void USTUCharacterMovementComponent::StaticRegisterNativesUSTUCharacterMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_USTUCharacterMovementComponent_NoRegister()
	{
		return USTUCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_USTUCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RunModifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USTUCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootThemUp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Components/STUCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/Components/STUCharacterMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUCharacterMovementComponent_Statics::NewProp_RunModifier_MetaData[] = {
		{ "Category", "Movement" },
		{ "ClampMax", "10" },
		{ "ClampMin", "1.5" },
		{ "ModuleRelativePath", "Public/Components/STUCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USTUCharacterMovementComponent_Statics::NewProp_RunModifier = { "RunModifier", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUCharacterMovementComponent, RunModifier), METADATA_PARAMS(Z_Construct_UClass_USTUCharacterMovementComponent_Statics::NewProp_RunModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUCharacterMovementComponent_Statics::NewProp_RunModifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USTUCharacterMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUCharacterMovementComponent_Statics::NewProp_RunModifier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USTUCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTUCharacterMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USTUCharacterMovementComponent_Statics::ClassParams = {
		&USTUCharacterMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USTUCharacterMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USTUCharacterMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USTUCharacterMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USTUCharacterMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USTUCharacterMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USTUCharacterMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USTUCharacterMovementComponent, 3106826222);
	template<> SHOOTTHEMUP_API UClass* StaticClass<USTUCharacterMovementComponent>()
	{
		return USTUCharacterMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USTUCharacterMovementComponent(Z_Construct_UClass_USTUCharacterMovementComponent, &USTUCharacterMovementComponent::StaticClass, TEXT("/Script/ShootThemUp"), TEXT("USTUCharacterMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USTUCharacterMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
