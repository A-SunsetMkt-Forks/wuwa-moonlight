#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Seq_Dajijiguan02_End

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Seq_Dajijiguan02_End.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
// 0x0020 (0x0020 - 0x0000)
struct SequenceDirector_C_ExecuteUbergraph_SequenceDirector final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_399D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SequenceDirector_C_ExecuteUbergraph_SequenceDirector) == 0x000008, "Wrong alignment on SequenceDirector_C_ExecuteUbergraph_SequenceDirector");
static_assert(sizeof(SequenceDirector_C_ExecuteUbergraph_SequenceDirector) == 0x000020, "Wrong size on SequenceDirector_C_ExecuteUbergraph_SequenceDirector");
static_assert(offsetof(SequenceDirector_C_ExecuteUbergraph_SequenceDirector, EntryPoint) == 0x000000, "Member 'SequenceDirector_C_ExecuteUbergraph_SequenceDirector::EntryPoint' has a wrong offset!");
static_assert(offsetof(SequenceDirector_C_ExecuteUbergraph_SequenceDirector, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x000008, "Member 'SequenceDirector_C_ExecuteUbergraph_SequenceDirector::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SequenceDirector_C_ExecuteUbergraph_SequenceDirector, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000010, "Member 'SequenceDirector_C_ExecuteUbergraph_SequenceDirector::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");

}

