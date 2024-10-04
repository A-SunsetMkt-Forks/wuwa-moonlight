#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_R2T1JianxinMd10011_PC

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "KawaiiPhysics_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_R2T1JianxinMd10011_PC.ABP_R2T1JianxinMd10011_PC_C
// 0x1960 (0x1D10 - 0x03B0)
class UABP_R2T1JianxinMd10011_PC_C final : public UAnimInstance
{
public:
	uint8                                         Pad_3A8[0x8];                                      // 0x03A8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x03B8(0x0138)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x04F0(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0510(0x0020)()
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup_8;                // 0x0530(0x0270)()
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup_7;                // 0x07A0(0x0270)()
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup_6;                // 0x0A10(0x0270)()
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup_5;                // 0x0C80(0x0270)()
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup_4;                // 0x0EF0(0x0270)()
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup_3;                // 0x1160(0x0270)()
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup_2;                // 0x13D0(0x0270)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x1640(0x0038)()
	uint8                                         Pad_1678[0x8];                                     // 0x1678(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup_1;                // 0x1680(0x0270)()
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup;                  // 0x18F0(0x0270)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x1B60(0x0038)()
	struct FAnimNode_LinkedAnimGraph              AnimGraphNode_LinkedAnimGraph;                     // 0x1B98(0x00A8)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer;                     // 0x1C40(0x00C0)()
	bool                                          PhysicsClothSimulateEnable;                        // 0x1D00(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D01[0x3];                                     // 0x1D01(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         PhysicsClothSimulateScale;                         // 0x1D04(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ABP_R2T1JianxinMd10011_PC(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void PhyCloth(const struct FPoseLink& InPose, struct FPoseLink* PhyCloth_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_R2T1JianxinMd10011_PC_C">();
	}
	static class UABP_R2T1JianxinMd10011_PC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_R2T1JianxinMd10011_PC_C>();
	}
};
static_assert(alignof(UABP_R2T1JianxinMd10011_PC_C) == 0x000010, "Wrong alignment on UABP_R2T1JianxinMd10011_PC_C");
static_assert(sizeof(UABP_R2T1JianxinMd10011_PC_C) == 0x001D10, "Wrong size on UABP_R2T1JianxinMd10011_PC_C");
static_assert(offsetof(UABP_R2T1JianxinMd10011_PC_C, UberGraphFrame) == 0x0003B0, "Member 'UABP_R2T1JianxinMd10011_PC_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_R2T1JianxinMd10011_PC_C, AnimGraphNode_LinkedInputPose) == 0x0003B8, "Member 'UABP_R2T1JianxinMd10011_PC_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UABP_R2T1JianxinMd10011_PC_C, AnimGraphNode_LocalToComponentSpace) == 0x0004F0, "Member 'UABP_R2T1JianxinMd10011_PC_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_R2T1JianxinMd10011_PC_C, AnimGraphNode_ComponentToLocalSpace) == 0x000510, "Member 'UABP_R2T1JianxinMd10011_PC_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_R2T1JianxinMd10011_PC_C, AnimGraphNode_KawaiiPhysicsGroup_8) == 0x000530, "Member 'UABP_R2T1JianxinMd10011_PC_C::AnimGraphNode_KawaiiPhysicsGroup_8' has a wrong offset!");
static_assert(offsetof(UABP_R2T1JianxinMd10011_PC_C, AnimGraphNode_KawaiiPhysicsGroup_7) == 0x0007A0, "Member 'UABP_R2T1JianxinMd10011_PC_C::AnimGraphNode_KawaiiPhysicsGroup_7' has a wrong offset!");
static_assert(offsetof(UABP_R2T1JianxinMd10011_PC_C, AnimGraphNode_KawaiiPhysicsGroup_6) == 0x000A10, "Member 'UABP_R2T1JianxinMd10011_PC_C::AnimGraphNode_KawaiiPhysicsGroup_6' has a wrong offset!");
static_assert(offsetof(UABP_R2T1JianxinMd10011_PC_C, AnimGraphNode_KawaiiPhysicsGroup_5) == 0x000C80, "Member 'UABP_R2T1JianxinMd10011_PC_C::AnimGraphNode_KawaiiPhysicsGroup_5' has a wrong offset!");
static_assert(offsetof(UABP_R2T1JianxinMd10011_PC_C, AnimGraphNode_KawaiiPhysicsGroup_4) == 0x000EF0, "Member 'UABP_R2T1JianxinMd10011_PC_C::AnimGraphNode_KawaiiPhysicsGroup_4' has a wrong offset!");
static_assert(offsetof(UABP_R2T1JianxinMd10011_PC_C, AnimGraphNode_KawaiiPhysicsGroup_3) == 0x001160, "Member 'UABP_R2T1JianxinMd10011_PC_C::AnimGraphNode_KawaiiPhysicsGroup_3' has a wrong offset!");
static_assert(offsetof(UABP_R2T1JianxinMd10011_PC_C, AnimGraphNode_KawaiiPhysicsGroup_2) == 0x0013D0, "Member 'UABP_R2T1JianxinMd10011_PC_C::AnimGraphNode_KawaiiPhysicsGroup_2' has a wrong offset!");
static_assert(offsetof(UABP_R2T1JianxinMd10011_PC_C, AnimGraphNode_Root_1) == 0x001640, "Member 'UABP_R2T1JianxinMd10011_PC_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(UABP_R2T1JianxinMd10011_PC_C, AnimGraphNode_KawaiiPhysicsGroup_1) == 0x001680, "Member 'UABP_R2T1JianxinMd10011_PC_C::AnimGraphNode_KawaiiPhysicsGroup_1' has a wrong offset!");
static_assert(offsetof(UABP_R2T1JianxinMd10011_PC_C, AnimGraphNode_KawaiiPhysicsGroup) == 0x0018F0, "Member 'UABP_R2T1JianxinMd10011_PC_C::AnimGraphNode_KawaiiPhysicsGroup' has a wrong offset!");
static_assert(offsetof(UABP_R2T1JianxinMd10011_PC_C, AnimGraphNode_Root) == 0x001B60, "Member 'UABP_R2T1JianxinMd10011_PC_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_R2T1JianxinMd10011_PC_C, AnimGraphNode_LinkedAnimGraph) == 0x001B98, "Member 'UABP_R2T1JianxinMd10011_PC_C::AnimGraphNode_LinkedAnimGraph' has a wrong offset!");
static_assert(offsetof(UABP_R2T1JianxinMd10011_PC_C, AnimGraphNode_LinkedAnimLayer) == 0x001C40, "Member 'UABP_R2T1JianxinMd10011_PC_C::AnimGraphNode_LinkedAnimLayer' has a wrong offset!");
static_assert(offsetof(UABP_R2T1JianxinMd10011_PC_C, PhysicsClothSimulateEnable) == 0x001D00, "Member 'UABP_R2T1JianxinMd10011_PC_C::PhysicsClothSimulateEnable' has a wrong offset!");
static_assert(offsetof(UABP_R2T1JianxinMd10011_PC_C, PhysicsClothSimulateScale) == 0x001D04, "Member 'UABP_R2T1JianxinMd10011_PC_C::PhysicsClothSimulateScale' has a wrong offset!");

}
