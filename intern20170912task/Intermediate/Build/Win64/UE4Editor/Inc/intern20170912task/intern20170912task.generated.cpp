// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "intern20170912task.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1intern20170912task() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	UMG_API class UClass* Z_Construct_UClass_UUserWidget();

	INTERN20170912TASK_API class UClass* Z_Construct_UClass_UPauseMenurWidget_NoRegister();
	INTERN20170912TASK_API class UClass* Z_Construct_UClass_UPauseMenurWidget();
	INTERN20170912TASK_API class UPackage* Z_Construct_UPackage__Script_intern20170912task();
	void UPauseMenurWidget::StaticRegisterNativesUPauseMenurWidget()
	{
	}
	UClass* Z_Construct_UClass_UPauseMenurWidget_NoRegister()
	{
		return UPauseMenurWidget::StaticClass();
	}
	UClass* Z_Construct_UClass_UPauseMenurWidget()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UUserWidget();
			Z_Construct_UPackage__Script_intern20170912task();
			OuterClass = UPauseMenurWidget::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B01080;


				static TCppClassTypeInfo<TCppClassTypeTraits<UPauseMenurWidget> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("PauseMenurWidget.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("PauseMenurWidget.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPauseMenurWidget, 1746680928);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPauseMenurWidget(Z_Construct_UClass_UPauseMenurWidget, &UPauseMenurWidget::StaticClass, TEXT("/Script/intern20170912task"), TEXT("UPauseMenurWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPauseMenurWidget);
	UPackage* Z_Construct_UPackage__Script_intern20170912task()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/intern20170912task")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x778457CC;
			Guid.B = 0xD00E6E8F;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
