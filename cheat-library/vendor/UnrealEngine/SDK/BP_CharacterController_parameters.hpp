#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CharacterController

#include "Basic.hpp"

#include "InputCore_structs.hpp"


namespace SDK::Params
{

// Function BP_CharacterController.BP_CharacterController_C.ExecuteUbergraph_BP_CharacterController
// 0x0078 (0x0078 - 0x0000)
struct BP_CharacterController_C_ExecuteUbergraph_BP_CharacterController final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TsGetGmIsOpen_ReturnValue;                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33C3[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_PossessedPawn;                        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     K2Node_DynamicCast_AsTs_Base_Character;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33C4[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_UnpossessedPawn;                      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_KuroCheatManager_C*                 K2Node_DynamicCast_AsBP_Kuro_Cheat_Manager;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33C5[0x5];                                     // 0x0033(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   K2Node_Event_key_1;                                // 0x0038(0x0020)(UObjectWrapper, HasGetValueTypeHash)
	struct FKey                                   K2Node_Event_key;                                  // 0x0058(0x0020)(HasGetValueTypeHash)
};
static_assert(alignof(BP_CharacterController_C_ExecuteUbergraph_BP_CharacterController) == 0x000008, "Wrong alignment on BP_CharacterController_C_ExecuteUbergraph_BP_CharacterController");
static_assert(sizeof(BP_CharacterController_C_ExecuteUbergraph_BP_CharacterController) == 0x000078, "Wrong size on BP_CharacterController_C_ExecuteUbergraph_BP_CharacterController");
static_assert(offsetof(BP_CharacterController_C_ExecuteUbergraph_BP_CharacterController, EntryPoint) == 0x000000, "Member 'BP_CharacterController_C_ExecuteUbergraph_BP_CharacterController::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CharacterController_C_ExecuteUbergraph_BP_CharacterController, CallFunc_TsGetGmIsOpen_ReturnValue) == 0x000004, "Member 'BP_CharacterController_C_ExecuteUbergraph_BP_CharacterController::CallFunc_TsGetGmIsOpen_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharacterController_C_ExecuteUbergraph_BP_CharacterController, K2Node_Event_PossessedPawn) == 0x000008, "Member 'BP_CharacterController_C_ExecuteUbergraph_BP_CharacterController::K2Node_Event_PossessedPawn' has a wrong offset!");
static_assert(offsetof(BP_CharacterController_C_ExecuteUbergraph_BP_CharacterController, K2Node_DynamicCast_AsTs_Base_Character) == 0x000010, "Member 'BP_CharacterController_C_ExecuteUbergraph_BP_CharacterController::K2Node_DynamicCast_AsTs_Base_Character' has a wrong offset!");
static_assert(offsetof(BP_CharacterController_C_ExecuteUbergraph_BP_CharacterController, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_CharacterController_C_ExecuteUbergraph_BP_CharacterController::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_CharacterController_C_ExecuteUbergraph_BP_CharacterController, K2Node_Event_UnpossessedPawn) == 0x000020, "Member 'BP_CharacterController_C_ExecuteUbergraph_BP_CharacterController::K2Node_Event_UnpossessedPawn' has a wrong offset!");
static_assert(offsetof(BP_CharacterController_C_ExecuteUbergraph_BP_CharacterController, K2Node_DynamicCast_AsBP_Kuro_Cheat_Manager) == 0x000028, "Member 'BP_CharacterController_C_ExecuteUbergraph_BP_CharacterController::K2Node_DynamicCast_AsBP_Kuro_Cheat_Manager' has a wrong offset!");
static_assert(offsetof(BP_CharacterController_C_ExecuteUbergraph_BP_CharacterController, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'BP_CharacterController_C_ExecuteUbergraph_BP_CharacterController::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_CharacterController_C_ExecuteUbergraph_BP_CharacterController, CallFunc_IsValid_ReturnValue) == 0x000031, "Member 'BP_CharacterController_C_ExecuteUbergraph_BP_CharacterController::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharacterController_C_ExecuteUbergraph_BP_CharacterController, CallFunc_IsValid_ReturnValue_1) == 0x000032, "Member 'BP_CharacterController_C_ExecuteUbergraph_BP_CharacterController::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CharacterController_C_ExecuteUbergraph_BP_CharacterController, K2Node_Event_key_1) == 0x000038, "Member 'BP_CharacterController_C_ExecuteUbergraph_BP_CharacterController::K2Node_Event_key_1' has a wrong offset!");
static_assert(offsetof(BP_CharacterController_C_ExecuteUbergraph_BP_CharacterController, K2Node_Event_key) == 0x000058, "Member 'BP_CharacterController_C_ExecuteUbergraph_BP_CharacterController::K2Node_Event_key' has a wrong offset!");

// Function BP_CharacterController.BP_CharacterController_C.OnReleaseAnyKey
// 0x0020 (0x0020 - 0x0000)
struct BP_CharacterController_C_OnReleaseAnyKey final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BP_CharacterController_C_OnReleaseAnyKey) == 0x000008, "Wrong alignment on BP_CharacterController_C_OnReleaseAnyKey");
static_assert(sizeof(BP_CharacterController_C_OnReleaseAnyKey) == 0x000020, "Wrong size on BP_CharacterController_C_OnReleaseAnyKey");
static_assert(offsetof(BP_CharacterController_C_OnReleaseAnyKey, Key) == 0x000000, "Member 'BP_CharacterController_C_OnReleaseAnyKey::Key' has a wrong offset!");

// Function BP_CharacterController.BP_CharacterController_C.OnPressAnyKey
// 0x0020 (0x0020 - 0x0000)
struct BP_CharacterController_C_OnPressAnyKey final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_CharacterController_C_OnPressAnyKey) == 0x000008, "Wrong alignment on BP_CharacterController_C_OnPressAnyKey");
static_assert(sizeof(BP_CharacterController_C_OnPressAnyKey) == 0x000020, "Wrong size on BP_CharacterController_C_OnPressAnyKey");
static_assert(offsetof(BP_CharacterController_C_OnPressAnyKey, Key) == 0x000000, "Member 'BP_CharacterController_C_OnPressAnyKey::Key' has a wrong offset!");

