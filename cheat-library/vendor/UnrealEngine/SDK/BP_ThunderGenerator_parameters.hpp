#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ThunderGenerator

#include "Basic.hpp"

#include "AkAudio_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_ThunderGenerator.BP_ThunderGenerator_C.ExecuteUbergraph_BP_ThunderGenerator
// 0x0040 (0x0040 - 0x0000)
struct BP_ThunderGenerator_C_ExecuteUbergraph_BP_ThunderGenerator final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35C1[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_Event_Location;                             // 0x0008(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bAttack;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35C2[0x1];                                     // 0x0017(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PostEventAtLocation_ReturnValue;          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPDA_ThunderConfig_C*                   CallFunc_Map_Find_Value;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35C3[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetValue_Float_ReturnValue;               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35C4[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThunderGenerator_C_ExecuteUbergraph_BP_ThunderGenerator) == 0x000008, "Wrong alignment on BP_ThunderGenerator_C_ExecuteUbergraph_BP_ThunderGenerator");
static_assert(sizeof(BP_ThunderGenerator_C_ExecuteUbergraph_BP_ThunderGenerator) == 0x000040, "Wrong size on BP_ThunderGenerator_C_ExecuteUbergraph_BP_ThunderGenerator");
static_assert(offsetof(BP_ThunderGenerator_C_ExecuteUbergraph_BP_ThunderGenerator, EntryPoint) == 0x000000, "Member 'BP_ThunderGenerator_C_ExecuteUbergraph_BP_ThunderGenerator::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ThunderGenerator_C_ExecuteUbergraph_BP_ThunderGenerator, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'BP_ThunderGenerator_C_ExecuteUbergraph_BP_ThunderGenerator::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThunderGenerator_C_ExecuteUbergraph_BP_ThunderGenerator, CallFunc_IsValid_ReturnValue_1) == 0x000005, "Member 'BP_ThunderGenerator_C_ExecuteUbergraph_BP_ThunderGenerator::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ThunderGenerator_C_ExecuteUbergraph_BP_ThunderGenerator, K2Node_Event_Location) == 0x000008, "Member 'BP_ThunderGenerator_C_ExecuteUbergraph_BP_ThunderGenerator::K2Node_Event_Location' has a wrong offset!");
static_assert(offsetof(BP_ThunderGenerator_C_ExecuteUbergraph_BP_ThunderGenerator, K2Node_Event_bAttack) == 0x000014, "Member 'BP_ThunderGenerator_C_ExecuteUbergraph_BP_ThunderGenerator::K2Node_Event_bAttack' has a wrong offset!");
static_assert(offsetof(BP_ThunderGenerator_C_ExecuteUbergraph_BP_ThunderGenerator, CallFunc_IsValid_ReturnValue_2) == 0x000015, "Member 'BP_ThunderGenerator_C_ExecuteUbergraph_BP_ThunderGenerator::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ThunderGenerator_C_ExecuteUbergraph_BP_ThunderGenerator, CallFunc_IsValid_ReturnValue_3) == 0x000016, "Member 'BP_ThunderGenerator_C_ExecuteUbergraph_BP_ThunderGenerator::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ThunderGenerator_C_ExecuteUbergraph_BP_ThunderGenerator, CallFunc_PostEventAtLocation_ReturnValue) == 0x000018, "Member 'BP_ThunderGenerator_C_ExecuteUbergraph_BP_ThunderGenerator::CallFunc_PostEventAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThunderGenerator_C_ExecuteUbergraph_BP_ThunderGenerator, K2Node_Event_DeltaSeconds) == 0x00001C, "Member 'BP_ThunderGenerator_C_ExecuteUbergraph_BP_ThunderGenerator::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_ThunderGenerator_C_ExecuteUbergraph_BP_ThunderGenerator, CallFunc_Map_Find_Value) == 0x000020, "Member 'BP_ThunderGenerator_C_ExecuteUbergraph_BP_ThunderGenerator::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_ThunderGenerator_C_ExecuteUbergraph_BP_ThunderGenerator, CallFunc_Map_Find_ReturnValue) == 0x000028, "Member 'BP_ThunderGenerator_C_ExecuteUbergraph_BP_ThunderGenerator::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThunderGenerator_C_ExecuteUbergraph_BP_ThunderGenerator, CallFunc_GetValue_Float_ReturnValue) == 0x00002C, "Member 'BP_ThunderGenerator_C_ExecuteUbergraph_BP_ThunderGenerator::CallFunc_GetValue_Float_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThunderGenerator_C_ExecuteUbergraph_BP_ThunderGenerator, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000030, "Member 'BP_ThunderGenerator_C_ExecuteUbergraph_BP_ThunderGenerator::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThunderGenerator_C_ExecuteUbergraph_BP_ThunderGenerator, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000034, "Member 'BP_ThunderGenerator_C_ExecuteUbergraph_BP_ThunderGenerator::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThunderGenerator_C_ExecuteUbergraph_BP_ThunderGenerator, K2Node_Event_EndPlayReason) == 0x000038, "Member 'BP_ThunderGenerator_C_ExecuteUbergraph_BP_ThunderGenerator::K2Node_Event_EndPlayReason' has a wrong offset!");

