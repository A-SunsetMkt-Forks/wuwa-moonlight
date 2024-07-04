#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EffectViewComponent

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass EffectViewComponent.EffectViewComponent_C
// 0x0000 (0x0220 - 0x0220)
class UEffectViewComponent_C final : public USceneComponent
{
public:
	void EditorTick(float DeltaSecond);
	void SetAutoPlay(bool AutoPlay);
	void Play();
	void Stop(bool Immediately);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EffectViewComponent_C">();
	}
	static class UEffectViewComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEffectViewComponent_C>();
	}
};
static_assert(alignof(UEffectViewComponent_C) == 0x000010, "Wrong alignment on UEffectViewComponent_C");
static_assert(sizeof(UEffectViewComponent_C) == 0x000220, "Wrong size on UEffectViewComponent_C");

}

