#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MagicLeapLightEstimation

#include "Basic.hpp"

#include "MagicLeapLightEstimation_structs.hpp"


namespace SDK::Params
{

// Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.CreateTracker
// 0x0001 (0x0001 - 0x0000)
struct MagicLeapLightEstimationFunctionLibrary_CreateTracker final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MagicLeapLightEstimationFunctionLibrary_CreateTracker) == 0x000001, "Wrong alignment on MagicLeapLightEstimationFunctionLibrary_CreateTracker");
static_assert(sizeof(MagicLeapLightEstimationFunctionLibrary_CreateTracker) == 0x000001, "Wrong size on MagicLeapLightEstimationFunctionLibrary_CreateTracker");
static_assert(offsetof(MagicLeapLightEstimationFunctionLibrary_CreateTracker, ReturnValue) == 0x000000, "Member 'MagicLeapLightEstimationFunctionLibrary_CreateTracker::ReturnValue' has a wrong offset!");

// Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetAmbientGlobalState
// 0x0020 (0x0020 - 0x0000)
struct MagicLeapLightEstimationFunctionLibrary_GetAmbientGlobalState final
{
public:
	struct FMagicLeapLightEstimationAmbientGlobalState GlobalAmbientState;                                // 0x0000(0x0018)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_252E[0x7];                                     // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MagicLeapLightEstimationFunctionLibrary_GetAmbientGlobalState) == 0x000008, "Wrong alignment on MagicLeapLightEstimationFunctionLibrary_GetAmbientGlobalState");
static_assert(sizeof(MagicLeapLightEstimationFunctionLibrary_GetAmbientGlobalState) == 0x000020, "Wrong size on MagicLeapLightEstimationFunctionLibrary_GetAmbientGlobalState");
static_assert(offsetof(MagicLeapLightEstimationFunctionLibrary_GetAmbientGlobalState, GlobalAmbientState) == 0x000000, "Member 'MagicLeapLightEstimationFunctionLibrary_GetAmbientGlobalState::GlobalAmbientState' has a wrong offset!");
static_assert(offsetof(MagicLeapLightEstimationFunctionLibrary_GetAmbientGlobalState, ReturnValue) == 0x000018, "Member 'MagicLeapLightEstimationFunctionLibrary_GetAmbientGlobalState::ReturnValue' has a wrong offset!");

// Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetColorTemperatureState
// 0x0028 (0x0028 - 0x0000)
struct MagicLeapLightEstimationFunctionLibrary_GetColorTemperatureState final
{
public:
	struct FMagicLeapLightEstimationColorTemperatureState ColorTemperatureState;                             // 0x0000(0x0020)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_252F[0x7];                                     // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MagicLeapLightEstimationFunctionLibrary_GetColorTemperatureState) == 0x000008, "Wrong alignment on MagicLeapLightEstimationFunctionLibrary_GetColorTemperatureState");
static_assert(sizeof(MagicLeapLightEstimationFunctionLibrary_GetColorTemperatureState) == 0x000028, "Wrong size on MagicLeapLightEstimationFunctionLibrary_GetColorTemperatureState");
static_assert(offsetof(MagicLeapLightEstimationFunctionLibrary_GetColorTemperatureState, ColorTemperatureState) == 0x000000, "Member 'MagicLeapLightEstimationFunctionLibrary_GetColorTemperatureState::ColorTemperatureState' has a wrong offset!");
static_assert(offsetof(MagicLeapLightEstimationFunctionLibrary_GetColorTemperatureState, ReturnValue) == 0x000020, "Member 'MagicLeapLightEstimationFunctionLibrary_GetColorTemperatureState::ReturnValue' has a wrong offset!");

// Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.IsTrackerValid
// 0x0001 (0x0001 - 0x0000)
struct MagicLeapLightEstimationFunctionLibrary_IsTrackerValid final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MagicLeapLightEstimationFunctionLibrary_IsTrackerValid) == 0x000001, "Wrong alignment on MagicLeapLightEstimationFunctionLibrary_IsTrackerValid");
static_assert(sizeof(MagicLeapLightEstimationFunctionLibrary_IsTrackerValid) == 0x000001, "Wrong size on MagicLeapLightEstimationFunctionLibrary_IsTrackerValid");
static_assert(offsetof(MagicLeapLightEstimationFunctionLibrary_IsTrackerValid, ReturnValue) == 0x000000, "Member 'MagicLeapLightEstimationFunctionLibrary_IsTrackerValid::ReturnValue' has a wrong offset!");

}

