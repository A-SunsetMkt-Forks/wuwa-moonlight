#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsUiSceneRoleActor

#include "Basic.hpp"

#include "ECharacterDitherType_structs.hpp"


namespace SDK::Params
{

// Function TsUiSceneRoleActor.TsUiSceneRoleActor_C.ExecuteUbergraph_TsUiSceneRoleActor
// 0x0008 (0x0008 - 0x0000)
struct TsUiSceneRoleActor_C_ExecuteUbergraph_TsUiSceneRoleActor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TsUiSceneRoleActor_C_ExecuteUbergraph_TsUiSceneRoleActor) == 0x000004, "Wrong alignment on TsUiSceneRoleActor_C_ExecuteUbergraph_TsUiSceneRoleActor");
static_assert(sizeof(TsUiSceneRoleActor_C_ExecuteUbergraph_TsUiSceneRoleActor) == 0x000008, "Wrong size on TsUiSceneRoleActor_C_ExecuteUbergraph_TsUiSceneRoleActor");
static_assert(offsetof(TsUiSceneRoleActor_C_ExecuteUbergraph_TsUiSceneRoleActor, EntryPoint) == 0x000000, "Member 'TsUiSceneRoleActor_C_ExecuteUbergraph_TsUiSceneRoleActor::EntryPoint' has a wrong offset!");
static_assert(offsetof(TsUiSceneRoleActor_C_ExecuteUbergraph_TsUiSceneRoleActor, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'TsUiSceneRoleActor_C_ExecuteUbergraph_TsUiSceneRoleActor::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function TsUiSceneRoleActor.TsUiSceneRoleActor_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct TsUiSceneRoleActor_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TsUiSceneRoleActor_C_ReceiveTick) == 0x000004, "Wrong alignment on TsUiSceneRoleActor_C_ReceiveTick");
static_assert(sizeof(TsUiSceneRoleActor_C_ReceiveTick) == 0x000004, "Wrong size on TsUiSceneRoleActor_C_ReceiveTick");
static_assert(offsetof(TsUiSceneRoleActor_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'TsUiSceneRoleActor_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function TsUiSceneRoleActor.TsUiSceneRoleActor_C.SetDitherEffect
// 0x0008 (0x0008 - 0x0000)
struct TsUiSceneRoleActor_C_SetDitherEffect final
{
public:
	float                                         DitherRate;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharacterDitherType                          DitherType;                                        // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TsUiSceneRoleActor_C_SetDitherEffect) == 0x000004, "Wrong alignment on TsUiSceneRoleActor_C_SetDitherEffect");
static_assert(sizeof(TsUiSceneRoleActor_C_SetDitherEffect) == 0x000008, "Wrong size on TsUiSceneRoleActor_C_SetDitherEffect");
static_assert(offsetof(TsUiSceneRoleActor_C_SetDitherEffect, DitherRate) == 0x000000, "Member 'TsUiSceneRoleActor_C_SetDitherEffect::DitherRate' has a wrong offset!");
static_assert(offsetof(TsUiSceneRoleActor_C_SetDitherEffect, DitherType) == 0x000004, "Member 'TsUiSceneRoleActor_C_SetDitherEffect::DitherType' has a wrong offset!");

// Function TsUiSceneRoleActor.TsUiSceneRoleActor_C.IsShowUiWepaonEffect
// 0x0001 (0x0001 - 0x0000)
struct TsUiSceneRoleActor_C_IsShowUiWepaonEffect final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TsUiSceneRoleActor_C_IsShowUiWepaonEffect) == 0x000001, "Wrong alignment on TsUiSceneRoleActor_C_IsShowUiWepaonEffect");
static_assert(sizeof(TsUiSceneRoleActor_C_IsShowUiWepaonEffect) == 0x000001, "Wrong size on TsUiSceneRoleActor_C_IsShowUiWepaonEffect");
static_assert(offsetof(TsUiSceneRoleActor_C_IsShowUiWepaonEffect, ReturnValue) == 0x000000, "Member 'TsUiSceneRoleActor_C_IsShowUiWepaonEffect::ReturnValue' has a wrong offset!");

// Function TsUiSceneRoleActor.TsUiSceneRoleActor_C.GetIsRoleMeshLoading
// 0x0001 (0x0001 - 0x0000)
struct TsUiSceneRoleActor_C_GetIsRoleMeshLoading final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TsUiSceneRoleActor_C_GetIsRoleMeshLoading) == 0x000001, "Wrong alignment on TsUiSceneRoleActor_C_GetIsRoleMeshLoading");
static_assert(sizeof(TsUiSceneRoleActor_C_GetIsRoleMeshLoading) == 0x000001, "Wrong size on TsUiSceneRoleActor_C_GetIsRoleMeshLoading");
static_assert(offsetof(TsUiSceneRoleActor_C_GetIsRoleMeshLoading, ReturnValue) == 0x000000, "Member 'TsUiSceneRoleActor_C_GetIsRoleMeshLoading::ReturnValue' has a wrong offset!");

// Function TsUiSceneRoleActor.TsUiSceneRoleActor_C.SetDitherEffectWithWeapon
// 0x0008 (0x0008 - 0x0000)
struct TsUiSceneRoleActor_C_SetDitherEffectWithWeapon final
{
public:
	float                                         DitherRate;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharacterDitherType                          DitherType;                                        // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TsUiSceneRoleActor_C_SetDitherEffectWithWeapon) == 0x000004, "Wrong alignment on TsUiSceneRoleActor_C_SetDitherEffectWithWeapon");
static_assert(sizeof(TsUiSceneRoleActor_C_SetDitherEffectWithWeapon) == 0x000008, "Wrong size on TsUiSceneRoleActor_C_SetDitherEffectWithWeapon");
static_assert(offsetof(TsUiSceneRoleActor_C_SetDitherEffectWithWeapon, DitherRate) == 0x000000, "Member 'TsUiSceneRoleActor_C_SetDitherEffectWithWeapon::DitherRate' has a wrong offset!");
static_assert(offsetof(TsUiSceneRoleActor_C_SetDitherEffectWithWeapon, DitherType) == 0x000004, "Member 'TsUiSceneRoleActor_C_SetDitherEffectWithWeapon::DitherType' has a wrong offset!");

}

