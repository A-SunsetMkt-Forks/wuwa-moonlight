#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LogicDataAdditiveAccelerate

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "LogicDataBase_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass LogicDataAdditiveAccelerate.LogicDataAdditiveAccelerate_C
// 0x0010 (0x0050 - 0x0040)
class ULogicDataAdditiveAccelerate_C final : public ULogicDataBase_C
{
public:
	uint8                                         Pad_2BDF[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Acceleration;                                      // 0x003C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveVector*                           AccelerationCurve;                                 // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LogicDataAdditiveAccelerate_C">();
	}
	static class ULogicDataAdditiveAccelerate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULogicDataAdditiveAccelerate_C>();
	}
};
static_assert(alignof(ULogicDataAdditiveAccelerate_C) == 0x000008, "Wrong alignment on ULogicDataAdditiveAccelerate_C");
static_assert(sizeof(ULogicDataAdditiveAccelerate_C) == 0x000050, "Wrong size on ULogicDataAdditiveAccelerate_C");
static_assert(offsetof(ULogicDataAdditiveAccelerate_C, Acceleration) == 0x00003C, "Member 'ULogicDataAdditiveAccelerate_C::Acceleration' has a wrong offset!");
static_assert(offsetof(ULogicDataAdditiveAccelerate_C, AccelerationCurve) == 0x000048, "Member 'ULogicDataAdditiveAccelerate_C::AccelerationCurve' has a wrong offset!");

}

