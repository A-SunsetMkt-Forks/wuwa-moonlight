#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NiagaraShader

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class NiagaraShader.NiagaraScriptBase
// 0x0000 (0x0030 - 0x0030)
class UNiagaraScriptBase : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraScriptBase">();
	}
	static class UNiagaraScriptBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraScriptBase>();
	}
};
static_assert(alignof(UNiagaraScriptBase) == 0x000008, "Wrong alignment on UNiagaraScriptBase");
static_assert(sizeof(UNiagaraScriptBase) == 0x000030, "Wrong size on UNiagaraScriptBase");

}

