#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PrefabSystem

#include "Basic.hpp"


namespace SDK::Params
{

// Function PrefabSystem.PrefabBlueprintFunctionLibrary.ApplyPrefab
// 0x0008 (0x0008 - 0x0000)
struct PrefabBlueprintFunctionLibrary_ApplyPrefab final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PrefabBlueprintFunctionLibrary_ApplyPrefab) == 0x000008, "Wrong alignment on PrefabBlueprintFunctionLibrary_ApplyPrefab");
static_assert(sizeof(PrefabBlueprintFunctionLibrary_ApplyPrefab) == 0x000008, "Wrong size on PrefabBlueprintFunctionLibrary_ApplyPrefab");
static_assert(offsetof(PrefabBlueprintFunctionLibrary_ApplyPrefab, Actor) == 0x000000, "Member 'PrefabBlueprintFunctionLibrary_ApplyPrefab::Actor' has a wrong offset!");

// Function PrefabSystem.PrefabBlueprintFunctionLibrary.Instantiate
// 0x0028 (0x0028 - 0x0000)
struct PrefabBlueprintFunctionLibrary_Instantiate final
{
public:
	class UPrefabAsset*                           PrefabAsset;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                        ParentComponent;                                   // 0x0008(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevel*                                 InLevel;                                           // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bTemporaryEditorActor;                             // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1441[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 ReturnValue;                                       // 0x0020(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PrefabBlueprintFunctionLibrary_Instantiate) == 0x000008, "Wrong alignment on PrefabBlueprintFunctionLibrary_Instantiate");
static_assert(sizeof(PrefabBlueprintFunctionLibrary_Instantiate) == 0x000028, "Wrong size on PrefabBlueprintFunctionLibrary_Instantiate");
static_assert(offsetof(PrefabBlueprintFunctionLibrary_Instantiate, PrefabAsset) == 0x000000, "Member 'PrefabBlueprintFunctionLibrary_Instantiate::PrefabAsset' has a wrong offset!");
static_assert(offsetof(PrefabBlueprintFunctionLibrary_Instantiate, ParentComponent) == 0x000008, "Member 'PrefabBlueprintFunctionLibrary_Instantiate::ParentComponent' has a wrong offset!");
static_assert(offsetof(PrefabBlueprintFunctionLibrary_Instantiate, InLevel) == 0x000010, "Member 'PrefabBlueprintFunctionLibrary_Instantiate::InLevel' has a wrong offset!");
static_assert(offsetof(PrefabBlueprintFunctionLibrary_Instantiate, bTemporaryEditorActor) == 0x000018, "Member 'PrefabBlueprintFunctionLibrary_Instantiate::bTemporaryEditorActor' has a wrong offset!");
static_assert(offsetof(PrefabBlueprintFunctionLibrary_Instantiate, ReturnValue) == 0x000020, "Member 'PrefabBlueprintFunctionLibrary_Instantiate::ReturnValue' has a wrong offset!");

}
