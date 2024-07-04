#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsTaskMoveToLocation

#include "Basic.hpp"


namespace SDK::Params
{

// Function TsTaskMoveToLocation.TsTaskMoveToLocation_C.ExecuteUbergraph_TsTaskMoveToLocation
// 0x0030 (0x0030 - 0x0000)
struct TsTaskMoveToLocation_C_ExecuteUbergraph_TsTaskMoveToLocation final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2ABB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2ABC[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController_1;                    // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TsTaskMoveToLocation_C_ExecuteUbergraph_TsTaskMoveToLocation) == 0x000008, "Wrong alignment on TsTaskMoveToLocation_C_ExecuteUbergraph_TsTaskMoveToLocation");
static_assert(sizeof(TsTaskMoveToLocation_C_ExecuteUbergraph_TsTaskMoveToLocation) == 0x000030, "Wrong size on TsTaskMoveToLocation_C_ExecuteUbergraph_TsTaskMoveToLocation");
static_assert(offsetof(TsTaskMoveToLocation_C_ExecuteUbergraph_TsTaskMoveToLocation, EntryPoint) == 0x000000, "Member 'TsTaskMoveToLocation_C_ExecuteUbergraph_TsTaskMoveToLocation::EntryPoint' has a wrong offset!");
static_assert(offsetof(TsTaskMoveToLocation_C_ExecuteUbergraph_TsTaskMoveToLocation, K2Node_Event_OwnerController) == 0x000008, "Member 'TsTaskMoveToLocation_C_ExecuteUbergraph_TsTaskMoveToLocation::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(TsTaskMoveToLocation_C_ExecuteUbergraph_TsTaskMoveToLocation, K2Node_Event_ControlledPawn) == 0x000010, "Member 'TsTaskMoveToLocation_C_ExecuteUbergraph_TsTaskMoveToLocation::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(TsTaskMoveToLocation_C_ExecuteUbergraph_TsTaskMoveToLocation, K2Node_Event_DeltaSeconds) == 0x000018, "Member 'TsTaskMoveToLocation_C_ExecuteUbergraph_TsTaskMoveToLocation::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(TsTaskMoveToLocation_C_ExecuteUbergraph_TsTaskMoveToLocation, K2Node_Event_OwnerController_1) == 0x000020, "Member 'TsTaskMoveToLocation_C_ExecuteUbergraph_TsTaskMoveToLocation::K2Node_Event_OwnerController_1' has a wrong offset!");
static_assert(offsetof(TsTaskMoveToLocation_C_ExecuteUbergraph_TsTaskMoveToLocation, K2Node_Event_ControlledPawn_1) == 0x000028, "Member 'TsTaskMoveToLocation_C_ExecuteUbergraph_TsTaskMoveToLocation::K2Node_Event_ControlledPawn_1' has a wrong offset!");

// Function TsTaskMoveToLocation.TsTaskMoveToLocation_C.ReceiveTickAI
// 0x0018 (0x0018 - 0x0000)
struct TsTaskMoveToLocation_C_ReceiveTickAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TsTaskMoveToLocation_C_ReceiveTickAI) == 0x000008, "Wrong alignment on TsTaskMoveToLocation_C_ReceiveTickAI");
static_assert(sizeof(TsTaskMoveToLocation_C_ReceiveTickAI) == 0x000018, "Wrong size on TsTaskMoveToLocation_C_ReceiveTickAI");
static_assert(offsetof(TsTaskMoveToLocation_C_ReceiveTickAI, OwnerController) == 0x000000, "Member 'TsTaskMoveToLocation_C_ReceiveTickAI::OwnerController' has a wrong offset!");
static_assert(offsetof(TsTaskMoveToLocation_C_ReceiveTickAI, ControlledPawn) == 0x000008, "Member 'TsTaskMoveToLocation_C_ReceiveTickAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(TsTaskMoveToLocation_C_ReceiveTickAI, DeltaSeconds) == 0x000010, "Member 'TsTaskMoveToLocation_C_ReceiveTickAI::DeltaSeconds' has a wrong offset!");

// Function TsTaskMoveToLocation.TsTaskMoveToLocation_C.ReceiveExecuteAI
// 0x0010 (0x0010 - 0x0000)
struct TsTaskMoveToLocation_C_ReceiveExecuteAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TsTaskMoveToLocation_C_ReceiveExecuteAI) == 0x000008, "Wrong alignment on TsTaskMoveToLocation_C_ReceiveExecuteAI");
static_assert(sizeof(TsTaskMoveToLocation_C_ReceiveExecuteAI) == 0x000010, "Wrong size on TsTaskMoveToLocation_C_ReceiveExecuteAI");
static_assert(offsetof(TsTaskMoveToLocation_C_ReceiveExecuteAI, OwnerController) == 0x000000, "Member 'TsTaskMoveToLocation_C_ReceiveExecuteAI::OwnerController' has a wrong offset!");
static_assert(offsetof(TsTaskMoveToLocation_C_ReceiveExecuteAI, ControlledPawn) == 0x000008, "Member 'TsTaskMoveToLocation_C_ReceiveExecuteAI::ControlledPawn' has a wrong offset!");

}

