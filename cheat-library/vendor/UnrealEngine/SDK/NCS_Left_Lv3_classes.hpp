#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NCS_Left_Lv3

#include "Basic.hpp"

#include "KuroAnim_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NCS_Left_Lv3.NCS_Left_Lv3_C
// 0x0000 (0x01B0 - 0x01B0)
class UNCS_Left_Lv3_C final : public UKuroCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NCS_Left_Lv3_C">();
	}
	static class UNCS_Left_Lv3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNCS_Left_Lv3_C>();
	}
};
static_assert(alignof(UNCS_Left_Lv3_C) == 0x000010, "Wrong alignment on UNCS_Left_Lv3_C");
static_assert(sizeof(UNCS_Left_Lv3_C) == 0x0001B0, "Wrong size on UNCS_Left_Lv3_C");

}

