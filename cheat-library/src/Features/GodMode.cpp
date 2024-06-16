#include "GodMode.h"

void GodMode::Run(void** args, size_t numArgs)
{
	if (!Initalized)
		return;

	if (numArgs != 1)
	{
		//std::cout << "Too many or too little args passed to GodMode, Destryoing...\n";
		Destroy();
		return;
	}

	SDK::APawn* AcknowledgedPawn = (SDK::APawn*)args[0];

	if (bGodMode && AcknowledgedPawn)
	{
		AcknowledgedPawn->bCanBeDamaged = false;
		//bOnce = false;
	}

	if (!bGodMode && AcknowledgedPawn && !bOnce)
	{
		AcknowledgedPawn->bCanBeDamaged = true;
		//bOnce = true;
	}
}
