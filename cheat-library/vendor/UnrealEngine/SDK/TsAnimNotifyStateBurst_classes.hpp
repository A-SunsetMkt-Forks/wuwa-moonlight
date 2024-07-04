#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsAnimNotifyStateBurst

#include "Basic.hpp"

#include "KuroRenderingRuntimeBPPlugin_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsAnimNotifyStateBurst.TsAnimNotifyStateBurst_C
// 0x0008 (0x0050 - 0x0048)
class UTsAnimNotifyStateBurst_C final : public UKuroAnimNotifyState
{
public:
	int32                                         HitPriority;                                       // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          ____;                                              // 0x004C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                          __L;                                               // 0x004D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)

public:
	bool K2_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
	bool K2_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);

	class FString GetNotifyName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsAnimNotifyStateBurst_C">();
	}
	static class UTsAnimNotifyStateBurst_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsAnimNotifyStateBurst_C>();
	}
};
static_assert(alignof(UTsAnimNotifyStateBurst_C) == 0x000008, "Wrong alignment on UTsAnimNotifyStateBurst_C");
static_assert(sizeof(UTsAnimNotifyStateBurst_C) == 0x000050, "Wrong size on UTsAnimNotifyStateBurst_C");
static_assert(offsetof(UTsAnimNotifyStateBurst_C, HitPriority) == 0x000048, "Member 'UTsAnimNotifyStateBurst_C::HitPriority' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateBurst_C, ____) == 0x00004C, "Member 'UTsAnimNotifyStateBurst_C::____' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateBurst_C, __L) == 0x00004D, "Member 'UTsAnimNotifyStateBurst_C::__L' has a wrong offset!");

}

