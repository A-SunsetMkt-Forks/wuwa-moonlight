#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EffectActorWaterFall_Low

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_EffectActorWaterFall_Low.BP_EffectActorWaterFall_Low_C.ExecuteUbergraph_BP_EffectActorWaterFall_Low
// 0x0080 (0x0080 - 0x0000)
struct BP_EffectActorWaterFall_Low_C_ExecuteUbergraph_BP_EffectActorWaterFall_Low final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3982[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_Handle;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EffectHandleIsValid_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_StopEffect_ReturnValue;                   // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3983[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_BreakSoftObjectPath_PathString;           // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_GetOuterObject_ReturnValue;               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3984[0xF];                                     // 0x0031(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0040(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_SpawnEffect_ReturnValue;                  // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EffectActorWaterFall_Low_C_ExecuteUbergraph_BP_EffectActorWaterFall_Low) == 0x000010, "Wrong alignment on BP_EffectActorWaterFall_Low_C_ExecuteUbergraph_BP_EffectActorWaterFall_Low");
static_assert(sizeof(BP_EffectActorWaterFall_Low_C_ExecuteUbergraph_BP_EffectActorWaterFall_Low) == 0x000080, "Wrong size on BP_EffectActorWaterFall_Low_C_ExecuteUbergraph_BP_EffectActorWaterFall_Low");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_ExecuteUbergraph_BP_EffectActorWaterFall_Low, EntryPoint) == 0x000000, "Member 'BP_EffectActorWaterFall_Low_C_ExecuteUbergraph_BP_EffectActorWaterFall_Low::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_ExecuteUbergraph_BP_EffectActorWaterFall_Low, K2Node_Event_EndPlayReason) == 0x000004, "Member 'BP_EffectActorWaterFall_Low_C_ExecuteUbergraph_BP_EffectActorWaterFall_Low::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_ExecuteUbergraph_BP_EffectActorWaterFall_Low, K2Node_Event_Handle) == 0x000008, "Member 'BP_EffectActorWaterFall_Low_C_ExecuteUbergraph_BP_EffectActorWaterFall_Low::K2Node_Event_Handle' has a wrong offset!");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_ExecuteUbergraph_BP_EffectActorWaterFall_Low, K2Node_Event_DeltaSeconds) == 0x00000C, "Member 'BP_EffectActorWaterFall_Low_C_ExecuteUbergraph_BP_EffectActorWaterFall_Low::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_ExecuteUbergraph_BP_EffectActorWaterFall_Low, CallFunc_EffectHandleIsValid_ReturnValue) == 0x000010, "Member 'BP_EffectActorWaterFall_Low_C_ExecuteUbergraph_BP_EffectActorWaterFall_Low::CallFunc_EffectHandleIsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_ExecuteUbergraph_BP_EffectActorWaterFall_Low, CallFunc_StopEffect_ReturnValue) == 0x000011, "Member 'BP_EffectActorWaterFall_Low_C_ExecuteUbergraph_BP_EffectActorWaterFall_Low::CallFunc_StopEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_ExecuteUbergraph_BP_EffectActorWaterFall_Low, CallFunc_BreakSoftObjectPath_PathString) == 0x000018, "Member 'BP_EffectActorWaterFall_Low_C_ExecuteUbergraph_BP_EffectActorWaterFall_Low::CallFunc_BreakSoftObjectPath_PathString' has a wrong offset!");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_ExecuteUbergraph_BP_EffectActorWaterFall_Low, CallFunc_GetOuterObject_ReturnValue) == 0x000028, "Member 'BP_EffectActorWaterFall_Low_C_ExecuteUbergraph_BP_EffectActorWaterFall_Low::CallFunc_GetOuterObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_ExecuteUbergraph_BP_EffectActorWaterFall_Low, CallFunc_IsEmpty_ReturnValue) == 0x000030, "Member 'BP_EffectActorWaterFall_Low_C_ExecuteUbergraph_BP_EffectActorWaterFall_Low::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_ExecuteUbergraph_BP_EffectActorWaterFall_Low, CallFunc_GetTransform_ReturnValue) == 0x000040, "Member 'BP_EffectActorWaterFall_Low_C_ExecuteUbergraph_BP_EffectActorWaterFall_Low::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_ExecuteUbergraph_BP_EffectActorWaterFall_Low, CallFunc_SpawnEffect_ReturnValue) == 0x000070, "Member 'BP_EffectActorWaterFall_Low_C_ExecuteUbergraph_BP_EffectActorWaterFall_Low::CallFunc_SpawnEffect_ReturnValue' has a wrong offset!");

