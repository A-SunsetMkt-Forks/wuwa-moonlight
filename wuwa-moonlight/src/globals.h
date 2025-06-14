#pragma once
#include "includes.h"

namespace globals
{
	inline bool g_break{ false };
	inline const char* BuildInfo;
	inline const char* ProjectName = "Moonlight";

	inline ProcessEvent oProcessEvent;
	inline PostRender oPostRender;

	inline SDK::UKuroStaticLibrary* KuroStaticLib = nullptr;
	inline SDK::UAkGameplayStatics* UGAkStatics = nullptr;
	inline SDK::UEngine* engine = nullptr;
	inline SDK::UWorld* world = nullptr;
	inline SDK::UGameInstance* game_instance = nullptr;
	inline SDK::TArray<SDK::ULocalPlayer*> local_players;
	inline SDK::ULocalPlayer* local_player = nullptr;
	inline SDK::UGameViewportClient* viewport = nullptr;
	inline SDK::APlayerController* player_controller = nullptr;
	inline SDK::APawn* pawn = nullptr;
	inline SDK::ACharacter* character = nullptr;

	inline int32 FN_TsAnimNotifyReSkillEvent_C = 0;		 // Function TsAnimNotifyReSkillEvent.TsAnimNotifyReSkillEvent_C.K2_Notify
	inline int32 FN_TsAnimNotifyStateCounterAttack_C = 0; // Function TsAnimNotifyStateCounterAttack.TsAnimNotifyStateCounterAttack_C.K2_NotifyBegin
	inline UFont* font_roboto = 0;

	inline bool g_CanDrawPostRender = false;
}
