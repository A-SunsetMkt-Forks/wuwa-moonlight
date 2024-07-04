#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChaosSolverEngine

#include "Basic.hpp"

#include "ChaosSolverEngine_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult
// 0x0108 (0x0108 - 0x0000)
struct ChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult final
{
public:
	struct FChaosPhysicsCollisionInfo             PhysicsCollision;                                  // 0x0000(0x0070)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FHitResult                             ReturnValue;                                       // 0x0070(0x0094)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         Pad_27C1[0x4];                                     // 0x0104(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult) == 0x000008, "Wrong alignment on ChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult");
static_assert(sizeof(ChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult) == 0x000108, "Wrong size on ChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult");
static_assert(offsetof(ChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult, PhysicsCollision) == 0x000000, "Member 'ChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult::PhysicsCollision' has a wrong offset!");
static_assert(offsetof(ChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult, ReturnValue) == 0x000070, "Member 'ChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult::ReturnValue' has a wrong offset!");

// Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive
// 0x0001 (0x0001 - 0x0000)
struct ChaosSolverActor_SetSolverActive final
{
public:
	bool                                          bActive;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChaosSolverActor_SetSolverActive) == 0x000001, "Wrong alignment on ChaosSolverActor_SetSolverActive");
static_assert(sizeof(ChaosSolverActor_SetSolverActive) == 0x000001, "Wrong size on ChaosSolverActor_SetSolverActive");
static_assert(offsetof(ChaosSolverActor_SetSolverActive, bActive) == 0x000000, "Member 'ChaosSolverActor_SetSolverActive::bActive' has a wrong offset!");

}