// Function BP_EffectActorWaterFall_Low.BP_EffectActorWaterFall_Low_C.EditorTick
// 0x0004 (0x0004 - 0x0000)
struct BP_EffectActorWaterFall_Low_C_EditorTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EffectActorWaterFall_Low_C_EditorTick) == 0x000004, "Wrong alignment on BP_EffectActorWaterFall_Low_C_EditorTick");
static_assert(sizeof(BP_EffectActorWaterFall_Low_C_EditorTick) == 0x000004, "Wrong size on BP_EffectActorWaterFall_Low_C_EditorTick");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_EditorTick, DeltaSeconds) == 0x000000, "Member 'BP_EffectActorWaterFall_Low_C_EditorTick::DeltaSeconds' has a wrong offset!");

// Function BP_EffectActorWaterFall_Low.BP_EffectActorWaterFall_Low_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_EffectActorWaterFall_Low_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EffectActorWaterFall_Low_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_EffectActorWaterFall_Low_C_ReceiveEndPlay");
static_assert(sizeof(BP_EffectActorWaterFall_Low_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_EffectActorWaterFall_Low_C_ReceiveEndPlay");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_EffectActorWaterFall_Low_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_EffectActorWaterFall_Low.BP_EffectActorWaterFall_Low_C.SetHandle
// 0x0004 (0x0004 - 0x0000)
struct BP_EffectActorWaterFall_Low_C_SetHandle final
{
public:
	int32                                         Handle;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EffectActorWaterFall_Low_C_SetHandle) == 0x000004, "Wrong alignment on BP_EffectActorWaterFall_Low_C_SetHandle");
static_assert(sizeof(BP_EffectActorWaterFall_Low_C_SetHandle) == 0x000004, "Wrong size on BP_EffectActorWaterFall_Low_C_SetHandle");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_SetHandle, Handle) == 0x000000, "Member 'BP_EffectActorWaterFall_Low_C_SetHandle::Handle' has a wrong offset!");

// Function BP_EffectActorWaterFall_Low.BP_EffectActorWaterFall_Low_C.UserConstructionScript
// 0x0050 (0x0050 - 0x0000)
struct BP_EffectActorWaterFall_Low_C_UserConstructionScript final
{
public:
	bool                                          CallFunc_InitializeWithPreview_Success;            // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3985[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_BreakSoftObjectPath_PathString;           // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEditor_IsEditor;                        // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EffectActorWaterFall_Low_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_EffectActorWaterFall_Low_C_UserConstructionScript");
static_assert(sizeof(BP_EffectActorWaterFall_Low_C_UserConstructionScript) == 0x000050, "Wrong size on BP_EffectActorWaterFall_Low_C_UserConstructionScript");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_UserConstructionScript, CallFunc_InitializeWithPreview_Success) == 0x000000, "Member 'BP_EffectActorWaterFall_Low_C_UserConstructionScript::CallFunc_InitializeWithPreview_Success' has a wrong offset!");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_UserConstructionScript, CallFunc_BreakSoftObjectPath_PathString) == 0x000008, "Member 'BP_EffectActorWaterFall_Low_C_UserConstructionScript::CallFunc_BreakSoftObjectPath_PathString' has a wrong offset!");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_UserConstructionScript, CallFunc_Concat_StrStr_ReturnValue) == 0x000018, "Member 'BP_EffectActorWaterFall_Low_C_UserConstructionScript::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_UserConstructionScript, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000028, "Member 'BP_EffectActorWaterFall_Low_C_UserConstructionScript::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_UserConstructionScript, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000038, "Member 'BP_EffectActorWaterFall_Low_C_UserConstructionScript::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_UserConstructionScript, CallFunc_IsEditor_IsEditor) == 0x000048, "Member 'BP_EffectActorWaterFall_Low_C_UserConstructionScript::CallFunc_IsEditor_IsEditor' has a wrong offset!");

