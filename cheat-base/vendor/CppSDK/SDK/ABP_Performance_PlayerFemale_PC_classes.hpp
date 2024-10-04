#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Performance_PlayerFemale_PC

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "KuroAnim_structs.hpp"
#include "KawaiiPhysics_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_Performance_PlayerFemale_PC.ABP_Performance_PlayerFemale_PC_C
// 0x1B20 (0x1ED0 - 0x03B0)
class UABP_Performance_PlayerFemale_PC_C final : public UAnimInstance
{
public:
	uint8                                         Pad_3204[0x8];                                     // 0x03A8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x03B8(0x0038)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x03F0(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0410(0x0020)()
	struct FAnimNode_MountBuffer                  AnimGraphNode_MountBuffer;                         // 0x0430(0x01D0)()
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup_8;                // 0x0600(0x0270)()
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup_7;                // 0x0870(0x0270)()
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup_6;                // 0x0AE0(0x0270)()
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup_5;                // 0x0D50(0x0270)()
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup_4;                // 0x0FC0(0x0270)()
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup_3;                // 0x1230(0x0270)()
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup_2;                // 0x14A0(0x0270)()
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup_1;                // 0x1710(0x0270)()
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup;                  // 0x1980(0x0270)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x1BF0(0x0138)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x1D28(0x0038)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer;                     // 0x1D60(0x00C0)()
	struct FAnimNode_LinkedAnimGraph              AnimGraphNode_LinkedAnimGraph;                     // 0x1E20(0x00A8)()

public:
	void ExecuteUbergraph_ABP_Performance_PlayerFemale_PC(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void PhyCloth(const struct FPoseLink& InPose, struct FPoseLink* Param_PhyCloth);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Performance_PlayerFemale_PC_C">();
	}
	static class UABP_Performance_PlayerFemale_PC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Performance_PlayerFemale_PC_C>();
	}
};
static_assert(alignof(UABP_Performance_PlayerFemale_PC_C) == 0x000010, "Wrong alignment on UABP_Performance_PlayerFemale_PC_C");
static_assert(sizeof(UABP_Performance_PlayerFemale_PC_C) == 0x001ED0, "Wrong size on UABP_Performance_PlayerFemale_PC_C");
static_assert(offsetof(UABP_Performance_PlayerFemale_PC_C, UberGraphFrame) == 0x0003B0, "Member 'UABP_Performance_PlayerFemale_PC_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_Performance_PlayerFemale_PC_C, AnimGraphNode_Root_1) == 0x0003B8, "Member 'UABP_Performance_PlayerFemale_PC_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(UABP_Performance_PlayerFemale_PC_C, AnimGraphNode_LocalToComponentSpace) == 0x0003F0, "Member 'UABP_Performance_PlayerFemale_PC_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_Performance_PlayerFemale_PC_C, AnimGraphNode_ComponentToLocalSpace) == 0x000410, "Member 'UABP_Performance_PlayerFemale_PC_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_Performance_PlayerFemale_PC_C, AnimGraphNode_MountBuffer) == 0x000430, "Member 'UABP_Performance_PlayerFemale_PC_C::AnimGraphNode_MountBuffer' has a wrong offset!");
static_assert(offsetof(UABP_Performance_PlayerFemale_PC_C, AnimGraphNode_KawaiiPhysicsGroup_8) == 0x000600, "Member 'UABP_Performance_PlayerFemale_PC_C::AnimGraphNode_KawaiiPhysicsGroup_8' has a wrong offset!");
static_assert(offsetof(UABP_Performance_PlayerFemale_PC_C, AnimGraphNode_KawaiiPhysicsGroup_7) == 0x000870, "Member 'UABP_Performance_PlayerFemale_PC_C::AnimGraphNode_KawaiiPhysicsGroup_7' has a wrong offset!");
static_assert(offsetof(UABP_Performance_PlayerFemale_PC_C, AnimGraphNode_KawaiiPhysicsGroup_6) == 0x000AE0, "Member 'UABP_Performance_PlayerFemale_PC_C::AnimGraphNode_KawaiiPhysicsGroup_6' has a wrong offset!");
static_assert(offsetof(UABP_Performance_PlayerFemale_PC_C, AnimGraphNode_KawaiiPhysicsGroup_5) == 0x000D50, "Member 'UABP_Performance_PlayerFemale_PC_C::AnimGraphNode_KawaiiPhysicsGroup_5' has a wrong offset!");
static_assert(offsetof(UABP_Performance_PlayerFemale_PC_C, AnimGraphNode_KawaiiPhysicsGroup_4) == 0x000FC0, "Member 'UABP_Performance_PlayerFemale_PC_C::AnimGraphNode_KawaiiPhysicsGroup_4' has a wrong offset!");
static_assert(offsetof(UABP_Performance_PlayerFemale_PC_C, AnimGraphNode_KawaiiPhysicsGroup_3) == 0x001230, "Member 'UABP_Performance_PlayerFemale_PC_C::AnimGraphNode_KawaiiPhysicsGroup_3' has a wrong offset!");
static_assert(offsetof(UABP_Performance_PlayerFemale_PC_C, AnimGraphNode_KawaiiPhysicsGroup_2) == 0x0014A0, "Member 'UABP_Performance_PlayerFemale_PC_C::AnimGraphNode_KawaiiPhysicsGroup_2' has a wrong offset!");
static_assert(offsetof(UABP_Performance_PlayerFemale_PC_C, AnimGraphNode_KawaiiPhysicsGroup_1) == 0x001710, "Member 'UABP_Performance_PlayerFemale_PC_C::AnimGraphNode_KawaiiPhysicsGroup_1' has a wrong offset!");
static_assert(offsetof(UABP_Performance_PlayerFemale_PC_C, AnimGraphNode_KawaiiPhysicsGroup) == 0x001980, "Member 'UABP_Performance_PlayerFemale_PC_C::AnimGraphNode_KawaiiPhysicsGroup' has a wrong offset!");
static_assert(offsetof(UABP_Performance_PlayerFemale_PC_C, AnimGraphNode_LinkedInputPose) == 0x001BF0, "Member 'UABP_Performance_PlayerFemale_PC_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UABP_Performance_PlayerFemale_PC_C, AnimGraphNode_Root) == 0x001D28, "Member 'UABP_Performance_PlayerFemale_PC_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_Performance_PlayerFemale_PC_C, AnimGraphNode_LinkedAnimLayer) == 0x001D60, "Member 'UABP_Performance_PlayerFemale_PC_C::AnimGraphNode_LinkedAnimLayer' has a wrong offset!");
static_assert(offsetof(UABP_Performance_PlayerFemale_PC_C, AnimGraphNode_LinkedAnimGraph) == 0x001E20, "Member 'UABP_Performance_PlayerFemale_PC_C::AnimGraphNode_LinkedAnimGraph' has a wrong offset!");

}