// Function BP_ThunderGenerator.BP_ThunderGenerator_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_ThunderGenerator_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThunderGenerator_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_ThunderGenerator_C_ReceiveEndPlay");
static_assert(sizeof(BP_ThunderGenerator_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_ThunderGenerator_C_ReceiveEndPlay");
static_assert(offsetof(BP_ThunderGenerator_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_ThunderGenerator_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_ThunderGenerator.BP_ThunderGenerator_C.OnUpdateThunderEffect
// 0x0004 (0x0004 - 0x0000)
struct BP_ThunderGenerator_C_OnUpdateThunderEffect final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThunderGenerator_C_OnUpdateThunderEffect) == 0x000004, "Wrong alignment on BP_ThunderGenerator_C_OnUpdateThunderEffect");
static_assert(sizeof(BP_ThunderGenerator_C_OnUpdateThunderEffect) == 0x000004, "Wrong size on BP_ThunderGenerator_C_OnUpdateThunderEffect");
static_assert(offsetof(BP_ThunderGenerator_C_OnUpdateThunderEffect, DeltaSeconds) == 0x000000, "Member 'BP_ThunderGenerator_C_OnUpdateThunderEffect::DeltaSeconds' has a wrong offset!");

// Function BP_ThunderGenerator.BP_ThunderGenerator_C.OnReceiveThunderAttack
// 0x0010 (0x0010 - 0x0000)
struct BP_ThunderGenerator_C_OnReceiveThunderAttack final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAttack;                                           // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ThunderGenerator_C_OnReceiveThunderAttack) == 0x000004, "Wrong alignment on BP_ThunderGenerator_C_OnReceiveThunderAttack");
static_assert(sizeof(BP_ThunderGenerator_C_OnReceiveThunderAttack) == 0x000010, "Wrong size on BP_ThunderGenerator_C_OnReceiveThunderAttack");
static_assert(offsetof(BP_ThunderGenerator_C_OnReceiveThunderAttack, Location) == 0x000000, "Member 'BP_ThunderGenerator_C_OnReceiveThunderAttack::Location' has a wrong offset!");
static_assert(offsetof(BP_ThunderGenerator_C_OnReceiveThunderAttack, bAttack) == 0x00000C, "Member 'BP_ThunderGenerator_C_OnReceiveThunderAttack::bAttack' has a wrong offset!");

// Function BP_ThunderGenerator.BP_ThunderGenerator_C.UpdateAudio2D
// 0x001C (0x001C - 0x0000)
struct BP_ThunderGenerator_C_UpdateAudio2D final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35C5[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> ___delegate_Variable;                              // 0x0004(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	int32                                         CallFunc_PostEvent_ReturnValue;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThunderGenerator_C_UpdateAudio2D) == 0x000004, "Wrong alignment on BP_ThunderGenerator_C_UpdateAudio2D");
static_assert(sizeof(BP_ThunderGenerator_C_UpdateAudio2D) == 0x00001C, "Wrong size on BP_ThunderGenerator_C_UpdateAudio2D");
static_assert(offsetof(BP_ThunderGenerator_C_UpdateAudio2D, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_ThunderGenerator_C_UpdateAudio2D::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThunderGenerator_C_UpdateAudio2D, CallFunc_IsValid_ReturnValue_1) == 0x000001, "Member 'BP_ThunderGenerator_C_UpdateAudio2D::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ThunderGenerator_C_UpdateAudio2D, CallFunc_IsValid_ReturnValue_2) == 0x000002, "Member 'BP_ThunderGenerator_C_UpdateAudio2D::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ThunderGenerator_C_UpdateAudio2D, ___delegate_Variable) == 0x000004, "Member 'BP_ThunderGenerator_C_UpdateAudio2D::___delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_ThunderGenerator_C_UpdateAudio2D, CallFunc_PostEvent_ReturnValue) == 0x000018, "Member 'BP_ThunderGenerator_C_UpdateAudio2D::CallFunc_PostEvent_ReturnValue' has a wrong offset!");

}

