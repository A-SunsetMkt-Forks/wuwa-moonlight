#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsAnimNotifyStateAccelInSplineMove

#include "Basic.hpp"


namespace SDK::Params
{

// Function TsAnimNotifyStateAccelInSplineMove.TsAnimNotifyStateAccelInSplineMove_C.K2_NotifyTick
// 0x0018 (0x0018 - 0x0000)
struct TsAnimNotifyStateAccelInSplineMove_C_K2_NotifyTick final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FrameDeltaTime;                                    // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TsAnimNotifyStateAccelInSplineMove_C_K2_NotifyTick) == 0x000008, "Wrong alignment on TsAnimNotifyStateAccelInSplineMove_C_K2_NotifyTick");
static_assert(sizeof(TsAnimNotifyStateAccelInSplineMove_C_K2_NotifyTick) == 0x000018, "Wrong size on TsAnimNotifyStateAccelInSplineMove_C_K2_NotifyTick");
static_assert(offsetof(TsAnimNotifyStateAccelInSplineMove_C_K2_NotifyTick, MeshComp) == 0x000000, "Member 'TsAnimNotifyStateAccelInSplineMove_C_K2_NotifyTick::MeshComp' has a wrong offset!");
static_assert(offsetof(TsAnimNotifyStateAccelInSplineMove_C_K2_NotifyTick, Animation) == 0x000008, "Member 'TsAnimNotifyStateAccelInSplineMove_C_K2_NotifyTick::Animation' has a wrong offset!");
static_assert(offsetof(TsAnimNotifyStateAccelInSplineMove_C_K2_NotifyTick, FrameDeltaTime) == 0x000010, "Member 'TsAnimNotifyStateAccelInSplineMove_C_K2_NotifyTick::FrameDeltaTime' has a wrong offset!");
static_assert(offsetof(TsAnimNotifyStateAccelInSplineMove_C_K2_NotifyTick, ReturnValue) == 0x000014, "Member 'TsAnimNotifyStateAccelInSplineMove_C_K2_NotifyTick::ReturnValue' has a wrong offset!");

}

