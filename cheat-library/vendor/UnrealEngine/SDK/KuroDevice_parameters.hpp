#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KuroDevice

#include "Basic.hpp"


namespace SDK::Params
{

// Function KuroDevice.DeviceHandle.GetPidAndVidArray
// 0x0010 (0x0010 - 0x0000)
struct DeviceHandle_GetPidAndVidArray final
{
public:
	TArray<class FString>                         ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(DeviceHandle_GetPidAndVidArray) == 0x000008, "Wrong alignment on DeviceHandle_GetPidAndVidArray");
static_assert(sizeof(DeviceHandle_GetPidAndVidArray) == 0x000010, "Wrong size on DeviceHandle_GetPidAndVidArray");
static_assert(offsetof(DeviceHandle_GetPidAndVidArray, ReturnValue) == 0x000000, "Member 'DeviceHandle_GetPidAndVidArray::ReturnValue' has a wrong offset!");

// Function KuroDevice.KuroDeviceBPLibrary.FindAllDeviceVidAndPid
// 0x0018 (0x0018 - 0x0000)
struct KuroDeviceBPLibrary_FindAllDeviceVidAndPid final
{
public:
	TArray<class FString>                         DevicePathList;                                    // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B79[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KuroDeviceBPLibrary_FindAllDeviceVidAndPid) == 0x000008, "Wrong alignment on KuroDeviceBPLibrary_FindAllDeviceVidAndPid");
static_assert(sizeof(KuroDeviceBPLibrary_FindAllDeviceVidAndPid) == 0x000018, "Wrong size on KuroDeviceBPLibrary_FindAllDeviceVidAndPid");
static_assert(offsetof(KuroDeviceBPLibrary_FindAllDeviceVidAndPid, DevicePathList) == 0x000000, "Member 'KuroDeviceBPLibrary_FindAllDeviceVidAndPid::DevicePathList' has a wrong offset!");
static_assert(offsetof(KuroDeviceBPLibrary_FindAllDeviceVidAndPid, ReturnValue) == 0x000010, "Member 'KuroDeviceBPLibrary_FindAllDeviceVidAndPid::ReturnValue' has a wrong offset!");

// Function KuroDevice.KuroDeviceBPLibrary.NewDeviceHandle
// 0x0010 (0x0010 - 0x0000)
struct KuroDeviceBPLibrary_NewDeviceHandle final
{
public:
	class UObject*                                Param_Outer;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDeviceHandle*                          ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KuroDeviceBPLibrary_NewDeviceHandle) == 0x000008, "Wrong alignment on KuroDeviceBPLibrary_NewDeviceHandle");
static_assert(sizeof(KuroDeviceBPLibrary_NewDeviceHandle) == 0x000010, "Wrong size on KuroDeviceBPLibrary_NewDeviceHandle");
static_assert(offsetof(KuroDeviceBPLibrary_NewDeviceHandle, Param_Outer) == 0x000000, "Member 'KuroDeviceBPLibrary_NewDeviceHandle::Param_Outer' has a wrong offset!");
static_assert(offsetof(KuroDeviceBPLibrary_NewDeviceHandle, ReturnValue) == 0x000008, "Member 'KuroDeviceBPLibrary_NewDeviceHandle::ReturnValue' has a wrong offset!");

}

