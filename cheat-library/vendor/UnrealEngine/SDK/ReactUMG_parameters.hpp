#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ReactUMG

#include "Basic.hpp"


namespace SDK::Params
{

// Function ReactUMG.ReactWidget.AddChild
// 0x0010 (0x0010 - 0x0000)
struct ReactWidget_AddChild final
{
public:
	class UWidget*                                Content;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPanelSlot*                             ReturnValue;                                       // 0x0008(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ReactWidget_AddChild) == 0x000008, "Wrong alignment on ReactWidget_AddChild");
static_assert(sizeof(ReactWidget_AddChild) == 0x000010, "Wrong size on ReactWidget_AddChild");
static_assert(offsetof(ReactWidget_AddChild, Content) == 0x000000, "Member 'ReactWidget_AddChild::Content' has a wrong offset!");
static_assert(offsetof(ReactWidget_AddChild, ReturnValue) == 0x000008, "Member 'ReactWidget_AddChild::ReturnValue' has a wrong offset!");

// Function ReactUMG.ReactWidget.RemoveChild
// 0x0010 (0x0010 - 0x0000)
struct ReactWidget_RemoveChild final
{
public:
	class UWidget*                                Content;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_234D[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ReactWidget_RemoveChild) == 0x000008, "Wrong alignment on ReactWidget_RemoveChild");
static_assert(sizeof(ReactWidget_RemoveChild) == 0x000010, "Wrong size on ReactWidget_RemoveChild");
static_assert(offsetof(ReactWidget_RemoveChild, Content) == 0x000000, "Member 'ReactWidget_RemoveChild::Content' has a wrong offset!");
static_assert(offsetof(ReactWidget_RemoveChild, ReturnValue) == 0x000008, "Member 'ReactWidget_RemoveChild::ReturnValue' has a wrong offset!");

// Function ReactUMG.UMGManager.CreateReactWidget
// 0x0010 (0x0010 - 0x0000)
struct UMGManager_CreateReactWidget final
{
public:
	class UWorld*                                 World;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UReactWidget*                           ReturnValue;                                       // 0x0008(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(UMGManager_CreateReactWidget) == 0x000008, "Wrong alignment on UMGManager_CreateReactWidget");
static_assert(sizeof(UMGManager_CreateReactWidget) == 0x000010, "Wrong size on UMGManager_CreateReactWidget");
static_assert(offsetof(UMGManager_CreateReactWidget, World) == 0x000000, "Member 'UMGManager_CreateReactWidget::World' has a wrong offset!");
static_assert(offsetof(UMGManager_CreateReactWidget, ReturnValue) == 0x000008, "Member 'UMGManager_CreateReactWidget::ReturnValue' has a wrong offset!");

// Function ReactUMG.UMGManager.CreateWidget
// 0x0018 (0x0018 - 0x0000)
struct UMGManager_CreateWidget final
{
public:
	class UWorld*                                 World;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                 Param_Class;                                       // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                            ReturnValue;                                       // 0x0010(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(UMGManager_CreateWidget) == 0x000008, "Wrong alignment on UMGManager_CreateWidget");
static_assert(sizeof(UMGManager_CreateWidget) == 0x000018, "Wrong size on UMGManager_CreateWidget");
static_assert(offsetof(UMGManager_CreateWidget, World) == 0x000000, "Member 'UMGManager_CreateWidget::World' has a wrong offset!");
static_assert(offsetof(UMGManager_CreateWidget, Param_Class) == 0x000008, "Member 'UMGManager_CreateWidget::Param_Class' has a wrong offset!");
static_assert(offsetof(UMGManager_CreateWidget, ReturnValue) == 0x000010, "Member 'UMGManager_CreateWidget::ReturnValue' has a wrong offset!");

// Function ReactUMG.UMGManager.SynchronizeSlotProperties
// 0x0008 (0x0008 - 0x0000)
struct UMGManager_SynchronizeSlotProperties final
{
public:
	class UPanelSlot*                             Slot;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(UMGManager_SynchronizeSlotProperties) == 0x000008, "Wrong alignment on UMGManager_SynchronizeSlotProperties");
static_assert(sizeof(UMGManager_SynchronizeSlotProperties) == 0x000008, "Wrong size on UMGManager_SynchronizeSlotProperties");
static_assert(offsetof(UMGManager_SynchronizeSlotProperties, Slot) == 0x000000, "Member 'UMGManager_SynchronizeSlotProperties::Slot' has a wrong offset!");

// Function ReactUMG.UMGManager.SynchronizeWidgetProperties
// 0x0008 (0x0008 - 0x0000)
struct UMGManager_SynchronizeWidgetProperties final
{
public:
	class UWidget*                                Widget;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(UMGManager_SynchronizeWidgetProperties) == 0x000008, "Wrong alignment on UMGManager_SynchronizeWidgetProperties");
static_assert(sizeof(UMGManager_SynchronizeWidgetProperties) == 0x000008, "Wrong size on UMGManager_SynchronizeWidgetProperties");
static_assert(offsetof(UMGManager_SynchronizeWidgetProperties, Widget) == 0x000000, "Member 'UMGManager_SynchronizeWidgetProperties::Widget' has a wrong offset!");

}

