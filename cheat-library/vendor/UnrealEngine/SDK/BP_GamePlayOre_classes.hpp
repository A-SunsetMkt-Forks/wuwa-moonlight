#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GamePlayOre

#include "Basic.hpp"

#include "BP_BaseItem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GamePlayOre.BP_GamePlayOre_C
// 0x0000 (0x02E0 - 0x02E0)
class ABP_GamePlayOre_C final : public ABP_BaseItem_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GamePlayOre_C">();
	}
	static class ABP_GamePlayOre_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GamePlayOre_C>();
	}
};
static_assert(alignof(ABP_GamePlayOre_C) == 0x000008, "Wrong alignment on ABP_GamePlayOre_C");
static_assert(sizeof(ABP_GamePlayOre_C) == 0x0002E0, "Wrong size on ABP_GamePlayOre_C");

}

