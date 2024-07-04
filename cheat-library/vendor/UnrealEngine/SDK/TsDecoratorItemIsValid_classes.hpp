#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsDecoratorItemIsValid

#include "Basic.hpp"

#include "AIModule_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsDecoratorItemIsValid.TsDecoratorItemIsValid_C
// 0x0010 (0x00B8 - 0x00A8)
class UTsDecoratorItemIsValid_C final : public UBTDecorator_BlueprintBase
{
public:
	class FString                                 ItemBlackboardKey;                                 // 0x00A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash)

public:
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsDecoratorItemIsValid_C">();
	}
	static class UTsDecoratorItemIsValid_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsDecoratorItemIsValid_C>();
	}
};
static_assert(alignof(UTsDecoratorItemIsValid_C) == 0x000008, "Wrong alignment on UTsDecoratorItemIsValid_C");
static_assert(sizeof(UTsDecoratorItemIsValid_C) == 0x0000B8, "Wrong size on UTsDecoratorItemIsValid_C");
static_assert(offsetof(UTsDecoratorItemIsValid_C, ItemBlackboardKey) == 0x0000A8, "Member 'UTsDecoratorItemIsValid_C::ItemBlackboardKey' has a wrong offset!");

}

