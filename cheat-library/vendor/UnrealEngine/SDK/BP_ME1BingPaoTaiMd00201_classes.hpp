#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ME1BingPaoTaiMd00201

#include "Basic.hpp"

#include "TsBaseCharacter_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ME1BingPaoTaiMd00201.BP_ME1BingPaoTaiMd00201_C
// 0x0030 (0x07B0 - 0x0780)
class ABP_ME1BingPaoTaiMd00201_C final : public ATsBaseCharacter_C
{
public:
	uint8                                         Pad_399A[0x7];                                     // 0x0771(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCapsuleComponent*                      Skin_Bone007;                                      // 0x0778(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UKuroAdjustableCapsuleComponent*        Bip002RFoot_Bone;                                  // 0x0780(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UKuroAdjustableCapsuleComponent*        Bip002LFoot_Bone;                                  // 0x0788(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UKuroAdjustableCapsuleComponent*        Bip003RFoot_Bone;                                  // 0x0790(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UKuroAdjustableCapsuleComponent*        Bip003LFoot_Bone;                                  // 0x0798(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Bip001;                                            // 0x07A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ME1BingPaoTaiMd00201_C">();
	}
	static class ABP_ME1BingPaoTaiMd00201_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ME1BingPaoTaiMd00201_C>();
	}
};
static_assert(alignof(ABP_ME1BingPaoTaiMd00201_C) == 0x000010, "Wrong alignment on ABP_ME1BingPaoTaiMd00201_C");
static_assert(sizeof(ABP_ME1BingPaoTaiMd00201_C) == 0x0007B0, "Wrong size on ABP_ME1BingPaoTaiMd00201_C");
static_assert(offsetof(ABP_ME1BingPaoTaiMd00201_C, Skin_Bone007) == 0x000778, "Member 'ABP_ME1BingPaoTaiMd00201_C::Skin_Bone007' has a wrong offset!");
static_assert(offsetof(ABP_ME1BingPaoTaiMd00201_C, Bip002RFoot_Bone) == 0x000780, "Member 'ABP_ME1BingPaoTaiMd00201_C::Bip002RFoot_Bone' has a wrong offset!");
static_assert(offsetof(ABP_ME1BingPaoTaiMd00201_C, Bip002LFoot_Bone) == 0x000788, "Member 'ABP_ME1BingPaoTaiMd00201_C::Bip002LFoot_Bone' has a wrong offset!");
static_assert(offsetof(ABP_ME1BingPaoTaiMd00201_C, Bip003RFoot_Bone) == 0x000790, "Member 'ABP_ME1BingPaoTaiMd00201_C::Bip003RFoot_Bone' has a wrong offset!");
static_assert(offsetof(ABP_ME1BingPaoTaiMd00201_C, Bip003LFoot_Bone) == 0x000798, "Member 'ABP_ME1BingPaoTaiMd00201_C::Bip003LFoot_Bone' has a wrong offset!");
static_assert(offsetof(ABP_ME1BingPaoTaiMd00201_C, Bip001) == 0x0007A0, "Member 'ABP_ME1BingPaoTaiMd00201_C::Bip001' has a wrong offset!");

}

