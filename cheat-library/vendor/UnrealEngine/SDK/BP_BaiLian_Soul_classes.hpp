#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BaiLian_Soul

#include "Basic.hpp"

#include "TsBaseCharacter_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BaiLian_Soul.BP_BaiLian_Soul_C
// 0x0010 (0x0790 - 0x0780)
class ABP_BaiLian_Soul_C final : public ATsBaseCharacter_C
{
public:
	uint8                                         Pad_398B[0x7];                                     // 0x0771(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     __;                                                // 0x0778(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Delta_Seconds;                                     // 0x0780(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BaiLian_Soul_C">();
	}
	static class ABP_BaiLian_Soul_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BaiLian_Soul_C>();
	}
};
static_assert(alignof(ABP_BaiLian_Soul_C) == 0x000010, "Wrong alignment on ABP_BaiLian_Soul_C");
static_assert(sizeof(ABP_BaiLian_Soul_C) == 0x000790, "Wrong size on ABP_BaiLian_Soul_C");
static_assert(offsetof(ABP_BaiLian_Soul_C, __) == 0x000778, "Member 'ABP_BaiLian_Soul_C::__' has a wrong offset!");
static_assert(offsetof(ABP_BaiLian_Soul_C, Delta_Seconds) == 0x000780, "Member 'ABP_BaiLian_Soul_C::Delta_Seconds' has a wrong offset!");

}