// Function BP_EffectActorWaterFall_Low.BP_EffectActorWaterFall_Low_C.Refresh
// 0x0018 (0x0018 - 0x0000)
struct BP_EffectActorWaterFall_Low_C_Refresh final
{
public:
	bool                                          CallFunc_Stop_ReturnValue;                         // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3986[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetOuterObject_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InitializeWithPreview_Success;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EffectActorWaterFall_Low_C_Refresh) == 0x000008, "Wrong alignment on BP_EffectActorWaterFall_Low_C_Refresh");
static_assert(sizeof(BP_EffectActorWaterFall_Low_C_Refresh) == 0x000018, "Wrong size on BP_EffectActorWaterFall_Low_C_Refresh");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_Refresh, CallFunc_Stop_ReturnValue) == 0x000000, "Member 'BP_EffectActorWaterFall_Low_C_Refresh::CallFunc_Stop_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_Refresh, CallFunc_GetOuterObject_ReturnValue) == 0x000008, "Member 'BP_EffectActorWaterFall_Low_C_Refresh::CallFunc_GetOuterObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_Refresh, CallFunc_InitializeWithPreview_Success) == 0x000010, "Member 'BP_EffectActorWaterFall_Low_C_Refresh::CallFunc_InitializeWithPreview_Success' has a wrong offset!");

// Function BP_EffectActorWaterFall_Low.BP_EffectActorWaterFall_Low_C.IsEditor
// 0x0005 (0x0005 - 0x0000)
struct BP_EffectActorWaterFall_Low_C_IsEditor final
{
public:
	bool                                          Param_IsEditor;                                    // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EBP_EWorldType                                CallFunc_GetWorldType_ReturnValue;                 // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EffectActorWaterFall_Low_C_IsEditor) == 0x000001, "Wrong alignment on BP_EffectActorWaterFall_Low_C_IsEditor");
static_assert(sizeof(BP_EffectActorWaterFall_Low_C_IsEditor) == 0x000005, "Wrong size on BP_EffectActorWaterFall_Low_C_IsEditor");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_IsEditor, Param_IsEditor) == 0x000000, "Member 'BP_EffectActorWaterFall_Low_C_IsEditor::Param_IsEditor' has a wrong offset!");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_IsEditor, CallFunc_GetWorldType_ReturnValue) == 0x000001, "Member 'BP_EffectActorWaterFall_Low_C_IsEditor::CallFunc_GetWorldType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_IsEditor, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'BP_EffectActorWaterFall_Low_C_IsEditor::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_IsEditor, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000003, "Member 'BP_EffectActorWaterFall_Low_C_IsEditor::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_IsEditor, CallFunc_BooleanOR_ReturnValue) == 0x000004, "Member 'BP_EffectActorWaterFall_Low_C_IsEditor::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function BP_EffectActorWaterFall_Low.BP_EffectActorWaterFall_Low_C.Stop
// 0x0018 (0x0018 - 0x0000)
struct BP_EffectActorWaterFall_Low_C_Stop final
{
public:
	class FString                                 Reason;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Immediately;                                       // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ReturnValue;                                       // 0x0011(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEditor_IsEditor;                        // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EffectHandleIsValid_ReturnValue;          // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_StopEffect_ReturnValue;                   // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EffectActorWaterFall_Low_C_Stop) == 0x000008, "Wrong alignment on BP_EffectActorWaterFall_Low_C_Stop");
static_assert(sizeof(BP_EffectActorWaterFall_Low_C_Stop) == 0x000018, "Wrong size on BP_EffectActorWaterFall_Low_C_Stop");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_Stop, Reason) == 0x000000, "Member 'BP_EffectActorWaterFall_Low_C_Stop::Reason' has a wrong offset!");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_Stop, Immediately) == 0x000010, "Member 'BP_EffectActorWaterFall_Low_C_Stop::Immediately' has a wrong offset!");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_Stop, ReturnValue) == 0x000011, "Member 'BP_EffectActorWaterFall_Low_C_Stop::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_Stop, CallFunc_IsEditor_IsEditor) == 0x000012, "Member 'BP_EffectActorWaterFall_Low_C_Stop::CallFunc_IsEditor_IsEditor' has a wrong offset!");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_Stop, CallFunc_EffectHandleIsValid_ReturnValue) == 0x000013, "Member 'BP_EffectActorWaterFall_Low_C_Stop::CallFunc_EffectHandleIsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_Stop, CallFunc_StopEffect_ReturnValue) == 0x000014, "Member 'BP_EffectActorWaterFall_Low_C_Stop::CallFunc_StopEffect_ReturnValue' has a wrong offset!");

