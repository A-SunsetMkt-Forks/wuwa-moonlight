#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LogicDataShowMesh

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "LogicDataBase_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass LogicDataShowMesh.LogicDataShowMesh_C
// 0x0020 (0x0060 - 0x0040)
class ULogicDataShowMesh_C final : public ULogicDataBase_C
{
public:
	uint8                                         Pad_2BD1[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoftObjectPath                        MaterialEffect;                                    // 0x0040(0x0020)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LogicDataShowMesh_C">();
	}
	static class ULogicDataShowMesh_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULogicDataShowMesh_C>();
	}
};
static_assert(alignof(ULogicDataShowMesh_C) == 0x000008, "Wrong alignment on ULogicDataShowMesh_C");
static_assert(sizeof(ULogicDataShowMesh_C) == 0x000060, "Wrong size on ULogicDataShowMesh_C");
static_assert(offsetof(ULogicDataShowMesh_C, MaterialEffect) == 0x000040, "Member 'ULogicDataShowMesh_C::MaterialEffect' has a wrong offset!");

}