// Function BP_CharacterController.BP_CharacterController_C.ReceiveUnPossess
// 0x0008 (0x0008 - 0x0000)
struct BP_CharacterController_C_ReceiveUnPossess final
{
public:
	class APawn*                                  UnpossessedPawn;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CharacterController_C_ReceiveUnPossess) == 0x000008, "Wrong alignment on BP_CharacterController_C_ReceiveUnPossess");
static_assert(sizeof(BP_CharacterController_C_ReceiveUnPossess) == 0x000008, "Wrong size on BP_CharacterController_C_ReceiveUnPossess");
static_assert(offsetof(BP_CharacterController_C_ReceiveUnPossess, UnpossessedPawn) == 0x000000, "Member 'BP_CharacterController_C_ReceiveUnPossess::UnpossessedPawn' has a wrong offset!");

// Function BP_CharacterController.BP_CharacterController_C.ReceivePossess
// 0x0008 (0x0008 - 0x0000)
struct BP_CharacterController_C_ReceivePossess final
{
public:
	class APawn*                                  PossessedPawn;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CharacterController_C_ReceivePossess) == 0x000008, "Wrong alignment on BP_CharacterController_C_ReceivePossess");
static_assert(sizeof(BP_CharacterController_C_ReceivePossess) == 0x000008, "Wrong size on BP_CharacterController_C_ReceivePossess");
static_assert(offsetof(BP_CharacterController_C_ReceivePossess, PossessedPawn) == 0x000000, "Member 'BP_CharacterController_C_ReceivePossess::PossessedPawn' has a wrong offset!");

}

