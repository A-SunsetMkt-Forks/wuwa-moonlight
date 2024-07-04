#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABPC_Seq_Interface

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ABPC_Seq_Interface.ABPC_Seq_Interface_C
// 0x0000 (0x0030 - 0x0030)
class IABPC_Seq_Interface_C final : public IInterface
{
public:
	void GetABPC_Body_V2(class UABPC_Seq_Body_V2_C** ABPC_Body_V2);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABPC_Seq_Interface_C">();
	}
	static class IABPC_Seq_Interface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IABPC_Seq_Interface_C>();
	}
};
static_assert(alignof(IABPC_Seq_Interface_C) == 0x000008, "Wrong alignment on IABPC_Seq_Interface_C");
static_assert(sizeof(IABPC_Seq_Interface_C) == 0x000030, "Wrong size on IABPC_Seq_Interface_C");

}

