#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPF_CameraHelper

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BPF_CameraHelper.BPF_CameraHelper_C.GetCameraTransform
// 0x0090 (0x0090 - 0x0000)
struct BPF_CameraHelper_C_GetCameraTransform final
{
public:
	int32                                         PlayerIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_28B0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Success;                                           // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_28B1[0xF];                                     // 0x0011(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Transform;                                         // 0x0020(0x0030)(Parm, OutParm, IsPlainOldData, NoDestructor)
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_28B2[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0060(0x0030)(IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPF_CameraHelper_C_GetCameraTransform) == 0x000010, "Wrong alignment on BPF_CameraHelper_C_GetCameraTransform");
static_assert(sizeof(BPF_CameraHelper_C_GetCameraTransform) == 0x000090, "Wrong size on BPF_CameraHelper_C_GetCameraTransform");
static_assert(offsetof(BPF_CameraHelper_C_GetCameraTransform, PlayerIndex) == 0x000000, "Member 'BPF_CameraHelper_C_GetCameraTransform::PlayerIndex' has a wrong offset!");
static_assert(offsetof(BPF_CameraHelper_C_GetCameraTransform, __WorldContext) == 0x000008, "Member 'BPF_CameraHelper_C_GetCameraTransform::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPF_CameraHelper_C_GetCameraTransform, Success) == 0x000010, "Member 'BPF_CameraHelper_C_GetCameraTransform::Success' has a wrong offset!");
static_assert(offsetof(BPF_CameraHelper_C_GetCameraTransform, Transform) == 0x000020, "Member 'BPF_CameraHelper_C_GetCameraTransform::Transform' has a wrong offset!");
static_assert(offsetof(BPF_CameraHelper_C_GetCameraTransform, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x000050, "Member 'BPF_CameraHelper_C_GetCameraTransform::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPF_CameraHelper_C_GetCameraTransform, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'BPF_CameraHelper_C_GetCameraTransform::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPF_CameraHelper_C_GetCameraTransform, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000060, "Member 'BPF_CameraHelper_C_GetCameraTransform::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");

// Function BPF_CameraHelper.BPF_CameraHelper_C.GetCameraLocation
// 0x0090 (0x0090 - 0x0000)
struct BPF_CameraHelper_C_GetCameraLocation final
{
public:
	int32                                         PlayerIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_28B3[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Success;                                           // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_28B4[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Location;                                          // 0x0014(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCameraTransform_Success;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_28B5[0xF];                                     // 0x0021(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetCameraTransform_Transform;             // 0x0030(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x006C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0078(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPF_CameraHelper_C_GetCameraLocation) == 0x000010, "Wrong alignment on BPF_CameraHelper_C_GetCameraLocation");
static_assert(sizeof(BPF_CameraHelper_C_GetCameraLocation) == 0x000090, "Wrong size on BPF_CameraHelper_C_GetCameraLocation");
static_assert(offsetof(BPF_CameraHelper_C_GetCameraLocation, PlayerIndex) == 0x000000, "Member 'BPF_CameraHelper_C_GetCameraLocation::PlayerIndex' has a wrong offset!");
static_assert(offsetof(BPF_CameraHelper_C_GetCameraLocation, __WorldContext) == 0x000008, "Member 'BPF_CameraHelper_C_GetCameraLocation::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPF_CameraHelper_C_GetCameraLocation, Success) == 0x000010, "Member 'BPF_CameraHelper_C_GetCameraLocation::Success' has a wrong offset!");
static_assert(offsetof(BPF_CameraHelper_C_GetCameraLocation, Location) == 0x000014, "Member 'BPF_CameraHelper_C_GetCameraLocation::Location' has a wrong offset!");
static_assert(offsetof(BPF_CameraHelper_C_GetCameraLocation, CallFunc_GetCameraTransform_Success) == 0x000020, "Member 'BPF_CameraHelper_C_GetCameraLocation::CallFunc_GetCameraTransform_Success' has a wrong offset!");
static_assert(offsetof(BPF_CameraHelper_C_GetCameraLocation, CallFunc_GetCameraTransform_Transform) == 0x000030, "Member 'BPF_CameraHelper_C_GetCameraLocation::CallFunc_GetCameraTransform_Transform' has a wrong offset!");
static_assert(offsetof(BPF_CameraHelper_C_GetCameraLocation, CallFunc_BreakTransform_Location) == 0x000060, "Member 'BPF_CameraHelper_C_GetCameraLocation::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BPF_CameraHelper_C_GetCameraLocation, CallFunc_BreakTransform_Rotation) == 0x00006C, "Member 'BPF_CameraHelper_C_GetCameraLocation::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BPF_CameraHelper_C_GetCameraLocation, CallFunc_BreakTransform_Scale) == 0x000078, "Member 'BPF_CameraHelper_C_GetCameraLocation::CallFunc_BreakTransform_Scale' has a wrong offset!");

// Function BPF_CameraHelper.BPF_CameraHelper_C.GetCameraRotator
// 0x0090 (0x0090 - 0x0000)
struct BPF_CameraHelper_C_GetCameraRotator final
{
public:
	int32                                         PlayerIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_28B6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Success;                                           // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_28B7[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               Rotator;                                           // 0x0014(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetCameraTransform_Success;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_28B8[0xF];                                     // 0x0021(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetCameraTransform_Transform;             // 0x0030(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x006C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0078(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPF_CameraHelper_C_GetCameraRotator) == 0x000010, "Wrong alignment on BPF_CameraHelper_C_GetCameraRotator");
static_assert(sizeof(BPF_CameraHelper_C_GetCameraRotator) == 0x000090, "Wrong size on BPF_CameraHelper_C_GetCameraRotator");
static_assert(offsetof(BPF_CameraHelper_C_GetCameraRotator, PlayerIndex) == 0x000000, "Member 'BPF_CameraHelper_C_GetCameraRotator::PlayerIndex' has a wrong offset!");
static_assert(offsetof(BPF_CameraHelper_C_GetCameraRotator, __WorldContext) == 0x000008, "Member 'BPF_CameraHelper_C_GetCameraRotator::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPF_CameraHelper_C_GetCameraRotator, Success) == 0x000010, "Member 'BPF_CameraHelper_C_GetCameraRotator::Success' has a wrong offset!");
static_assert(offsetof(BPF_CameraHelper_C_GetCameraRotator, Rotator) == 0x000014, "Member 'BPF_CameraHelper_C_GetCameraRotator::Rotator' has a wrong offset!");
static_assert(offsetof(BPF_CameraHelper_C_GetCameraRotator, CallFunc_GetCameraTransform_Success) == 0x000020, "Member 'BPF_CameraHelper_C_GetCameraRotator::CallFunc_GetCameraTransform_Success' has a wrong offset!");
static_assert(offsetof(BPF_CameraHelper_C_GetCameraRotator, CallFunc_GetCameraTransform_Transform) == 0x000030, "Member 'BPF_CameraHelper_C_GetCameraRotator::CallFunc_GetCameraTransform_Transform' has a wrong offset!");
static_assert(offsetof(BPF_CameraHelper_C_GetCameraRotator, CallFunc_BreakTransform_Location) == 0x000060, "Member 'BPF_CameraHelper_C_GetCameraRotator::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BPF_CameraHelper_C_GetCameraRotator, CallFunc_BreakTransform_Rotation) == 0x00006C, "Member 'BPF_CameraHelper_C_GetCameraRotator::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BPF_CameraHelper_C_GetCameraRotator, CallFunc_BreakTransform_Scale) == 0x000078, "Member 'BPF_CameraHelper_C_GetCameraRotator::CallFunc_BreakTransform_Scale' has a wrong offset!");

}

