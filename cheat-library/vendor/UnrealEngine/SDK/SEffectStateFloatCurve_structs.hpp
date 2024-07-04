#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SEffectStateFloatCurve

#include "Basic.hpp"

#include "KuroCurve_structs.hpp"


namespace SDK
{

// UserDefinedStruct SEffectStateFloatCurve.SEffectStateFloatCurve
// 0x0120 (0x0120 - 0x0000)
struct FSEffectStateFloatCurve final
{
public:
	struct FKuroCurveFloat                        PreFloatCurve_8_AF0BD6F04B2B003BC6AF93A995D4C23C;  // 0x0000(0x0090)(Edit, BlueprintVisible)
	struct FKuroCurveFloat                        LoopFloatCurve_9_9F3A57914601B0BEA281CEBA57FB01F9; // 0x0090(0x0090)(Edit, BlueprintVisible)
};
static_assert(alignof(FSEffectStateFloatCurve) == 0x000008, "Wrong alignment on FSEffectStateFloatCurve");
static_assert(sizeof(FSEffectStateFloatCurve) == 0x000120, "Wrong size on FSEffectStateFloatCurve");
static_assert(offsetof(FSEffectStateFloatCurve, PreFloatCurve_8_AF0BD6F04B2B003BC6AF93A995D4C23C) == 0x000000, "Member 'FSEffectStateFloatCurve::PreFloatCurve_8_AF0BD6F04B2B003BC6AF93A995D4C23C' has a wrong offset!");
static_assert(offsetof(FSEffectStateFloatCurve, LoopFloatCurve_9_9F3A57914601B0BEA281CEBA57FB01F9) == 0x000090, "Member 'FSEffectStateFloatCurve::LoopFloatCurve_9_9F3A57914601B0BEA281CEBA57FB01F9' has a wrong offset!");

}

