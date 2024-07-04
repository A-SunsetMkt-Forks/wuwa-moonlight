#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsDecoratorCheckInbound

#include "Basic.hpp"

#include "AIModule_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsDecoratorCheckInbound.TsDecoratorCheckInbound_C
// 0x0050 (0x00F8 - 0x00A8)
class UTsDecoratorCheckInbound_C final : public UBTDecorator_BlueprintBase
{
public:
	TMap<class FString, float>                    SocketHeight;                                      // 0x00A8(0x0050)(Edit, BlueprintVisible)

public:
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsDecoratorCheckInbound_C">();
	}
	static class UTsDecoratorCheckInbound_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsDecoratorCheckInbound_C>();
	}
};
static_assert(alignof(UTsDecoratorCheckInbound_C) == 0x000008, "Wrong alignment on UTsDecoratorCheckInbound_C");
static_assert(sizeof(UTsDecoratorCheckInbound_C) == 0x0000F8, "Wrong size on UTsDecoratorCheckInbound_C");
static_assert(offsetof(UTsDecoratorCheckInbound_C, SocketHeight) == 0x0000A8, "Member 'UTsDecoratorCheckInbound_C::SocketHeight' has a wrong offset!");

}

