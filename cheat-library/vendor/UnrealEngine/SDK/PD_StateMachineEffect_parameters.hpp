#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PD_StateMachineEffect

#include "Basic.hpp"

#include "EEffectState_structs.hpp"
#include "SEffectStateInfo_structs.hpp"


namespace SDK::Params
{

// Function PD_StateMachineEffect.PD_StateMachineEffect_C.GetStateInfo
// 0x0160 (0x0160 - 0x0000)
struct PD_StateMachineEffect_C_GetStateInfo final
{
public:
	EEffectState                                  InputState;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2BC3[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSEffectStateInfo                      Ret;                                               // 0x0008(0x0150)(Parm, OutParm, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PD_StateMachineEffect_C_GetStateInfo) == 0x000008, "Wrong alignment on PD_StateMachineEffect_C_GetStateInfo");
static_assert(sizeof(PD_StateMachineEffect_C_GetStateInfo) == 0x000160, "Wrong size on PD_StateMachineEffect_C_GetStateInfo");
static_assert(offsetof(PD_StateMachineEffect_C_GetStateInfo, InputState) == 0x000000, "Member 'PD_StateMachineEffect_C_GetStateInfo::InputState' has a wrong offset!");
static_assert(offsetof(PD_StateMachineEffect_C_GetStateInfo, Ret) == 0x000008, "Member 'PD_StateMachineEffect_C_GetStateInfo::Ret' has a wrong offset!");
static_assert(offsetof(PD_StateMachineEffect_C_GetStateInfo, K2Node_SwitchEnum_CmpSuccess) == 0x000158, "Member 'PD_StateMachineEffect_C_GetStateInfo::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}

