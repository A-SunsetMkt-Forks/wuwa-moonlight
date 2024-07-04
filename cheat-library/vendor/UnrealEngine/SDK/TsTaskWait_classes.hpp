#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsTaskWait

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TsTaskAbortImmediatelyBase_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsTaskWait.TsTaskWait_C
// 0x0020 (0x00D8 - 0x00B8)
class UTsTaskWait_C final : public UTsTaskAbortImmediatelyBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_TsTaskWait_C;                       // 0x00B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         TimeMillisecond;                                   // 0x00C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RandomTime;                                        // 0x00C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 BlackboardKeyTime;                                 // 0x00C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TsTaskWait(int32 EntryPoint);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsTaskWait_C">();
	}
	static class UTsTaskWait_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsTaskWait_C>();
	}
};
static_assert(alignof(UTsTaskWait_C) == 0x000008, "Wrong alignment on UTsTaskWait_C");
static_assert(sizeof(UTsTaskWait_C) == 0x0000D8, "Wrong size on UTsTaskWait_C");
static_assert(offsetof(UTsTaskWait_C, UberGraphFrame_TsTaskWait_C) == 0x0000B8, "Member 'UTsTaskWait_C::UberGraphFrame_TsTaskWait_C' has a wrong offset!");
static_assert(offsetof(UTsTaskWait_C, TimeMillisecond) == 0x0000C0, "Member 'UTsTaskWait_C::TimeMillisecond' has a wrong offset!");
static_assert(offsetof(UTsTaskWait_C, RandomTime) == 0x0000C4, "Member 'UTsTaskWait_C::RandomTime' has a wrong offset!");
static_assert(offsetof(UTsTaskWait_C, BlackboardKeyTime) == 0x0000C8, "Member 'UTsTaskWait_C::BlackboardKeyTime' has a wrong offset!");

}

