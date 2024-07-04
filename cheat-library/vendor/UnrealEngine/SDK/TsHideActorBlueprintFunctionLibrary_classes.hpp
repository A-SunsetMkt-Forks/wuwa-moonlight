#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsHideActorBlueprintFunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsHideActorBlueprintFunctionLibrary.TsHideActorBlueprintFunctionLibrary_C
// 0x0000 (0x0030 - 0x0030)
class UTsHideActorBlueprintFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void HideMesh(class UObject* __WorldContext);
	static void HideEffect(class UObject* __WorldContext);
	static void ShowMesh(class UObject* __WorldContext);
	static void ShowEffect(class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsHideActorBlueprintFunctionLibrary_C">();
	}
	static class UTsHideActorBlueprintFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsHideActorBlueprintFunctionLibrary_C>();
	}
};
static_assert(alignof(UTsHideActorBlueprintFunctionLibrary_C) == 0x000008, "Wrong alignment on UTsHideActorBlueprintFunctionLibrary_C");
static_assert(sizeof(UTsHideActorBlueprintFunctionLibrary_C) == 0x000030, "Wrong size on UTsHideActorBlueprintFunctionLibrary_C");

}

