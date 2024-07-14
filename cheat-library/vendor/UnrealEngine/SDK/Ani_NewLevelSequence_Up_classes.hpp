#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ani_NewLevelSequence_Up

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "LevelSequence_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Ani_NewLevelSequence_Up.SequenceDirector_C
// 0x0008 (0x0040 - 0x0038)
class Ani_NewLevelSequence_Up::USequenceDirector_C final : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0038(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
	void NiaUp_Event_0(class AUINiagaraActor* NiaUp);
	void SequenceEvent__ENTRYPOINTSequenceDirector_0(class AUINiagaraActor* NiaUp);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BlueprintGeneratedClass Ani_NewLevelSequence_Up.SequenceDirector_C", true, "SequenceDirector_C">();
	}
	static class Ani_NewLevelSequence_Up::USequenceDirector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<Ani_NewLevelSequence_Up::USequenceDirector_C>();
	}
};
static_assert(alignof(Ani_NewLevelSequence_Up::USequenceDirector_C) == 0x000008, "Wrong alignment on Ani_NewLevelSequence_Up::USequenceDirector_C");
static_assert(sizeof(Ani_NewLevelSequence_Up::USequenceDirector_C) == 0x000040, "Wrong size on Ani_NewLevelSequence_Up::USequenceDirector_C");
static_assert(offsetof(Ani_NewLevelSequence_Up::USequenceDirector_C, UberGraphFrame) == 0x000038, "Member 'Ani_NewLevelSequence_Up::USequenceDirector_C::UberGraphFrame' has a wrong offset!");

}
