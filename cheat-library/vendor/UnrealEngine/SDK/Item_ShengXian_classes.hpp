#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Item_ShengXian

#include "Basic.hpp"

#include "BP_BaseItem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Item_ShengXian.Item_ShengXian_C
// 0x0000 (0x02E0 - 0x02E0)
class AItem_ShengXian_C final : public ABP_BaseItem_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Item_ShengXian_C">();
	}
	static class AItem_ShengXian_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AItem_ShengXian_C>();
	}
};
static_assert(alignof(AItem_ShengXian_C) == 0x000008, "Wrong alignment on AItem_ShengXian_C");
static_assert(sizeof(AItem_ShengXian_C) == 0x0002E0, "Wrong size on AItem_ShengXian_C");

}

