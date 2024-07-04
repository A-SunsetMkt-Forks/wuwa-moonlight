#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_WuYinQu_YiLuoYuanXiang_Ball

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_WuYinQu_YiLuoYuanXiang_Ball.GA_WuYinQu_YiLuoYuanXiang_Ball_C
// 0x0020 (0x0550 - 0x0530)
class UGA_WuYinQu_YiLuoYuanXiang_Ball_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_WuYinQu_YiLuoYuanXiang_Ball_C;   // 0x0530(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         ____;                                              // 0x0538(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         _____0;                                            // 0x053C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 P9_ID;                                             // 0x0540(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_WuYinQu_YiLuoYuanXiang_Ball(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_WuYinQu_YiLuoYuanXiang_Ball_C">();
	}
	static class UGA_WuYinQu_YiLuoYuanXiang_Ball_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_WuYinQu_YiLuoYuanXiang_Ball_C>();
	}
};
static_assert(alignof(UGA_WuYinQu_YiLuoYuanXiang_Ball_C) == 0x000008, "Wrong alignment on UGA_WuYinQu_YiLuoYuanXiang_Ball_C");
static_assert(sizeof(UGA_WuYinQu_YiLuoYuanXiang_Ball_C) == 0x000550, "Wrong size on UGA_WuYinQu_YiLuoYuanXiang_Ball_C");
static_assert(offsetof(UGA_WuYinQu_YiLuoYuanXiang_Ball_C, UberGraphFrame_GA_WuYinQu_YiLuoYuanXiang_Ball_C) == 0x000530, "Member 'UGA_WuYinQu_YiLuoYuanXiang_Ball_C::UberGraphFrame_GA_WuYinQu_YiLuoYuanXiang_Ball_C' has a wrong offset!");
static_assert(offsetof(UGA_WuYinQu_YiLuoYuanXiang_Ball_C, ____) == 0x000538, "Member 'UGA_WuYinQu_YiLuoYuanXiang_Ball_C::____' has a wrong offset!");
static_assert(offsetof(UGA_WuYinQu_YiLuoYuanXiang_Ball_C, _____0) == 0x00053C, "Member 'UGA_WuYinQu_YiLuoYuanXiang_Ball_C::_____0' has a wrong offset!");
static_assert(offsetof(UGA_WuYinQu_YiLuoYuanXiang_Ball_C, P9_ID) == 0x000540, "Member 'UGA_WuYinQu_YiLuoYuanXiang_Ball_C::P9_ID' has a wrong offset!");

}

