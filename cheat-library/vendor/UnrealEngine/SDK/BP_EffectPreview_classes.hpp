#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EffectPreview

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EffectPreview.BP_EffectPreview_C
// 0x0018 (0x02C8 - 0x02B0)
class ABP_EffectPreview_C final : public AKuroEffectActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         EffectView;                                        // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Transient;                                         // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_EffectPreview(int32 EntryPoint);
	void EditorTick(float DeltaSeconds);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EffectPreview_C">();
	}
	static class ABP_EffectPreview_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EffectPreview_C>();
	}
};
static_assert(alignof(ABP_EffectPreview_C) == 0x000008, "Wrong alignment on ABP_EffectPreview_C");
static_assert(sizeof(ABP_EffectPreview_C) == 0x0002C8, "Wrong size on ABP_EffectPreview_C");
static_assert(offsetof(ABP_EffectPreview_C, UberGraphFrame) == 0x0002B0, "Member 'ABP_EffectPreview_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_EffectPreview_C, DefaultSceneRoot) == 0x0002B8, "Member 'ABP_EffectPreview_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_EffectPreview_C, EffectView) == 0x0002C0, "Member 'ABP_EffectPreview_C::EffectView' has a wrong offset!");
static_assert(offsetof(ABP_EffectPreview_C, Transient) == 0x0002C4, "Member 'ABP_EffectPreview_C::Transient' has a wrong offset!");

}

