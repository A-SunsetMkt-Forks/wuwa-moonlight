#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AkiWorld_WP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AkiWorld_WP.AkiWorld_WP_C
// 0x0008 (0x02B8 - 0x02B0)
class AAkiWorld_WP_C final : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ReceiveBeginPlay();
	void ExecuteUbergraph_AkiWorld_WP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AkiWorld_WP_C">();
	}
	static class AAkiWorld_WP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAkiWorld_WP_C>();
	}
};
static_assert(alignof(AAkiWorld_WP_C) == 0x000008, "Wrong alignment on AAkiWorld_WP_C");
static_assert(sizeof(AAkiWorld_WP_C) == 0x0002B8, "Wrong size on AAkiWorld_WP_C");
static_assert(offsetof(AAkiWorld_WP_C, UberGraphFrame) == 0x0002B0, "Member 'AAkiWorld_WP_C::UberGraphFrame' has a wrong offset!");

}
