#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KuroLogAnalyzer

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class KuroLogAnalyzer.KuroLogAnalyzerLibrary
// 0x0000 (0x0030 - 0x0030)
class UKuroLogAnalyzerLibrary final : public UBlueprintFunctionLibrary
{
public:
	static bool Clear();
	static bool Initialize(const int32 InVerbosity, const TDelegate<void(class FName& Category, int32 Verbosity, const class FString& Format, const class FString& Message)>& InLogDelegate);
	static void SetEnable(const bool bEnable);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KuroLogAnalyzerLibrary">();
	}
	static class UKuroLogAnalyzerLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKuroLogAnalyzerLibrary>();
	}
};
static_assert(alignof(UKuroLogAnalyzerLibrary) == 0x000008, "Wrong alignment on UKuroLogAnalyzerLibrary");
static_assert(sizeof(UKuroLogAnalyzerLibrary) == 0x000030, "Wrong size on UKuroLogAnalyzerLibrary");

}