// Function BP_EffectActorWaterFall_Low.BP_EffectActorWaterFall_Low_C.Play
// 0x0090 (0x0090 - 0x0000)
struct BP_EffectActorWaterFall_Low_C_Play final
{
public:
	class FString                                 Reason;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEditor_IsEditor;                        // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3987[0xF];                                     // 0x0011(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0020(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class UObject*                                CallFunc_GetOuterObject_ReturnValue;               // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PlayEffect_ReturnValue;                   // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EffectHandleIsValid_ReturnValue;          // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3988[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetOuterObject_ReturnValue_1;             // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_BreakSoftObjectPath_PathString;           // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3989[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SpawnEffect_ReturnValue;                  // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SpawnEffectWithActor_ReturnValue;         // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EffectActorWaterFall_Low_C_Play) == 0x000010, "Wrong alignment on BP_EffectActorWaterFall_Low_C_Play");
static_assert(sizeof(BP_EffectActorWaterFall_Low_C_Play) == 0x000090, "Wrong size on BP_EffectActorWaterFall_Low_C_Play");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_Play, Reason) == 0x000000, "Member 'BP_EffectActorWaterFall_Low_C_Play::Reason' has a wrong offset!");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_Play, CallFunc_IsEditor_IsEditor) == 0x000010, "Member 'BP_EffectActorWaterFall_Low_C_Play::CallFunc_IsEditor_IsEditor' has a wrong offset!");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_Play, CallFunc_GetTransform_ReturnValue) == 0x000020, "Member 'BP_EffectActorWaterFall_Low_C_Play::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_Play, CallFunc_GetOuterObject_ReturnValue) == 0x000050, "Member 'BP_EffectActorWaterFall_Low_C_Play::CallFunc_GetOuterObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_Play, CallFunc_PlayEffect_ReturnValue) == 0x000058, "Member 'BP_EffectActorWaterFall_Low_C_Play::CallFunc_PlayEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_Play, CallFunc_EffectHandleIsValid_ReturnValue) == 0x000059, "Member 'BP_EffectActorWaterFall_Low_C_Play::CallFunc_EffectHandleIsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_Play, CallFunc_GetOuterObject_ReturnValue_1) == 0x000060, "Member 'BP_EffectActorWaterFall_Low_C_Play::CallFunc_GetOuterObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_Play, CallFunc_BreakSoftObjectPath_PathString) == 0x000068, "Member 'BP_EffectActorWaterFall_Low_C_Play::CallFunc_BreakSoftObjectPath_PathString' has a wrong offset!");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_Play, CallFunc_IsEmpty_ReturnValue) == 0x000078, "Member 'BP_EffectActorWaterFall_Low_C_Play::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_Play, CallFunc_SpawnEffect_ReturnValue) == 0x00007C, "Member 'BP_EffectActorWaterFall_Low_C_Play::CallFunc_SpawnEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_Play, CallFunc_SpawnEffectWithActor_ReturnValue) == 0x000080, "Member 'BP_EffectActorWaterFall_Low_C_Play::CallFunc_SpawnEffectWithActor_ReturnValue' has a wrong offset!");

