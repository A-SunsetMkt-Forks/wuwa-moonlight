#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsTaskSelectSkill

#include "Basic.hpp"


namespace SDK::Params
{

// Function TsTaskSelectSkill.TsTaskSelectSkill_C.ExecuteUbergraph_TsTaskSelectSkill
// 0x0020 (0x0020 - 0x0000)
struct TsTaskSelectSkill_C_ExecuteUbergraph_TsTaskSelectSkill final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B86[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TsTaskSelectSkill_C_ExecuteUbergraph_TsTaskSelectSkill) == 0x000008, "Wrong alignment on TsTaskSelectSkill_C_ExecuteUbergraph_TsTaskSelectSkill");
static_assert(sizeof(TsTaskSelectSkill_C_ExecuteUbergraph_TsTaskSelectSkill) == 0x000020, "Wrong size on TsTaskSelectSkill_C_ExecuteUbergraph_TsTaskSelectSkill");
static_assert(offsetof(TsTaskSelectSkill_C_ExecuteUbergraph_TsTaskSelectSkill, EntryPoint) == 0x000000, "Member 'TsTaskSelectSkill_C_ExecuteUbergraph_TsTaskSelectSkill::EntryPoint' has a wrong offset!");
static_assert(offsetof(TsTaskSelectSkill_C_ExecuteUbergraph_TsTaskSelectSkill, K2Node_Event_OwnerController) == 0x000008, "Member 'TsTaskSelectSkill_C_ExecuteUbergraph_TsTaskSelectSkill::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(TsTaskSelectSkill_C_ExecuteUbergraph_TsTaskSelectSkill, K2Node_Event_ControlledPawn) == 0x000010, "Member 'TsTaskSelectSkill_C_ExecuteUbergraph_TsTaskSelectSkill::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(TsTaskSelectSkill_C_ExecuteUbergraph_TsTaskSelectSkill, K2Node_Event_DeltaSeconds) == 0x000018, "Member 'TsTaskSelectSkill_C_ExecuteUbergraph_TsTaskSelectSkill::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function TsTaskSelectSkill.TsTaskSelectSkill_C.ReceiveTickAI
// 0x0018 (0x0018 - 0x0000)
struct TsTaskSelectSkill_C_ReceiveTickAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TsTaskSelectSkill_C_ReceiveTickAI) == 0x000008, "Wrong alignment on TsTaskSelectSkill_C_ReceiveTickAI");
static_assert(sizeof(TsTaskSelectSkill_C_ReceiveTickAI) == 0x000018, "Wrong size on TsTaskSelectSkill_C_ReceiveTickAI");
static_assert(offsetof(TsTaskSelectSkill_C_ReceiveTickAI, OwnerController) == 0x000000, "Member 'TsTaskSelectSkill_C_ReceiveTickAI::OwnerController' has a wrong offset!");
static_assert(offsetof(TsTaskSelectSkill_C_ReceiveTickAI, ControlledPawn) == 0x000008, "Member 'TsTaskSelectSkill_C_ReceiveTickAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(TsTaskSelectSkill_C_ReceiveTickAI, DeltaSeconds) == 0x000010, "Member 'TsTaskSelectSkill_C_ReceiveTickAI::DeltaSeconds' has a wrong offset!");

}

