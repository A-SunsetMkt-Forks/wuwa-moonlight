#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GlobalBlueprintFunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass GlobalBlueprintFunctionLibrary.GlobalBlueprintFunctionLibrary_C
// 0x0000 (0x0030 - 0x0030)
class UGlobalBlueprintFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static class UObject* GetBpEventManager(class UObject* __WorldContext);
	static class UObject* GetBpFightManager(class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GlobalBlueprintFunctionLibrary_C">();
	}
	static class UGlobalBlueprintFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGlobalBlueprintFunctionLibrary_C>();
	}
};
static_assert(alignof(UGlobalBlueprintFunctionLibrary_C) == 0x000008, "Wrong alignment on UGlobalBlueprintFunctionLibrary_C");
static_assert(sizeof(UGlobalBlueprintFunctionLibrary_C) == 0x000030, "Wrong size on UGlobalBlueprintFunctionLibrary_C");

}

