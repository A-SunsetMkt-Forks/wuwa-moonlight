#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NCS_In_Lv2

#include "Basic.hpp"

#include "KuroAnim_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NCS_In_Lv2.NCS_In_Lv2_C
// 0x0000 (0x01B0 - 0x01B0)
class UNCS_In_Lv2_C final : public UKuroCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NCS_In_Lv2_C">();
	}
	static class UNCS_In_Lv2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNCS_In_Lv2_C>();
	}
};
static_assert(alignof(UNCS_In_Lv2_C) == 0x000010, "Wrong alignment on UNCS_In_Lv2_C");
static_assert(sizeof(UNCS_In_Lv2_C) == 0x0001B0, "Wrong size on UNCS_In_Lv2_C");

}

