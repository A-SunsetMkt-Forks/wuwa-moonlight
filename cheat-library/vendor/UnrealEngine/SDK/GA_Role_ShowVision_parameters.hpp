#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Role_ShowVision

#include "Basic.hpp"


namespace SDK::Params
{

// Function GA_Role_ShowVision.GA_Role_ShowVision_C.ExecuteUbergraph_GA_Role_ShowVision
// 0x0018 (0x0018 - 0x0000)
struct GA_Role_ShowVision_C_ExecuteUbergraph_GA_Role_ShowVision final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_376F[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc__________;                                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ActivateAbilityVision_ReturnValue;        // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Role_ShowVision_C_ExecuteUbergraph_GA_Role_ShowVision) == 0x000008, "Wrong alignment on GA_Role_ShowVision_C_ExecuteUbergraph_GA_Role_ShowVision");
static_assert(sizeof(GA_Role_ShowVision_C_ExecuteUbergraph_GA_Role_ShowVision) == 0x000018, "Wrong size on GA_Role_ShowVision_C_ExecuteUbergraph_GA_Role_ShowVision");
static_assert(offsetof(GA_Role_ShowVision_C_ExecuteUbergraph_GA_Role_ShowVision, EntryPoint) == 0x000000, "Member 'GA_Role_ShowVision_C_ExecuteUbergraph_GA_Role_ShowVision::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Role_ShowVision_C_ExecuteUbergraph_GA_Role_ShowVision, K2Node_Event_bWasCancelled) == 0x000004, "Member 'GA_Role_ShowVision_C_ExecuteUbergraph_GA_Role_ShowVision::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Role_ShowVision_C_ExecuteUbergraph_GA_Role_ShowVision, CallFunc__________) == 0x000008, "Member 'GA_Role_ShowVision_C_ExecuteUbergraph_GA_Role_ShowVision::CallFunc__________' has a wrong offset!");
static_assert(offsetof(GA_Role_ShowVision_C_ExecuteUbergraph_GA_Role_ShowVision, CallFunc_ActivateAbilityVision_ReturnValue) == 0x000010, "Member 'GA_Role_ShowVision_C_ExecuteUbergraph_GA_Role_ShowVision::CallFunc_ActivateAbilityVision_ReturnValue' has a wrong offset!");

// Function GA_Role_ShowVision.GA_Role_ShowVision_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Role_ShowVision_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Role_ShowVision_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Role_ShowVision_C_K2_OnEndAbility");
static_assert(sizeof(GA_Role_ShowVision_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Role_ShowVision_C_K2_OnEndAbility");
static_assert(offsetof(GA_Role_ShowVision_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Role_ShowVision_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}