// Function BP_EffectActorWaterFall_Low.BP_EffectActorWaterFall_Low_C.PlayEffect
// 0x0018 (0x0018 - 0x0000)
struct BP_EffectActorWaterFall_Low_C_PlayEffect final
{
public:
	bool                                          CallFunc_Stop_ReturnValue;                         // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_398A[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetOuterObject_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InitializeWithPreview_Success;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EffectActorWaterFall_Low_C_PlayEffect) == 0x000008, "Wrong alignment on BP_EffectActorWaterFall_Low_C_PlayEffect");
static_assert(sizeof(BP_EffectActorWaterFall_Low_C_PlayEffect) == 0x000018, "Wrong size on BP_EffectActorWaterFall_Low_C_PlayEffect");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_PlayEffect, CallFunc_Stop_ReturnValue) == 0x000000, "Member 'BP_EffectActorWaterFall_Low_C_PlayEffect::CallFunc_Stop_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_PlayEffect, CallFunc_GetOuterObject_ReturnValue) == 0x000008, "Member 'BP_EffectActorWaterFall_Low_C_PlayEffect::CallFunc_GetOuterObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_PlayEffect, CallFunc_InitializeWithPreview_Success) == 0x000010, "Member 'BP_EffectActorWaterFall_Low_C_PlayEffect::CallFunc_InitializeWithPreview_Success' has a wrong offset!");

// Function BP_EffectActorWaterFall_Low.BP_EffectActorWaterFall_Low_C.StopEffect
// 0x0001 (0x0001 - 0x0000)
struct BP_EffectActorWaterFall_Low_C_StopEffect final
{
public:
	bool                                          CallFunc_Stop_ReturnValue;                         // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EffectActorWaterFall_Low_C_StopEffect) == 0x000001, "Wrong alignment on BP_EffectActorWaterFall_Low_C_StopEffect");
static_assert(sizeof(BP_EffectActorWaterFall_Low_C_StopEffect) == 0x000001, "Wrong size on BP_EffectActorWaterFall_Low_C_StopEffect");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_StopEffect, CallFunc_Stop_ReturnValue) == 0x000000, "Member 'BP_EffectActorWaterFall_Low_C_StopEffect::CallFunc_Stop_ReturnValue' has a wrong offset!");

// Function BP_EffectActorWaterFall_Low.BP_EffectActorWaterFall_Low_C.GetHandle
// 0x0008 (0x0008 - 0x0000)
struct BP_EffectActorWaterFall_Low_C_GetHandle final
{
public:
	int32                                         Handle;                                            // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EffectHandleIsValid_ReturnValue;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EffectActorWaterFall_Low_C_GetHandle) == 0x000004, "Wrong alignment on BP_EffectActorWaterFall_Low_C_GetHandle");
static_assert(sizeof(BP_EffectActorWaterFall_Low_C_GetHandle) == 0x000008, "Wrong size on BP_EffectActorWaterFall_Low_C_GetHandle");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_GetHandle, Handle) == 0x000000, "Member 'BP_EffectActorWaterFall_Low_C_GetHandle::Handle' has a wrong offset!");
static_assert(offsetof(BP_EffectActorWaterFall_Low_C_GetHandle, CallFunc_EffectHandleIsValid_ReturnValue) == 0x000004, "Member 'BP_EffectActorWaterFall_Low_C_GetHandle::CallFunc_EffectHandleIsValid_ReturnValue' has a wrong offset!");

}

