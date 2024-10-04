#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BasePathLineBullet

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BasePathLineBullet.BP_BasePathLineBullet_C
// 0x0008 (0x02B0 - 0x02A8)
class ABP_BasePathLineBullet_C final : public AActor
{
public:
	class USplineComponent*                       Spline;                                            // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BasePathLineBullet_C">();
	}
	static class ABP_BasePathLineBullet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BasePathLineBullet_C>();
	}
};
static_assert(alignof(ABP_BasePathLineBullet_C) == 0x000008, "Wrong alignment on ABP_BasePathLineBullet_C");
static_assert(sizeof(ABP_BasePathLineBullet_C) == 0x0002B0, "Wrong size on ABP_BasePathLineBullet_C");
static_assert(offsetof(ABP_BasePathLineBullet_C, Spline) == 0x0002A8, "Member 'ABP_BasePathLineBullet_C::Spline' has a wrong offset!");

}
