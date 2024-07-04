#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsAnimNotifyStateAddLocationBlackboard

#include "Basic.hpp"


namespace SDK::Params
{

// Function TsAnimNotifyStateAddLocationBlackboard.TsAnimNotifyStateAddLocationBlackboard_C.K2_NotifyTick
// 0x0018 (0x0018 - 0x0000)
struct TsAnimNotifyStateAddLocationBlackboard_C_K2_NotifyTick final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FrameDeltaTime;                                    // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TsAnimNotifyStateAddLocationBlackboard_C_K2_NotifyTick) == 0x000008, "Wrong alignment on TsAnimNotifyStateAddLocationBlackboard_C_K2_NotifyTick");
static_assert(sizeof(TsAnimNotifyStateAddLocationBlackboard_C_K2_NotifyTick) == 0x000018, "Wrong size on TsAnimNotifyStateAddLocationBlackboard_C_K2_NotifyTick");
static_assert(offsetof(TsAnimNotifyStateAddLocationBlackboard_C_K2_NotifyTick, MeshComp) == 0x000000, "Member 'TsAnimNotifyStateAddLocationBlackboard_C_K2_NotifyTick::MeshComp' has a wrong offset!");
static_assert(offsetof(TsAnimNotifyStateAddLocationBlackboard_C_K2_NotifyTick, Animation) == 0x000008, "Member 'TsAnimNotifyStateAddLocationBlackboard_C_K2_NotifyTick::Animation' has a wrong offset!");
static_assert(offsetof(TsAnimNotifyStateAddLocationBlackboard_C_K2_NotifyTick, FrameDeltaTime) == 0x000010, "Member 'TsAnimNotifyStateAddLocationBlackboard_C_K2_NotifyTick::FrameDeltaTime' has a wrong offset!");
static_assert(offsetof(TsAnimNotifyStateAddLocationBlackboard_C_K2_NotifyTick, ReturnValue) == 0x000014, "Member 'TsAnimNotifyStateAddLocationBlackboard_C_K2_NotifyTick::ReturnValue' has a wrong offset!");

// Function TsAnimNotifyStateAddLocationBlackboard.TsAnimNotifyStateAddLocationBlackboard_C.K2_NotifyEnd
// 0x0018 (0x0018 - 0x0000)
struct TsAnimNotifyStateAddLocationBlackboard_C_K2_NotifyEnd final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TsAnimNotifyStateAddLocationBlackboard_C_K2_NotifyEnd) == 0x000008, "Wrong alignment on TsAnimNotifyStateAddLocationBlackboard_C_K2_NotifyEnd");
static_assert(sizeof(TsAnimNotifyStateAddLocationBlackboard_C_K2_NotifyEnd) == 0x000018, "Wrong size on TsAnimNotifyStateAddLocationBlackboard_C_K2_NotifyEnd");
static_assert(offsetof(TsAnimNotifyStateAddLocationBlackboard_C_K2_NotifyEnd, MeshComp) == 0x000000, "Member 'TsAnimNotifyStateAddLocationBlackboard_C_K2_NotifyEnd::MeshComp' has a wrong offset!");
static_assert(offsetof(TsAnimNotifyStateAddLocationBlackboard_C_K2_NotifyEnd, Animation) == 0x000008, "Member 'TsAnimNotifyStateAddLocationBlackboard_C_K2_NotifyEnd::Animation' has a wrong offset!");
static_assert(offsetof(TsAnimNotifyStateAddLocationBlackboard_C_K2_NotifyEnd, ReturnValue) == 0x000010, "Member 'TsAnimNotifyStateAddLocationBlackboard_C_K2_NotifyEnd::ReturnValue' has a wrong offset!");

// Function TsAnimNotifyStateAddLocationBlackboard.TsAnimNotifyStateAddLocationBlackboard_C.K2_NotifyBegin
// 0x0018 (0x0018 - 0x0000)
struct TsAnimNotifyStateAddLocationBlackboard_C_K2_NotifyBegin final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TotalDuration;                                     // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TsAnimNotifyStateAddLocationBlackboard_C_K2_NotifyBegin) == 0x000008, "Wrong alignment on TsAnimNotifyStateAddLocationBlackboard_C_K2_NotifyBegin");
static_assert(sizeof(TsAnimNotifyStateAddLocationBlackboard_C_K2_NotifyBegin) == 0x000018, "Wrong size on TsAnimNotifyStateAddLocationBlackboard_C_K2_NotifyBegin");
static_assert(offsetof(TsAnimNotifyStateAddLocationBlackboard_C_K2_NotifyBegin, MeshComp) == 0x000000, "Member 'TsAnimNotifyStateAddLocationBlackboard_C_K2_NotifyBegin::MeshComp' has a wrong offset!");
static_assert(offsetof(TsAnimNotifyStateAddLocationBlackboard_C_K2_NotifyBegin, Animation) == 0x000008, "Member 'TsAnimNotifyStateAddLocationBlackboard_C_K2_NotifyBegin::Animation' has a wrong offset!");
static_assert(offsetof(TsAnimNotifyStateAddLocationBlackboard_C_K2_NotifyBegin, TotalDuration) == 0x000010, "Member 'TsAnimNotifyStateAddLocationBlackboard_C_K2_NotifyBegin::TotalDuration' has a wrong offset!");
static_assert(offsetof(TsAnimNotifyStateAddLocationBlackboard_C_K2_NotifyBegin, ReturnValue) == 0x000014, "Member 'TsAnimNotifyStateAddLocationBlackboard_C_K2_NotifyBegin::ReturnValue' has a wrong offset!");

// Function TsAnimNotifyStateAddLocationBlackboard.TsAnimNotifyStateAddLocationBlackboard_C.GetNotifyName
// 0x0010 (0x0010 - 0x0000)
struct TsAnimNotifyStateAddLocationBlackboard_C_GetNotifyName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(TsAnimNotifyStateAddLocationBlackboard_C_GetNotifyName) == 0x000008, "Wrong alignment on TsAnimNotifyStateAddLocationBlackboard_C_GetNotifyName");
static_assert(sizeof(TsAnimNotifyStateAddLocationBlackboard_C_GetNotifyName) == 0x000010, "Wrong size on TsAnimNotifyStateAddLocationBlackboard_C_GetNotifyName");
static_assert(offsetof(TsAnimNotifyStateAddLocationBlackboard_C_GetNotifyName, ReturnValue) == 0x000000, "Member 'TsAnimNotifyStateAddLocationBlackboard_C_GetNotifyName::ReturnValue' has a wrong offset!");

}

