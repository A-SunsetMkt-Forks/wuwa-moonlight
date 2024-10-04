#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CineCamera

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CinematicCamera_structs.hpp"
#include "CinematicCamera_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CineCamera.BP_CineCamera_C
// 0x00D0 (0x0AF0 - 0x0A20)
class ABP_CineCamera_C final : public ACineCameraActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A20(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         ResolutionAdaptFactor;                             // 0x0A28(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A2C[0x4];                                      // 0x0A2C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    UiCameraAnimationRow;                              // 0x0A30(0x0018)(Edit, BlueprintVisible, NoDestructor)
	bool                                          IsAutoTransform;                                   // 0x0A48(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A49[0x3];                                      // 0x0A49(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         OffsetTime;                                        // 0x0A4C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxOffsetTime;                                     // 0x0A50(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCameraFilmbackSettings                Filmback;                                          // 0x0A54(0x000C)(Edit, BlueprintVisible, NoDestructor)
	bool                                          Constrain_Aspect_Ratio;                            // 0x0A60(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A61[0x3];                                      // 0x0A61(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Current_Focal_Length;                              // 0x0A64(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Current_Aperture;                                  // 0x0A68(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A6C[0x4];                                      // 0x0A6C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCameraFocusSettings                   Focus_Settings;                                    // 0x0A70(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCameraLensSettings                    Lens_Settings;                                     // 0x0AD0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                         FocalRegion;                                       // 0x0AE8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_CineCamera(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void EndAutoTransform();
	void BeginAutoTransform(float TimeLength);
	void ApplyUiCameraSettings();
	void ResetSeqCineCamSetting();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CineCamera_C">();
	}
	static class ABP_CineCamera_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CineCamera_C>();
	}
};
static_assert(alignof(ABP_CineCamera_C) == 0x000010, "Wrong alignment on ABP_CineCamera_C");
static_assert(sizeof(ABP_CineCamera_C) == 0x000AF0, "Wrong size on ABP_CineCamera_C");
static_assert(offsetof(ABP_CineCamera_C, UberGraphFrame) == 0x000A20, "Member 'ABP_CineCamera_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CineCamera_C, ResolutionAdaptFactor) == 0x000A28, "Member 'ABP_CineCamera_C::ResolutionAdaptFactor' has a wrong offset!");
static_assert(offsetof(ABP_CineCamera_C, UiCameraAnimationRow) == 0x000A30, "Member 'ABP_CineCamera_C::UiCameraAnimationRow' has a wrong offset!");
static_assert(offsetof(ABP_CineCamera_C, IsAutoTransform) == 0x000A48, "Member 'ABP_CineCamera_C::IsAutoTransform' has a wrong offset!");
static_assert(offsetof(ABP_CineCamera_C, OffsetTime) == 0x000A4C, "Member 'ABP_CineCamera_C::OffsetTime' has a wrong offset!");
static_assert(offsetof(ABP_CineCamera_C, MaxOffsetTime) == 0x000A50, "Member 'ABP_CineCamera_C::MaxOffsetTime' has a wrong offset!");
static_assert(offsetof(ABP_CineCamera_C, Filmback) == 0x000A54, "Member 'ABP_CineCamera_C::Filmback' has a wrong offset!");
static_assert(offsetof(ABP_CineCamera_C, Constrain_Aspect_Ratio) == 0x000A60, "Member 'ABP_CineCamera_C::Constrain_Aspect_Ratio' has a wrong offset!");
static_assert(offsetof(ABP_CineCamera_C, Current_Focal_Length) == 0x000A64, "Member 'ABP_CineCamera_C::Current_Focal_Length' has a wrong offset!");
static_assert(offsetof(ABP_CineCamera_C, Current_Aperture) == 0x000A68, "Member 'ABP_CineCamera_C::Current_Aperture' has a wrong offset!");
static_assert(offsetof(ABP_CineCamera_C, Focus_Settings) == 0x000A70, "Member 'ABP_CineCamera_C::Focus_Settings' has a wrong offset!");
static_assert(offsetof(ABP_CineCamera_C, Lens_Settings) == 0x000AD0, "Member 'ABP_CineCamera_C::Lens_Settings' has a wrong offset!");
static_assert(offsetof(ABP_CineCamera_C, FocalRegion) == 0x000AE8, "Member 'ABP_CineCamera_C::FocalRegion' has a wrong offset!");

}
