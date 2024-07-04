#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsAnimNotifyAddTag

#include "Basic.hpp"


namespace SDK::Params
{

// Function TsAnimNotifyAddTag.TsAnimNotifyAddTag_C.K2_Notify
// 0x0018 (0x0018 - 0x0000)
struct TsAnimNotifyAddTag_C_K2_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TsAnimNotifyAddTag_C_K2_Notify) == 0x000008, "Wrong alignment on TsAnimNotifyAddTag_C_K2_Notify");
static_assert(sizeof(TsAnimNotifyAddTag_C_K2_Notify) == 0x000018, "Wrong size on TsAnimNotifyAddTag_C_K2_Notify");
static_assert(offsetof(TsAnimNotifyAddTag_C_K2_Notify, MeshComp) == 0x000000, "Member 'TsAnimNotifyAddTag_C_K2_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(TsAnimNotifyAddTag_C_K2_Notify, Animation) == 0x000008, "Member 'TsAnimNotifyAddTag_C_K2_Notify::Animation' has a wrong offset!");
static_assert(offsetof(TsAnimNotifyAddTag_C_K2_Notify, ReturnValue) == 0x000010, "Member 'TsAnimNotifyAddTag_C_K2_Notify::ReturnValue' has a wrong offset!");

// Function TsAnimNotifyAddTag.TsAnimNotifyAddTag_C.GetNotifyName
// 0x0010 (0x0010 - 0x0000)
struct TsAnimNotifyAddTag_C_GetNotifyName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(TsAnimNotifyAddTag_C_GetNotifyName) == 0x000008, "Wrong alignment on TsAnimNotifyAddTag_C_GetNotifyName");
static_assert(sizeof(TsAnimNotifyAddTag_C_GetNotifyName) == 0x000010, "Wrong size on TsAnimNotifyAddTag_C_GetNotifyName");
static_assert(offsetof(TsAnimNotifyAddTag_C_GetNotifyName, ReturnValue) == 0x000000, "Member 'TsAnimNotifyAddTag_C_GetNotifyName::ReturnValue' has a wrong offset!");

}

