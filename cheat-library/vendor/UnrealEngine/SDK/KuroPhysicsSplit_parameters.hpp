#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KuroPhysicsSplit

#include "Basic.hpp"


namespace SDK::Params
{

// Function KuroPhysicsSplit.KuroPhysicsSplitSystem.IsTickFinishBP
// 0x0010 (0x0010 - 0x0000)
struct KuroPhysicsSplitSystem_IsTickFinishBP final
{
public:
	class UWorld*                                 World;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B6B[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KuroPhysicsSplitSystem_IsTickFinishBP) == 0x000008, "Wrong alignment on KuroPhysicsSplitSystem_IsTickFinishBP");
static_assert(sizeof(KuroPhysicsSplitSystem_IsTickFinishBP) == 0x000010, "Wrong size on KuroPhysicsSplitSystem_IsTickFinishBP");
static_assert(offsetof(KuroPhysicsSplitSystem_IsTickFinishBP, World) == 0x000000, "Member 'KuroPhysicsSplitSystem_IsTickFinishBP::World' has a wrong offset!");
static_assert(offsetof(KuroPhysicsSplitSystem_IsTickFinishBP, ReturnValue) == 0x000008, "Member 'KuroPhysicsSplitSystem_IsTickFinishBP::ReturnValue' has a wrong offset!");

// Function KuroPhysicsSplit.KuroPhysicsSplitSystem.StartTickPhysicsStateBP
// 0x0010 (0x0010 - 0x0000)
struct KuroPhysicsSplitSystem_StartTickPhysicsStateBP final
{
public:
	class UWorld*                                 World;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseProcessNumPerFrame;                            // 0x0008(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B6C[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ProcessNumPerFrame;                                // 0x000C(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KuroPhysicsSplitSystem_StartTickPhysicsStateBP) == 0x000008, "Wrong alignment on KuroPhysicsSplitSystem_StartTickPhysicsStateBP");
static_assert(sizeof(KuroPhysicsSplitSystem_StartTickPhysicsStateBP) == 0x000010, "Wrong size on KuroPhysicsSplitSystem_StartTickPhysicsStateBP");
static_assert(offsetof(KuroPhysicsSplitSystem_StartTickPhysicsStateBP, World) == 0x000000, "Member 'KuroPhysicsSplitSystem_StartTickPhysicsStateBP::World' has a wrong offset!");
static_assert(offsetof(KuroPhysicsSplitSystem_StartTickPhysicsStateBP, bUseProcessNumPerFrame) == 0x000008, "Member 'KuroPhysicsSplitSystem_StartTickPhysicsStateBP::bUseProcessNumPerFrame' has a wrong offset!");
static_assert(offsetof(KuroPhysicsSplitSystem_StartTickPhysicsStateBP, ProcessNumPerFrame) == 0x00000C, "Member 'KuroPhysicsSplitSystem_StartTickPhysicsStateBP::ProcessNumPerFrame' has a wrong offset!");

}

