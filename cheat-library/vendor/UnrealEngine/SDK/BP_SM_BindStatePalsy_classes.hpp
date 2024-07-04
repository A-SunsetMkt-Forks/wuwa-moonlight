#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SM_BindStatePalsy

#include "Basic.hpp"

#include "SMSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SM_BindStatePalsy.BP_SM_BindStatePalsy_C
// 0x0060 (0x0090 - 0x0030)
class UBP_SM_BindStatePalsy_C final : public UASMBindState
{
public:
	TSoftObjectPtr<class UCounterAttackEffectData_C> Nine_yH__;                                         // 0x0030(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UCounterAttackCameraData_C> Nine_D____;                                        // 0x0060(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SM_BindStatePalsy_C">();
	}
	static class UBP_SM_BindStatePalsy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SM_BindStatePalsy_C>();
	}
};
static_assert(alignof(UBP_SM_BindStatePalsy_C) == 0x000008, "Wrong alignment on UBP_SM_BindStatePalsy_C");
static_assert(sizeof(UBP_SM_BindStatePalsy_C) == 0x000090, "Wrong size on UBP_SM_BindStatePalsy_C");
static_assert(offsetof(UBP_SM_BindStatePalsy_C, Nine_yH__) == 0x000030, "Member 'UBP_SM_BindStatePalsy_C::Nine_yH__' has a wrong offset!");
static_assert(offsetof(UBP_SM_BindStatePalsy_C, Nine_D____) == 0x000060, "Member 'UBP_SM_BindStatePalsy_C::Nine_D____' has a wrong offset!");

}

