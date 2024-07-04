#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsAnimNotifyStateNextAtt

#include "Basic.hpp"

#include "KuroRenderingRuntimeBPPlugin_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsAnimNotifyStateNextAtt.TsAnimNotifyStateNextAtt_C
// 0x0000 (0x0048 - 0x0048)
class UTsAnimNotifyStateNextAtt_C final : public UKuroAnimNotifyState
{
public:
	bool K2_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
	bool K2_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);

	class FString GetNotifyName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsAnimNotifyStateNextAtt_C">();
	}
	static class UTsAnimNotifyStateNextAtt_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsAnimNotifyStateNextAtt_C>();
	}
};
static_assert(alignof(UTsAnimNotifyStateNextAtt_C) == 0x000008, "Wrong alignment on UTsAnimNotifyStateNextAtt_C");
static_assert(sizeof(UTsAnimNotifyStateNextAtt_C) == 0x000048, "Wrong size on UTsAnimNotifyStateNextAtt_C");

}

