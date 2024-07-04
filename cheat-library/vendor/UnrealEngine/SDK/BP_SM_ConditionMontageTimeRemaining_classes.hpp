#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SM_ConditionMontageTimeRemaining

#include "Basic.hpp"

#include "SMSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SM_ConditionMontageTimeRemaining.BP_SM_ConditionMontageTimeRemaining_C
// 0x0008 (0x0040 - 0x0038)
class UBP_SM_ConditionMontageTimeRemaining_C final : public UASMConditionBase
{
public:
	int32                                         Time;                                              // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SM_ConditionMontageTimeRemaining_C">();
	}
	static class UBP_SM_ConditionMontageTimeRemaining_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SM_ConditionMontageTimeRemaining_C>();
	}
};
static_assert(alignof(UBP_SM_ConditionMontageTimeRemaining_C) == 0x000008, "Wrong alignment on UBP_SM_ConditionMontageTimeRemaining_C");
static_assert(sizeof(UBP_SM_ConditionMontageTimeRemaining_C) == 0x000040, "Wrong size on UBP_SM_ConditionMontageTimeRemaining_C");
static_assert(offsetof(UBP_SM_ConditionMontageTimeRemaining_C, Time) == 0x000038, "Member 'UBP_SM_ConditionMontageTimeRemaining_C::Time' has a wrong offset!");

}

