#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EyeTracker

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class EyeTracker.EyeTrackerFunctionLibrary
// 0x0000 (0x0030 - 0x0030)
class UEyeTrackerFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static bool GetGazeData(struct FEyeTrackerGazeData* OutGazeData);
	static bool GetStereoGazeData(struct FEyeTrackerStereoGazeData* OutGazeData);
	static bool IsEyeTrackerConnected();
	static bool IsStereoGazeDataAvailable();
	static void SetEyeTrackedPlayer(class APlayerController* PlayerController);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EyeTrackerFunctionLibrary">();
	}
	static class UEyeTrackerFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEyeTrackerFunctionLibrary>();
	}
};
static_assert(alignof(UEyeTrackerFunctionLibrary) == 0x000008, "Wrong alignment on UEyeTrackerFunctionLibrary");
static_assert(sizeof(UEyeTrackerFunctionLibrary) == 0x000030, "Wrong size on UEyeTrackerFunctionLibrary");

}

