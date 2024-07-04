#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_KuroMasterSeqEvent

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.ExecuteUbergraph_BP_KuroMasterSeqEvent
// 0x0028 (0x0028 - 0x0000)
struct BP_KuroMasterSeqEvent_C_ExecuteUbergraph_BP_KuroMasterSeqEvent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_312B[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_312C[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ScreenEffectSystem_C*               CallFunc_GetScreenEffectSystem_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_312D[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Variable;                                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_KuroMasterSeqEvent_C_ExecuteUbergraph_BP_KuroMasterSeqEvent) == 0x000008, "Wrong alignment on BP_KuroMasterSeqEvent_C_ExecuteUbergraph_BP_KuroMasterSeqEvent");
static_assert(sizeof(BP_KuroMasterSeqEvent_C_ExecuteUbergraph_BP_KuroMasterSeqEvent) == 0x000028, "Wrong size on BP_KuroMasterSeqEvent_C_ExecuteUbergraph_BP_KuroMasterSeqEvent");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_ExecuteUbergraph_BP_KuroMasterSeqEvent, EntryPoint) == 0x000000, "Member 'BP_KuroMasterSeqEvent_C_ExecuteUbergraph_BP_KuroMasterSeqEvent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_ExecuteUbergraph_BP_KuroMasterSeqEvent, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000004, "Member 'BP_KuroMasterSeqEvent_C_ExecuteUbergraph_BP_KuroMasterSeqEvent::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_ExecuteUbergraph_BP_KuroMasterSeqEvent, K2Node_Event_DeltaSeconds) == 0x000008, "Member 'BP_KuroMasterSeqEvent_C_ExecuteUbergraph_BP_KuroMasterSeqEvent::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_ExecuteUbergraph_BP_KuroMasterSeqEvent, CallFunc_GetScreenEffectSystem_ReturnValue) == 0x000010, "Member 'BP_KuroMasterSeqEvent_C_ExecuteUbergraph_BP_KuroMasterSeqEvent::CallFunc_GetScreenEffectSystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_ExecuteUbergraph_BP_KuroMasterSeqEvent, CallFunc_Greater_IntInt_ReturnValue) == 0x000018, "Member 'BP_KuroMasterSeqEvent_C_ExecuteUbergraph_BP_KuroMasterSeqEvent::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_ExecuteUbergraph_BP_KuroMasterSeqEvent, CallFunc_Subtract_IntInt_ReturnValue) == 0x00001C, "Member 'BP_KuroMasterSeqEvent_C_ExecuteUbergraph_BP_KuroMasterSeqEvent::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_ExecuteUbergraph_BP_KuroMasterSeqEvent, ___int_Variable) == 0x000020, "Member 'BP_KuroMasterSeqEvent_C_ExecuteUbergraph_BP_KuroMasterSeqEvent::___int_Variable' has a wrong offset!");

// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_KuroMasterSeqEvent_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_KuroMasterSeqEvent_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_KuroMasterSeqEvent_C_ReceiveTick");
static_assert(sizeof(BP_KuroMasterSeqEvent_C_ReceiveTick) == 0x000004, "Wrong size on BP_KuroMasterSeqEvent_C_ReceiveTick");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_KuroMasterSeqEvent_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.;��\
// 0x0010 (0x0010 - 0x0000)
struct BP_KuroMasterSeqEvent_C______ final
{
public:
	bool                                          ShouldBlend;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_312E[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         blendTime;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EViewTargetBlendFunction                      blendFunction;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_312F[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         blendExp;                                          // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_KuroMasterSeqEvent_C______) == 0x000004, "Wrong alignment on BP_KuroMasterSeqEvent_C______");
static_assert(sizeof(BP_KuroMasterSeqEvent_C______) == 0x000010, "Wrong size on BP_KuroMasterSeqEvent_C______");
static_assert(offsetof(BP_KuroMasterSeqEvent_C______, ShouldBlend) == 0x000000, "Member 'BP_KuroMasterSeqEvent_C______::ShouldBlend' has a wrong offset!");
static_assert(offsetof(BP_KuroMasterSeqEvent_C______, blendTime) == 0x000004, "Member 'BP_KuroMasterSeqEvent_C______::blendTime' has a wrong offset!");
static_assert(offsetof(BP_KuroMasterSeqEvent_C______, blendFunction) == 0x000008, "Member 'BP_KuroMasterSeqEvent_C______::blendFunction' has a wrong offset!");
static_assert(offsetof(BP_KuroMasterSeqEvent_C______, blendExp) == 0x00000C, "Member 'BP_KuroMasterSeqEvent_C______::blendExp' has a wrong offset!");

// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.t\4�jݻ
// 0x0028 (0x0028 - 0x0000)
struct BP_KuroMasterSeqEvent_C__t_4_j__ final
{
public:
	int32                                         NearClip;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_KuroMasterSeqEvent_C__t_4_j__) == 0x000008, "Wrong alignment on BP_KuroMasterSeqEvent_C__t_4_j__");
static_assert(sizeof(BP_KuroMasterSeqEvent_C__t_4_j__) == 0x000028, "Wrong size on BP_KuroMasterSeqEvent_C__t_4_j__");
static_assert(offsetof(BP_KuroMasterSeqEvent_C__t_4_j__, NearClip) == 0x000000, "Member 'BP_KuroMasterSeqEvent_C__t_4_j__::NearClip' has a wrong offset!");
static_assert(offsetof(BP_KuroMasterSeqEvent_C__t_4_j__, CallFunc_Clamp_ReturnValue) == 0x000004, "Member 'BP_KuroMasterSeqEvent_C__t_4_j__::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroMasterSeqEvent_C__t_4_j__, CallFunc_Conv_IntToString_ReturnValue) == 0x000008, "Member 'BP_KuroMasterSeqEvent_C__t_4_j__::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroMasterSeqEvent_C__t_4_j__, CallFunc_Concat_StrStr_ReturnValue) == 0x000018, "Member 'BP_KuroMasterSeqEvent_C__t_4_j__::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");

// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C. s�i�&
// 0x0001 (0x0001 - 0x0000)
struct BP_KuroMasterSeqEvent_C__s_i__ final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_KuroMasterSeqEvent_C__s_i__) == 0x000001, "Wrong alignment on BP_KuroMasterSeqEvent_C__s_i__");
static_assert(sizeof(BP_KuroMasterSeqEvent_C__s_i__) == 0x000001, "Wrong size on BP_KuroMasterSeqEvent_C__s_i__");
static_assert(offsetof(BP_KuroMasterSeqEvent_C__s_i__, Enable) == 0x000000, "Member 'BP_KuroMasterSeqEvent_C__s_i__::Enable' has a wrong offset!");

// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.gLAL:
// 0x0010 (0x0010 - 0x0000)
struct BP_KuroMasterSeqEvent_C_GLA_L_ final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_KuroMasterSeqEvent_C_GLA_L_) == 0x000008, "Wrong alignment on BP_KuroMasterSeqEvent_C_GLA_L_");
static_assert(sizeof(BP_KuroMasterSeqEvent_C_GLA_L_) == 0x000010, "Wrong size on BP_KuroMasterSeqEvent_C_GLA_L_");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_GLA_L_, Key) == 0x000000, "Member 'BP_KuroMasterSeqEvent_C_GLA_L_::Key' has a wrong offset!");

// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C. ��
// 0x0001 (0x0001 - 0x0000)
struct BP_KuroMasterSeqEvent_C_____ final
{
public:
	bool                                          CallFunc_IsGame_ReturnValue;                       // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_KuroMasterSeqEvent_C_____) == 0x000001, "Wrong alignment on BP_KuroMasterSeqEvent_C_____");
static_assert(sizeof(BP_KuroMasterSeqEvent_C_____) == 0x000001, "Wrong size on BP_KuroMasterSeqEvent_C_____");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_____, CallFunc_IsGame_ReturnValue) == 0x000000, "Member 'BP_KuroMasterSeqEvent_C_____::CallFunc_IsGame_ReturnValue' has a wrong offset!");

// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.S ���:
// 0x0008 (0x0008 - 0x0000)
struct BP_KuroMasterSeqEvent_C_S_____ final
{
public:
	int32                                         ChapterState;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ChapterId;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_KuroMasterSeqEvent_C_S_____) == 0x000004, "Wrong alignment on BP_KuroMasterSeqEvent_C_S_____");
static_assert(sizeof(BP_KuroMasterSeqEvent_C_S_____) == 0x000008, "Wrong size on BP_KuroMasterSeqEvent_C_S_____");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_S_____, ChapterState) == 0x000000, "Member 'BP_KuroMasterSeqEvent_C_S_____::ChapterState' has a wrong offset!");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_S_____, ChapterId) == 0x000004, "Member 'BP_KuroMasterSeqEvent_C_S_____::ChapterId' has a wrong offset!");

// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.U:8Logo
// 0x0004 (0x0004 - 0x0000)
struct BP_KuroMasterSeqEvent_C_U_8_Logo final
{
public:
	float                                         Time;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_KuroMasterSeqEvent_C_U_8_Logo) == 0x000004, "Wrong alignment on BP_KuroMasterSeqEvent_C_U_8_Logo");
static_assert(sizeof(BP_KuroMasterSeqEvent_C_U_8_Logo) == 0x000004, "Wrong size on BP_KuroMasterSeqEvent_C_U_8_Logo");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_U_8_Logo, Time) == 0x000000, "Member 'BP_KuroMasterSeqEvent_C_U_8_Logo::Time' has a wrong offset!");

}

