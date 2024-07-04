#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPF_ActorComponentHelper

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BPF_ActorComponentHelper.BPF_ActorComponentHelper_C.GetOwnerTransform
// 0x00A0 (0x00A0 - 0x0000)
struct BPF_ActorComponentHelper_C_GetOwnerTransform final
{
public:
	class UActorComponent*                        ActorComponent;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Success;                                           // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31B6[0xF];                                     // 0x0011(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Transform;                                         // 0x0020(0x0030)(Parm, OutParm, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31B7[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31B8[0x8];                                     // 0x0068(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0070(0x0030)(IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPF_ActorComponentHelper_C_GetOwnerTransform) == 0x000010, "Wrong alignment on BPF_ActorComponentHelper_C_GetOwnerTransform");
static_assert(sizeof(BPF_ActorComponentHelper_C_GetOwnerTransform) == 0x0000A0, "Wrong size on BPF_ActorComponentHelper_C_GetOwnerTransform");
static_assert(offsetof(BPF_ActorComponentHelper_C_GetOwnerTransform, ActorComponent) == 0x000000, "Member 'BPF_ActorComponentHelper_C_GetOwnerTransform::ActorComponent' has a wrong offset!");
static_assert(offsetof(BPF_ActorComponentHelper_C_GetOwnerTransform, __WorldContext) == 0x000008, "Member 'BPF_ActorComponentHelper_C_GetOwnerTransform::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPF_ActorComponentHelper_C_GetOwnerTransform, Success) == 0x000010, "Member 'BPF_ActorComponentHelper_C_GetOwnerTransform::Success' has a wrong offset!");
static_assert(offsetof(BPF_ActorComponentHelper_C_GetOwnerTransform, Transform) == 0x000020, "Member 'BPF_ActorComponentHelper_C_GetOwnerTransform::Transform' has a wrong offset!");
static_assert(offsetof(BPF_ActorComponentHelper_C_GetOwnerTransform, CallFunc_GetOwner_ReturnValue) == 0x000050, "Member 'BPF_ActorComponentHelper_C_GetOwnerTransform::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPF_ActorComponentHelper_C_GetOwnerTransform, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'BPF_ActorComponentHelper_C_GetOwnerTransform::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPF_ActorComponentHelper_C_GetOwnerTransform, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000060, "Member 'BPF_ActorComponentHelper_C_GetOwnerTransform::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPF_ActorComponentHelper_C_GetOwnerTransform, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000070, "Member 'BPF_ActorComponentHelper_C_GetOwnerTransform::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");

// Function BPF_ActorComponentHelper.BPF_ActorComponentHelper_C.GetOwnerLocation
// 0x0090 (0x0090 - 0x0000)
struct BPF_ActorComponentHelper_C_GetOwnerLocation final
{
public:
	class UActorComponent*                        ActorComponent;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Success;                                           // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31B9[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Location;                                          // 0x0014(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetOwnerTransform_Success;                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31BA[0xF];                                     // 0x0021(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetOwnerTransform_Transform;              // 0x0030(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x006C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0078(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPF_ActorComponentHelper_C_GetOwnerLocation) == 0x000010, "Wrong alignment on BPF_ActorComponentHelper_C_GetOwnerLocation");
static_assert(sizeof(BPF_ActorComponentHelper_C_GetOwnerLocation) == 0x000090, "Wrong size on BPF_ActorComponentHelper_C_GetOwnerLocation");
static_assert(offsetof(BPF_ActorComponentHelper_C_GetOwnerLocation, ActorComponent) == 0x000000, "Member 'BPF_ActorComponentHelper_C_GetOwnerLocation::ActorComponent' has a wrong offset!");
static_assert(offsetof(BPF_ActorComponentHelper_C_GetOwnerLocation, __WorldContext) == 0x000008, "Member 'BPF_ActorComponentHelper_C_GetOwnerLocation::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPF_ActorComponentHelper_C_GetOwnerLocation, Success) == 0x000010, "Member 'BPF_ActorComponentHelper_C_GetOwnerLocation::Success' has a wrong offset!");
static_assert(offsetof(BPF_ActorComponentHelper_C_GetOwnerLocation, Location) == 0x000014, "Member 'BPF_ActorComponentHelper_C_GetOwnerLocation::Location' has a wrong offset!");
static_assert(offsetof(BPF_ActorComponentHelper_C_GetOwnerLocation, CallFunc_GetOwnerTransform_Success) == 0x000020, "Member 'BPF_ActorComponentHelper_C_GetOwnerLocation::CallFunc_GetOwnerTransform_Success' has a wrong offset!");
static_assert(offsetof(BPF_ActorComponentHelper_C_GetOwnerLocation, CallFunc_GetOwnerTransform_Transform) == 0x000030, "Member 'BPF_ActorComponentHelper_C_GetOwnerLocation::CallFunc_GetOwnerTransform_Transform' has a wrong offset!");
static_assert(offsetof(BPF_ActorComponentHelper_C_GetOwnerLocation, CallFunc_BreakTransform_Location) == 0x000060, "Member 'BPF_ActorComponentHelper_C_GetOwnerLocation::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BPF_ActorComponentHelper_C_GetOwnerLocation, CallFunc_BreakTransform_Rotation) == 0x00006C, "Member 'BPF_ActorComponentHelper_C_GetOwnerLocation::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BPF_ActorComponentHelper_C_GetOwnerLocation, CallFunc_BreakTransform_Scale) == 0x000078, "Member 'BPF_ActorComponentHelper_C_GetOwnerLocation::CallFunc_BreakTransform_Scale' has a wrong offset!");

// Function BPF_ActorComponentHelper.BPF_ActorComponentHelper_C.GetOwnerRotator
// 0x0090 (0x0090 - 0x0000)
struct BPF_ActorComponentHelper_C_GetOwnerRotator final
{
public:
	class UActorComponent*                        ActorComponent;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Success;                                           // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31BB[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               Rotator;                                           // 0x0014(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetOwnerTransform_Success;                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31BC[0xF];                                     // 0x0021(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetOwnerTransform_Transform;              // 0x0030(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x006C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0078(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPF_ActorComponentHelper_C_GetOwnerRotator) == 0x000010, "Wrong alignment on BPF_ActorComponentHelper_C_GetOwnerRotator");
static_assert(sizeof(BPF_ActorComponentHelper_C_GetOwnerRotator) == 0x000090, "Wrong size on BPF_ActorComponentHelper_C_GetOwnerRotator");
static_assert(offsetof(BPF_ActorComponentHelper_C_GetOwnerRotator, ActorComponent) == 0x000000, "Member 'BPF_ActorComponentHelper_C_GetOwnerRotator::ActorComponent' has a wrong offset!");
static_assert(offsetof(BPF_ActorComponentHelper_C_GetOwnerRotator, __WorldContext) == 0x000008, "Member 'BPF_ActorComponentHelper_C_GetOwnerRotator::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPF_ActorComponentHelper_C_GetOwnerRotator, Success) == 0x000010, "Member 'BPF_ActorComponentHelper_C_GetOwnerRotator::Success' has a wrong offset!");
static_assert(offsetof(BPF_ActorComponentHelper_C_GetOwnerRotator, Rotator) == 0x000014, "Member 'BPF_ActorComponentHelper_C_GetOwnerRotator::Rotator' has a wrong offset!");
static_assert(offsetof(BPF_ActorComponentHelper_C_GetOwnerRotator, CallFunc_GetOwnerTransform_Success) == 0x000020, "Member 'BPF_ActorComponentHelper_C_GetOwnerRotator::CallFunc_GetOwnerTransform_Success' has a wrong offset!");
static_assert(offsetof(BPF_ActorComponentHelper_C_GetOwnerRotator, CallFunc_GetOwnerTransform_Transform) == 0x000030, "Member 'BPF_ActorComponentHelper_C_GetOwnerRotator::CallFunc_GetOwnerTransform_Transform' has a wrong offset!");
static_assert(offsetof(BPF_ActorComponentHelper_C_GetOwnerRotator, CallFunc_BreakTransform_Location) == 0x000060, "Member 'BPF_ActorComponentHelper_C_GetOwnerRotator::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BPF_ActorComponentHelper_C_GetOwnerRotator, CallFunc_BreakTransform_Rotation) == 0x00006C, "Member 'BPF_ActorComponentHelper_C_GetOwnerRotator::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BPF_ActorComponentHelper_C_GetOwnerRotator, CallFunc_BreakTransform_Scale) == 0x000078, "Member 'BPF_ActorComponentHelper_C_GetOwnerRotator::CallFunc_BreakTransform_Scale' has a wrong offset!");

// Function BPF_ActorComponentHelper.BPF_ActorComponentHelper_C.GetOwnerScale
// 0x0090 (0x0090 - 0x0000)
struct BPF_ActorComponentHelper_C_GetOwnerScale final
{
public:
	class UActorComponent*                        ActorComponent;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Success;                                           // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31BD[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Scale;                                             // 0x0014(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetOwnerTransform_Success;                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31BE[0xF];                                     // 0x0021(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetOwnerTransform_Transform;              // 0x0030(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x006C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0078(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPF_ActorComponentHelper_C_GetOwnerScale) == 0x000010, "Wrong alignment on BPF_ActorComponentHelper_C_GetOwnerScale");
static_assert(sizeof(BPF_ActorComponentHelper_C_GetOwnerScale) == 0x000090, "Wrong size on BPF_ActorComponentHelper_C_GetOwnerScale");
static_assert(offsetof(BPF_ActorComponentHelper_C_GetOwnerScale, ActorComponent) == 0x000000, "Member 'BPF_ActorComponentHelper_C_GetOwnerScale::ActorComponent' has a wrong offset!");
static_assert(offsetof(BPF_ActorComponentHelper_C_GetOwnerScale, __WorldContext) == 0x000008, "Member 'BPF_ActorComponentHelper_C_GetOwnerScale::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPF_ActorComponentHelper_C_GetOwnerScale, Success) == 0x000010, "Member 'BPF_ActorComponentHelper_C_GetOwnerScale::Success' has a wrong offset!");
static_assert(offsetof(BPF_ActorComponentHelper_C_GetOwnerScale, Scale) == 0x000014, "Member 'BPF_ActorComponentHelper_C_GetOwnerScale::Scale' has a wrong offset!");
static_assert(offsetof(BPF_ActorComponentHelper_C_GetOwnerScale, CallFunc_GetOwnerTransform_Success) == 0x000020, "Member 'BPF_ActorComponentHelper_C_GetOwnerScale::CallFunc_GetOwnerTransform_Success' has a wrong offset!");
static_assert(offsetof(BPF_ActorComponentHelper_C_GetOwnerScale, CallFunc_GetOwnerTransform_Transform) == 0x000030, "Member 'BPF_ActorComponentHelper_C_GetOwnerScale::CallFunc_GetOwnerTransform_Transform' has a wrong offset!");
static_assert(offsetof(BPF_ActorComponentHelper_C_GetOwnerScale, CallFunc_BreakTransform_Location) == 0x000060, "Member 'BPF_ActorComponentHelper_C_GetOwnerScale::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BPF_ActorComponentHelper_C_GetOwnerScale, CallFunc_BreakTransform_Rotation) == 0x00006C, "Member 'BPF_ActorComponentHelper_C_GetOwnerScale::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BPF_ActorComponentHelper_C_GetOwnerScale, CallFunc_BreakTransform_Scale) == 0x000078, "Member 'BPF_ActorComponentHelper_C_GetOwnerScale::CallFunc_BreakTransform_Scale' has a wrong offset!");

}

