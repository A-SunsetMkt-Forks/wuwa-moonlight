#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LGUIEventSystemActor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "LGUI_classes.hpp"
#include "InputCore_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass LGUIEventSystemActor.LGUIEventSystemActor_C
// 0x0068 (0x0318 - 0x02B0)
class ALGUIEventSystemActor_C final : public ALGUIEventSystemActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ULGUI_TouchInputModule*                 LGUI_TouchInputModule;                             // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULGUI_StandaloneInputModule*            LGUI_StandaloneInputModule;                        // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULGUI_PointerInputModule*               ValidInputModule;                                  // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnMiddleMouseScroll;                               // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnTouch;                                           // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnTouchMove;                                       // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickKey;                                        // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnMiddleMouseScroll__DelegateSignature(float AxisValue);
	void OnTouch__DelegateSignature(bool TouchPress, int32 TouchID, const struct FVector& TouchPointPosition);
	void OnTouchMove__DelegateSignature(int32 TouchID, const struct FVector& TouchPointPosition);
	void OnClickKey__DelegateSignature(const struct FKey& KeyCode, bool IsPress);
	void ExecuteUbergraph_LGUIEventSystemActor(int32 EntryPoint);
	void InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_0(float AxisValue);
	void ReceiveBeginPlay();
	void InpActEvt_AnyKey_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void InpActEvt_AnyKey_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftStick_Up_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftStick_Up_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftStick_Right_K2Node_InputKeyEvent_10(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftStick_Right_K2Node_InputKeyEvent_11(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftStick_Left_K2Node_InputKeyEvent_12(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftStick_Left_K2Node_InputKeyEvent_13(const struct FKey& Key);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_14(const struct FKey& Key);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_15(const struct FKey& Key);
	void InpTchEvt_Pressed(ETouchIndex FingerIndex, const struct FVector& Location);
	void InpTchEvt_Released(ETouchIndex FingerIndex, const struct FVector& Location);
	void InpTchEvt_Moved(ETouchIndex FingerIndex, const struct FVector& Location);
	void InpActEvt_Enter_K2Node_InputKeyEvent_16(const struct FKey& Key);
	void InpActEvt_Enter_K2Node_InputKeyEvent_17(const struct FKey& Key);
	void InpActEvt_Left_K2Node_InputKeyEvent_18(const struct FKey& Key);
	void InpActEvt_Left_K2Node_InputKeyEvent_19(const struct FKey& Key);
	void InpActEvt_Right_K2Node_InputKeyEvent_20(const struct FKey& Key);
	void InpActEvt_Right_K2Node_InputKeyEvent_21(const struct FKey& Key);
	void InpActEvt_Up_K2Node_InputKeyEvent_22(const struct FKey& Key);
	void InpActEvt_Up_K2Node_InputKeyEvent_23(const struct FKey& Key);
	void InpActEvt_Down_K2Node_InputKeyEvent_24(const struct FKey& Key);
	void InpActEvt_Down_K2Node_InputKeyEvent_25(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_26(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_27(const struct FKey& Key);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LGUIEventSystemActor_C">();
	}
	static class ALGUIEventSystemActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALGUIEventSystemActor_C>();
	}
};
static_assert(alignof(ALGUIEventSystemActor_C) == 0x000008, "Wrong alignment on ALGUIEventSystemActor_C");
static_assert(sizeof(ALGUIEventSystemActor_C) == 0x000318, "Wrong size on ALGUIEventSystemActor_C");
static_assert(offsetof(ALGUIEventSystemActor_C, UberGraphFrame) == 0x0002B0, "Member 'ALGUIEventSystemActor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ALGUIEventSystemActor_C, LGUI_TouchInputModule) == 0x0002B8, "Member 'ALGUIEventSystemActor_C::LGUI_TouchInputModule' has a wrong offset!");
static_assert(offsetof(ALGUIEventSystemActor_C, LGUI_StandaloneInputModule) == 0x0002C0, "Member 'ALGUIEventSystemActor_C::LGUI_StandaloneInputModule' has a wrong offset!");
static_assert(offsetof(ALGUIEventSystemActor_C, DefaultSceneRoot) == 0x0002C8, "Member 'ALGUIEventSystemActor_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ALGUIEventSystemActor_C, ValidInputModule) == 0x0002D0, "Member 'ALGUIEventSystemActor_C::ValidInputModule' has a wrong offset!");
static_assert(offsetof(ALGUIEventSystemActor_C, OnMiddleMouseScroll) == 0x0002D8, "Member 'ALGUIEventSystemActor_C::OnMiddleMouseScroll' has a wrong offset!");
static_assert(offsetof(ALGUIEventSystemActor_C, OnTouch) == 0x0002E8, "Member 'ALGUIEventSystemActor_C::OnTouch' has a wrong offset!");
static_assert(offsetof(ALGUIEventSystemActor_C, OnTouchMove) == 0x0002F8, "Member 'ALGUIEventSystemActor_C::OnTouchMove' has a wrong offset!");
static_assert(offsetof(ALGUIEventSystemActor_C, OnClickKey) == 0x000308, "Member 'ALGUIEventSystemActor_C::OnClickKey' has a wrong offset!");

}

