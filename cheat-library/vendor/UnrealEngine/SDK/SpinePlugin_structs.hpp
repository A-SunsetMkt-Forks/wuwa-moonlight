#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpinePlugin

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct SpinePlugin.SpineEvent
// 0x0030 (0x0030 - 0x0000)
struct FSpineEvent final
{
public:
	class FString                                 Name;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 StringValue;                                       // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         IntValue;                                          // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FloatValue;                                        // 0x0024(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Time;                                              // 0x0028(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2388[0x4];                                     // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSpineEvent) == 0x000008, "Wrong alignment on FSpineEvent");
static_assert(sizeof(FSpineEvent) == 0x000030, "Wrong size on FSpineEvent");
static_assert(offsetof(FSpineEvent, Name) == 0x000000, "Member 'FSpineEvent::Name' has a wrong offset!");
static_assert(offsetof(FSpineEvent, StringValue) == 0x000010, "Member 'FSpineEvent::StringValue' has a wrong offset!");
static_assert(offsetof(FSpineEvent, IntValue) == 0x000020, "Member 'FSpineEvent::IntValue' has a wrong offset!");
static_assert(offsetof(FSpineEvent, FloatValue) == 0x000024, "Member 'FSpineEvent::FloatValue' has a wrong offset!");
static_assert(offsetof(FSpineEvent, Time) == 0x000028, "Member 'FSpineEvent::Time' has a wrong offset!");

// ScriptStruct SpinePlugin.SpineAnimationStateMixData
// 0x0028 (0x0028 - 0x0000)
struct FSpineAnimationStateMixData final
{
public:
	class FString                                 From;                                              // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 To;                                                // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Mix;                                               // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2389[0x4];                                     // 0x0024(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSpineAnimationStateMixData) == 0x000008, "Wrong alignment on FSpineAnimationStateMixData");
static_assert(sizeof(FSpineAnimationStateMixData) == 0x000028, "Wrong size on FSpineAnimationStateMixData");
static_assert(offsetof(FSpineAnimationStateMixData, From) == 0x000000, "Member 'FSpineAnimationStateMixData::From' has a wrong offset!");
static_assert(offsetof(FSpineAnimationStateMixData, To) == 0x000010, "Member 'FSpineAnimationStateMixData::To' has a wrong offset!");
static_assert(offsetof(FSpineAnimationStateMixData, Mix) == 0x000020, "Member 'FSpineAnimationStateMixData::Mix' has a wrong offset!");

}

