#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SE_UISpriteFadeController

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function SE_UISpriteFadeController.SE_UISpriteFadeController_C.ExecuteUbergraph_SE_UISpriteFadeController
// 0x0008 (0x0008 - 0x0000)
struct SE_UISpriteFadeController_C_ExecuteUbergraph_SE_UISpriteFadeController final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_visibility;                           // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SE_UISpriteFadeController_C_ExecuteUbergraph_SE_UISpriteFadeController) == 0x000004, "Wrong alignment on SE_UISpriteFadeController_C_ExecuteUbergraph_SE_UISpriteFadeController");
static_assert(sizeof(SE_UISpriteFadeController_C_ExecuteUbergraph_SE_UISpriteFadeController) == 0x000008, "Wrong size on SE_UISpriteFadeController_C_ExecuteUbergraph_SE_UISpriteFadeController");
static_assert(offsetof(SE_UISpriteFadeController_C_ExecuteUbergraph_SE_UISpriteFadeController, EntryPoint) == 0x000000, "Member 'SE_UISpriteFadeController_C_ExecuteUbergraph_SE_UISpriteFadeController::EntryPoint' has a wrong offset!");
static_assert(offsetof(SE_UISpriteFadeController_C_ExecuteUbergraph_SE_UISpriteFadeController, K2Node_Event_EndPlayReason) == 0x000004, "Member 'SE_UISpriteFadeController_C_ExecuteUbergraph_SE_UISpriteFadeController::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(SE_UISpriteFadeController_C_ExecuteUbergraph_SE_UISpriteFadeController, K2Node_Event_visibility) == 0x000005, "Member 'SE_UISpriteFadeController_C_ExecuteUbergraph_SE_UISpriteFadeController::K2Node_Event_visibility' has a wrong offset!");

// Function SE_UISpriteFadeController.SE_UISpriteFadeController_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct SE_UISpriteFadeController_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SE_UISpriteFadeController_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on SE_UISpriteFadeController_C_ReceiveEndPlay");
static_assert(sizeof(SE_UISpriteFadeController_C_ReceiveEndPlay) == 0x000001, "Wrong size on SE_UISpriteFadeController_C_ReceiveEndPlay");
static_assert(offsetof(SE_UISpriteFadeController_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'SE_UISpriteFadeController_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function SE_UISpriteFadeController.SE_UISpriteFadeController_C.ApplyVisibility
// 0x0001 (0x0001 - 0x0000)
struct SE_UISpriteFadeController_C_ApplyVisibility final
{
public:
	bool                                          Visibility;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SE_UISpriteFadeController_C_ApplyVisibility) == 0x000001, "Wrong alignment on SE_UISpriteFadeController_C_ApplyVisibility");
static_assert(sizeof(SE_UISpriteFadeController_C_ApplyVisibility) == 0x000001, "Wrong size on SE_UISpriteFadeController_C_ApplyVisibility");
static_assert(offsetof(SE_UISpriteFadeController_C_ApplyVisibility, Visibility) == 0x000000, "Member 'SE_UISpriteFadeController_C_ApplyVisibility::Visibility' has a wrong offset!");

}

