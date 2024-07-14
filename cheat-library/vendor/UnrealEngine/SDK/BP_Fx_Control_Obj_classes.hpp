#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Fx_Control_Obj

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Fx_Control_Obj.BP_Fx_Control_Obj_C
// 0x0020 (0x02C8 - 0x02A8)
class ABP_Fx_Control_Obj_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      NS_Fx_Control_Obj_Beam;                            // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 EndActor;                                          // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanShow;                                           // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_Fx_Control_Obj(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Fx_Control_Obj_C">();
	}
	static class ABP_Fx_Control_Obj_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Fx_Control_Obj_C>();
	}
};
static_assert(alignof(ABP_Fx_Control_Obj_C) == 0x000008, "Wrong alignment on ABP_Fx_Control_Obj_C");
static_assert(sizeof(ABP_Fx_Control_Obj_C) == 0x0002C8, "Wrong size on ABP_Fx_Control_Obj_C");
static_assert(offsetof(ABP_Fx_Control_Obj_C, UberGraphFrame) == 0x0002A8, "Member 'ABP_Fx_Control_Obj_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Fx_Control_Obj_C, NS_Fx_Control_Obj_Beam) == 0x0002B0, "Member 'ABP_Fx_Control_Obj_C::NS_Fx_Control_Obj_Beam' has a wrong offset!");
static_assert(offsetof(ABP_Fx_Control_Obj_C, EndActor) == 0x0002B8, "Member 'ABP_Fx_Control_Obj_C::EndActor' has a wrong offset!");
static_assert(offsetof(ABP_Fx_Control_Obj_C, CanShow) == 0x0002C0, "Member 'ABP_Fx_Control_Obj_C::CanShow' has a wrong offset!");

}
