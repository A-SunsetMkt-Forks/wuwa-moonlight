#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsTaskChangePatrol

#include "Basic.hpp"

#include "TsTaskAbortImmediatelyBase_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsTaskChangePatrol.TsTaskChangePatrol_C
// 0x0020 (0x00D8 - 0x00B8)
class UTsTaskChangePatrol_C final : public UTsTaskAbortImmediatelyBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_TsTaskChangePatrol_C;               // 0x00B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         PatrolIndex;                                       // 0x00C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C4[0x4];                                       // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 PatrolIdBlackboardKey;                             // 0x00C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

public:
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_TsTaskChangePatrol(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsTaskChangePatrol_C">();
	}
	static class UTsTaskChangePatrol_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsTaskChangePatrol_C>();
	}
};
static_assert(alignof(UTsTaskChangePatrol_C) == 0x000008, "Wrong alignment on UTsTaskChangePatrol_C");
static_assert(sizeof(UTsTaskChangePatrol_C) == 0x0000D8, "Wrong size on UTsTaskChangePatrol_C");
static_assert(offsetof(UTsTaskChangePatrol_C, UberGraphFrame_TsTaskChangePatrol_C) == 0x0000B8, "Member 'UTsTaskChangePatrol_C::UberGraphFrame_TsTaskChangePatrol_C' has a wrong offset!");
static_assert(offsetof(UTsTaskChangePatrol_C, PatrolIndex) == 0x0000C0, "Member 'UTsTaskChangePatrol_C::PatrolIndex' has a wrong offset!");
static_assert(offsetof(UTsTaskChangePatrol_C, PatrolIdBlackboardKey) == 0x0000C8, "Member 'UTsTaskChangePatrol_C::PatrolIdBlackboardKey' has a wrong offset!");

}
