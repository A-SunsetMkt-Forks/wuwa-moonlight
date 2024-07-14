#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BaiLian

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TsBaseCharacter_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BaiLian.BP_BaiLian_C
// 0x0040 (0x07C0 - 0x0780)
class ABP_BaiLian_C final : public ATsBaseCharacter_C
{
public:
	uint8                                         Pad_3629[0x7];                                     // 0x0771(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_BaiLian_C;                       // 0x0778(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                      Bip001RThighTwist;                                 // 0x0780(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Bip001LThighTwist;                                 // 0x0788(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Bip001LCalf;                                       // 0x0790(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Bip001RCalf;                                       // 0x0798(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Bip001Spine2;                                      // 0x07A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 WeaponCase0;                                       // 0x07A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         Nine__p_P;                                         // 0x07B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SM9__p;                                            // 0x07B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_BaiLian(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void FightCommand(bool IsInAir);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BaiLian_C">();
	}
	static class ABP_BaiLian_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BaiLian_C>();
	}
};
static_assert(alignof(ABP_BaiLian_C) == 0x000010, "Wrong alignment on ABP_BaiLian_C");
static_assert(sizeof(ABP_BaiLian_C) == 0x0007C0, "Wrong size on ABP_BaiLian_C");
static_assert(offsetof(ABP_BaiLian_C, UberGraphFrame_BP_BaiLian_C) == 0x000778, "Member 'ABP_BaiLian_C::UberGraphFrame_BP_BaiLian_C' has a wrong offset!");
static_assert(offsetof(ABP_BaiLian_C, Bip001RThighTwist) == 0x000780, "Member 'ABP_BaiLian_C::Bip001RThighTwist' has a wrong offset!");
static_assert(offsetof(ABP_BaiLian_C, Bip001LThighTwist) == 0x000788, "Member 'ABP_BaiLian_C::Bip001LThighTwist' has a wrong offset!");
static_assert(offsetof(ABP_BaiLian_C, Bip001LCalf) == 0x000790, "Member 'ABP_BaiLian_C::Bip001LCalf' has a wrong offset!");
static_assert(offsetof(ABP_BaiLian_C, Bip001RCalf) == 0x000798, "Member 'ABP_BaiLian_C::Bip001RCalf' has a wrong offset!");
static_assert(offsetof(ABP_BaiLian_C, Bip001Spine2) == 0x0007A0, "Member 'ABP_BaiLian_C::Bip001Spine2' has a wrong offset!");
static_assert(offsetof(ABP_BaiLian_C, WeaponCase0) == 0x0007A8, "Member 'ABP_BaiLian_C::WeaponCase0' has a wrong offset!");
static_assert(offsetof(ABP_BaiLian_C, Nine__p_P) == 0x0007B0, "Member 'ABP_BaiLian_C::Nine__p_P' has a wrong offset!");
static_assert(offsetof(ABP_BaiLian_C, SM9__p) == 0x0007B4, "Member 'ABP_BaiLian_C::SM9__p' has a wrong offset!");

}
