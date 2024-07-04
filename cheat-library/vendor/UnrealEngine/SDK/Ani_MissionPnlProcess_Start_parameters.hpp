#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ani_MissionPnlProcess_Start

#include "Basic.hpp"


namespace SDK::Params
{

// Function Ani_MissionPnlProcess_Start.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
// 0x0020 (0x0020 - 0x0000)
struct SequenceDirector_C_ExecuteUbergraph_SequenceDirector final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A66[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AUIContainerActor*                      K2Node_CustomEvent_PnlParent;                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUIInturnAnimController*                CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SequenceDirector_C_ExecuteUbergraph_SequenceDirector) == 0x000008, "Wrong alignment on SequenceDirector_C_ExecuteUbergraph_SequenceDirector");
static_assert(sizeof(SequenceDirector_C_ExecuteUbergraph_SequenceDirector) == 0x000020, "Wrong size on SequenceDirector_C_ExecuteUbergraph_SequenceDirector");
static_assert(offsetof(SequenceDirector_C_ExecuteUbergraph_SequenceDirector, EntryPoint) == 0x000000, "Member 'SequenceDirector_C_ExecuteUbergraph_SequenceDirector::EntryPoint' has a wrong offset!");
static_assert(offsetof(SequenceDirector_C_ExecuteUbergraph_SequenceDirector, K2Node_CustomEvent_PnlParent) == 0x000008, "Member 'SequenceDirector_C_ExecuteUbergraph_SequenceDirector::K2Node_CustomEvent_PnlParent' has a wrong offset!");
static_assert(offsetof(SequenceDirector_C_ExecuteUbergraph_SequenceDirector, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'SequenceDirector_C_ExecuteUbergraph_SequenceDirector::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(SequenceDirector_C_ExecuteUbergraph_SequenceDirector, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'SequenceDirector_C_ExecuteUbergraph_SequenceDirector::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function Ani_MissionPnlProcess_Start.SequenceDirector_C.PnlParent_Event_0
// 0x0008 (0x0008 - 0x0000)
struct SequenceDirector_C_PnlParent_Event_0 final
{
public:
	class AUIContainerActor*                      PnlParent;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SequenceDirector_C_PnlParent_Event_0) == 0x000008, "Wrong alignment on SequenceDirector_C_PnlParent_Event_0");
static_assert(sizeof(SequenceDirector_C_PnlParent_Event_0) == 0x000008, "Wrong size on SequenceDirector_C_PnlParent_Event_0");
static_assert(offsetof(SequenceDirector_C_PnlParent_Event_0, PnlParent) == 0x000000, "Member 'SequenceDirector_C_PnlParent_Event_0::PnlParent' has a wrong offset!");

// Function Ani_MissionPnlProcess_Start.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_0
// 0x0008 (0x0008 - 0x0000)
struct SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0 final
{
public:
	class AUIContainerActor*                      PnlParent;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0) == 0x000008, "Wrong alignment on SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0");
static_assert(sizeof(SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0) == 0x000008, "Wrong size on SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0");
static_assert(offsetof(SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0, PnlParent) == 0x000000, "Member 'SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0::PnlParent' has a wrong offset!");

}

