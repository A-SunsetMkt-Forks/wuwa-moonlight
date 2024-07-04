#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsTaskSwitchAnimalState

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EAnimalEcologicalState_structs.hpp"
#include "TsTaskAbortImmediatelyBase_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsTaskSwitchAnimalState.TsTaskSwitchAnimalState_C
// 0x0010 (0x00C8 - 0x00B8)
class UTsTaskSwitchAnimalState_C final : public UTsTaskAbortImmediatelyBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_TsTaskSwitchAnimalState_C;          // 0x00B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	EAnimalEcologicalState                        State;                                             // 0x00C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TsTaskSwitchAnimalState(int32 EntryPoint);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsTaskSwitchAnimalState_C">();
	}
	static class UTsTaskSwitchAnimalState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsTaskSwitchAnimalState_C>();
	}
};
static_assert(alignof(UTsTaskSwitchAnimalState_C) == 0x000008, "Wrong alignment on UTsTaskSwitchAnimalState_C");
static_assert(sizeof(UTsTaskSwitchAnimalState_C) == 0x0000C8, "Wrong size on UTsTaskSwitchAnimalState_C");
static_assert(offsetof(UTsTaskSwitchAnimalState_C, UberGraphFrame_TsTaskSwitchAnimalState_C) == 0x0000B8, "Member 'UTsTaskSwitchAnimalState_C::UberGraphFrame_TsTaskSwitchAnimalState_C' has a wrong offset!");
static_assert(offsetof(UTsTaskSwitchAnimalState_C, State) == 0x0000C0, "Member 'UTsTaskSwitchAnimalState_C::State' has a wrong offset!");

}

