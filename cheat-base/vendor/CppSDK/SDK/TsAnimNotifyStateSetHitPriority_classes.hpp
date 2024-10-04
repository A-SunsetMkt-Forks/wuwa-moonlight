#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsAnimNotifyStateSetHitPriority

#include "Basic.hpp"

#include "KuroRenderingRuntimeBPPlugin_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsAnimNotifyStateSetHitPriority.TsAnimNotifyStateSetHitPriority_C
// 0x0008 (0x0050 - 0x0048)
class UTsAnimNotifyStateSetHitPriority_C final : public UKuroAnimNotifyState
{
public:
	int32                                         HitPriority;                                       // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	bool K2_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
	bool K2_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);

	class FString GetNotifyName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsAnimNotifyStateSetHitPriority_C">();
	}
	static class UTsAnimNotifyStateSetHitPriority_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsAnimNotifyStateSetHitPriority_C>();
	}
};
static_assert(alignof(UTsAnimNotifyStateSetHitPriority_C) == 0x000008, "Wrong alignment on UTsAnimNotifyStateSetHitPriority_C");
static_assert(sizeof(UTsAnimNotifyStateSetHitPriority_C) == 0x000050, "Wrong size on UTsAnimNotifyStateSetHitPriority_C");
static_assert(offsetof(UTsAnimNotifyStateSetHitPriority_C, HitPriority) == 0x000048, "Member 'UTsAnimNotifyStateSetHitPriority_C::HitPriority' has a wrong offset!");

}
