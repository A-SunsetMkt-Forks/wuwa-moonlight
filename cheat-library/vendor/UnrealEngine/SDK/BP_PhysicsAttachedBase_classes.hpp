#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PhysicsAttachedBase

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PhysicsAttachedBase.BP_PhysicsAttachedBase_C
// 0x0000 (0x02B8 - 0x02B8)
class ABP_PhysicsAttachedBase_C final : public AStaticMeshActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PhysicsAttachedBase_C">();
	}
	static class ABP_PhysicsAttachedBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PhysicsAttachedBase_C>();
	}
};
static_assert(alignof(ABP_PhysicsAttachedBase_C) == 0x000008, "Wrong alignment on ABP_PhysicsAttachedBase_C");
static_assert(sizeof(ABP_PhysicsAttachedBase_C) == 0x0002B8, "Wrong size on ABP_PhysicsAttachedBase_C");

}
