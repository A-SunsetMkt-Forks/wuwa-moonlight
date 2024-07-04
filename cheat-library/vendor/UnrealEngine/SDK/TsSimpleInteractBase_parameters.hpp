#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsSimpleInteractBase

#include "Basic.hpp"

#include "SSimpleInteractResult_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function TsSimpleInteractBase.TsSimpleInteractBase_C.ExecuteUbergraph_TsSimpleInteractBase
// 0x000C (0x000C - 0x0000)
struct TsSimpleInteractBase_C_ExecuteUbergraph_TsSimpleInteractBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36A7[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TsSimpleInteractBase_C_ExecuteUbergraph_TsSimpleInteractBase) == 0x000004, "Wrong alignment on TsSimpleInteractBase_C_ExecuteUbergraph_TsSimpleInteractBase");
static_assert(sizeof(TsSimpleInteractBase_C_ExecuteUbergraph_TsSimpleInteractBase) == 0x00000C, "Wrong size on TsSimpleInteractBase_C_ExecuteUbergraph_TsSimpleInteractBase");
static_assert(offsetof(TsSimpleInteractBase_C_ExecuteUbergraph_TsSimpleInteractBase, EntryPoint) == 0x000000, "Member 'TsSimpleInteractBase_C_ExecuteUbergraph_TsSimpleInteractBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(TsSimpleInteractBase_C_ExecuteUbergraph_TsSimpleInteractBase, K2Node_Event_EndPlayReason) == 0x000004, "Member 'TsSimpleInteractBase_C_ExecuteUbergraph_TsSimpleInteractBase::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(TsSimpleInteractBase_C_ExecuteUbergraph_TsSimpleInteractBase, K2Node_Event_DeltaSeconds) == 0x000008, "Member 'TsSimpleInteractBase_C_ExecuteUbergraph_TsSimpleInteractBase::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function TsSimpleInteractBase.TsSimpleInteractBase_C.EditorTick
// 0x0004 (0x0004 - 0x0000)
struct TsSimpleInteractBase_C_EditorTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TsSimpleInteractBase_C_EditorTick) == 0x000004, "Wrong alignment on TsSimpleInteractBase_C_EditorTick");
static_assert(sizeof(TsSimpleInteractBase_C_EditorTick) == 0x000004, "Wrong size on TsSimpleInteractBase_C_EditorTick");
static_assert(offsetof(TsSimpleInteractBase_C_EditorTick, DeltaSeconds) == 0x000000, "Member 'TsSimpleInteractBase_C_EditorTick::DeltaSeconds' has a wrong offset!");

// Function TsSimpleInteractBase.TsSimpleInteractBase_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct TsSimpleInteractBase_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TsSimpleInteractBase_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on TsSimpleInteractBase_C_ReceiveEndPlay");
static_assert(sizeof(TsSimpleInteractBase_C_ReceiveEndPlay) == 0x000001, "Wrong size on TsSimpleInteractBase_C_ReceiveEndPlay");
static_assert(offsetof(TsSimpleInteractBase_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'TsSimpleInteractBase_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function TsSimpleInteractBase.TsSimpleInteractBase_C.GetBestTransform
// 0x0040 (0x0040 - 0x0000)
struct TsSimpleInteractBase_C_GetBestTransform final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                MoveOffset;                                        // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HalfHeight;                                        // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Radius;                                            // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSSimpleInteractResult                 ReturnValue;                                       // 0x001C(0x0020)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TsSimpleInteractBase_C_GetBestTransform) == 0x000008, "Wrong alignment on TsSimpleInteractBase_C_GetBestTransform");
static_assert(sizeof(TsSimpleInteractBase_C_GetBestTransform) == 0x000040, "Wrong size on TsSimpleInteractBase_C_GetBestTransform");
static_assert(offsetof(TsSimpleInteractBase_C_GetBestTransform, Actor) == 0x000000, "Member 'TsSimpleInteractBase_C_GetBestTransform::Actor' has a wrong offset!");
static_assert(offsetof(TsSimpleInteractBase_C_GetBestTransform, MoveOffset) == 0x000008, "Member 'TsSimpleInteractBase_C_GetBestTransform::MoveOffset' has a wrong offset!");
static_assert(offsetof(TsSimpleInteractBase_C_GetBestTransform, HalfHeight) == 0x000014, "Member 'TsSimpleInteractBase_C_GetBestTransform::HalfHeight' has a wrong offset!");
static_assert(offsetof(TsSimpleInteractBase_C_GetBestTransform, Radius) == 0x000018, "Member 'TsSimpleInteractBase_C_GetBestTransform::Radius' has a wrong offset!");
static_assert(offsetof(TsSimpleInteractBase_C_GetBestTransform, ReturnValue) == 0x00001C, "Member 'TsSimpleInteractBase_C_GetBestTransform::ReturnValue' has a wrong offset!");

}

