#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Fx_Control_Obj

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_Fx_Control_Obj.BP_Fx_Control_Obj_C.ExecuteUbergraph_BP_Fx_Control_Obj
// 0x0018 (0x0018 - 0x0000)
struct BP_Fx_Control_Obj_C_ExecuteUbergraph_BP_Fx_Control_Obj final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3130[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Fx_Control_Obj_C_ExecuteUbergraph_BP_Fx_Control_Obj) == 0x000004, "Wrong alignment on BP_Fx_Control_Obj_C_ExecuteUbergraph_BP_Fx_Control_Obj");
static_assert(sizeof(BP_Fx_Control_Obj_C_ExecuteUbergraph_BP_Fx_Control_Obj) == 0x000018, "Wrong size on BP_Fx_Control_Obj_C_ExecuteUbergraph_BP_Fx_Control_Obj");
static_assert(offsetof(BP_Fx_Control_Obj_C_ExecuteUbergraph_BP_Fx_Control_Obj, EntryPoint) == 0x000000, "Member 'BP_Fx_Control_Obj_C_ExecuteUbergraph_BP_Fx_Control_Obj::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Fx_Control_Obj_C_ExecuteUbergraph_BP_Fx_Control_Obj, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'BP_Fx_Control_Obj_C_ExecuteUbergraph_BP_Fx_Control_Obj::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fx_Control_Obj_C_ExecuteUbergraph_BP_Fx_Control_Obj, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'BP_Fx_Control_Obj_C_ExecuteUbergraph_BP_Fx_Control_Obj::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fx_Control_Obj_C_ExecuteUbergraph_BP_Fx_Control_Obj, K2Node_Event_DeltaSeconds) == 0x000014, "Member 'BP_Fx_Control_Obj_C_ExecuteUbergraph_BP_Fx_Control_Obj::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function BP_Fx_Control_Obj.BP_Fx_Control_Obj_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_Fx_Control_Obj_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Fx_Control_Obj_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_Fx_Control_Obj_C_ReceiveTick");
static_assert(sizeof(BP_Fx_Control_Obj_C_ReceiveTick) == 0x000004, "Wrong size on BP_Fx_Control_Obj_C_ReceiveTick");
static_assert(offsetof(BP_Fx_Control_Obj_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_Fx_Control_Obj_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

