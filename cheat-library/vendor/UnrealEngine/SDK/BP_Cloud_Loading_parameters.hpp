#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Cloud_Loading

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_Cloud_Loading.BP_Cloud_Loading_C.ExecuteUbergraph_BP_Cloud_Loading
// 0x000C (0x000C - 0x0000)
struct BP_Cloud_Loading_C_ExecuteUbergraph_BP_Cloud_Loading final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds_1;                       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Cloud_Loading_C_ExecuteUbergraph_BP_Cloud_Loading) == 0x000004, "Wrong alignment on BP_Cloud_Loading_C_ExecuteUbergraph_BP_Cloud_Loading");
static_assert(sizeof(BP_Cloud_Loading_C_ExecuteUbergraph_BP_Cloud_Loading) == 0x00000C, "Wrong size on BP_Cloud_Loading_C_ExecuteUbergraph_BP_Cloud_Loading");
static_assert(offsetof(BP_Cloud_Loading_C_ExecuteUbergraph_BP_Cloud_Loading, EntryPoint) == 0x000000, "Member 'BP_Cloud_Loading_C_ExecuteUbergraph_BP_Cloud_Loading::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Cloud_Loading_C_ExecuteUbergraph_BP_Cloud_Loading, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'BP_Cloud_Loading_C_ExecuteUbergraph_BP_Cloud_Loading::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_Cloud_Loading_C_ExecuteUbergraph_BP_Cloud_Loading, K2Node_Event_DeltaSeconds_1) == 0x000008, "Member 'BP_Cloud_Loading_C_ExecuteUbergraph_BP_Cloud_Loading::K2Node_Event_DeltaSeconds_1' has a wrong offset!");

// Function BP_Cloud_Loading.BP_Cloud_Loading_C.EditorTick
// 0x0004 (0x0004 - 0x0000)
struct BP_Cloud_Loading_C_EditorTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Cloud_Loading_C_EditorTick) == 0x000004, "Wrong alignment on BP_Cloud_Loading_C_EditorTick");
static_assert(sizeof(BP_Cloud_Loading_C_EditorTick) == 0x000004, "Wrong size on BP_Cloud_Loading_C_EditorTick");
static_assert(offsetof(BP_Cloud_Loading_C_EditorTick, DeltaSeconds) == 0x000000, "Member 'BP_Cloud_Loading_C_EditorTick::DeltaSeconds' has a wrong offset!");

// Function BP_Cloud_Loading.BP_Cloud_Loading_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_Cloud_Loading_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Cloud_Loading_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_Cloud_Loading_C_ReceiveTick");
static_assert(sizeof(BP_Cloud_Loading_C_ReceiveTick) == 0x000004, "Wrong size on BP_Cloud_Loading_C_ReceiveTick");
static_assert(offsetof(BP_Cloud_Loading_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_Cloud_Loading_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

