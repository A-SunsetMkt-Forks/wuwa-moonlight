#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NCS_Down_Lv8

#include "Basic.hpp"

#include "BP_CameraShakeAndForceFeedback_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NCS_Down_Lv8.NCS_Down_Lv8_C
// 0x0000 (0x01C0 - 0x01C0)
class UNCS_Down_Lv8_C final : public UBP_CameraShakeAndForceFeedback_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NCS_Down_Lv8_C">();
	}
	static class UNCS_Down_Lv8_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNCS_Down_Lv8_C>();
	}
};
static_assert(alignof(UNCS_Down_Lv8_C) == 0x000010, "Wrong alignment on UNCS_Down_Lv8_C");
static_assert(sizeof(UNCS_Down_Lv8_C) == 0x0001C0, "Wrong size on UNCS_Down_Lv8_C");

}

