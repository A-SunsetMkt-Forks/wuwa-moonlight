#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsUiAutoPlayLevelSequenceComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "LGUI_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsUiAutoPlayLevelSequenceComponent.TsUiAutoPlayLevelSequenceComponent_C
// 0x0008 (0x00F0 - 0x00E8)
class UTsUiAutoPlayLevelSequenceComponent_C final : public ULGUIBehaviour
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_TsUiAutoPlayLevelSequenceComponent(int32 EntryPoint);
	void OnUIActiveInHierarchyBP(bool ActiveOrInactive);
	void OnDestroyBP();
	void UpdateBP(float DeltaTime);
	void AwakeBP();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsUiAutoPlayLevelSequenceComponent_C">();
	}
	static class UTsUiAutoPlayLevelSequenceComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsUiAutoPlayLevelSequenceComponent_C>();
	}
};
static_assert(alignof(UTsUiAutoPlayLevelSequenceComponent_C) == 0x000008, "Wrong alignment on UTsUiAutoPlayLevelSequenceComponent_C");
static_assert(sizeof(UTsUiAutoPlayLevelSequenceComponent_C) == 0x0000F0, "Wrong size on UTsUiAutoPlayLevelSequenceComponent_C");
static_assert(offsetof(UTsUiAutoPlayLevelSequenceComponent_C, UberGraphFrame) == 0x0000E8, "Member 'UTsUiAutoPlayLevelSequenceComponent_C::UberGraphFrame' has a wrong offset!");

}

