#pragma once
#include <includes.h>
#include <globals.h>
using namespace globals;

using namespace globals;

class ESP
{
private:
	bool Initalized = false;

public:
	bool bEnabled = false;
	float fMaxDistance = 100000.0f;
	float fMinDistance = 0.1f;
	float fDistance = 10000.0f;

	enum Targets {
		NPC,
		Item,
		Enemy,
		Chests,
	};

	//std::vector<Targets> TargetsNames = {
	//	Targets::NPC = {},
	//};

private:
	bool bOnce = false;

public:
	
	// Handle checking for any key/hotkey presses or holds needed for features
	void HandleKeys();

	// This should be run in the ImGUI draw loop, used to draw anything to the menu
	void DrawMenuItems() ;

	// This should be run at the top of the ImGUI draw loop, used to render things like ESP, Tracers, and Debug Info
	void Render();

	// This should be run in the feature loop, used to run any acutal feature code like setting a value for godmode
	void Run();
};

inline void ESP::DrawMenuItems()
{
	ImGui::Checkbox("ESP", &bEnabled);
	if (bEnabled) {
		ImGui::Text("ESP Distance");
		ImGui::SliderFloat("##Speed", &fDistance, fMinDistance, fMaxDistance);
	}
}

inline void ESP::Run()
{

	if (bEnabled && AcknowledgedPawn)
	{
		auto world = UWorld::GetWorld();

		auto levels = world->Levels.Num();

		auto localplayer = world->OwningGameInstance->LocalPlayers[0];

		for (int i = 0; i < levels; i++) {
			for (auto actor : world->Levels[i]->Actors) {

			}
		}
	}

	if (!bEnabled && AcknowledgedPawn && !bOnce)
	{
		bOnce = true;
	}
}