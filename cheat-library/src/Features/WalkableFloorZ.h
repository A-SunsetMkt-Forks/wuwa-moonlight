#include "Feature.h"

class WalkableFloorZ : Feature
{
private:
	bool Initalized = false;

public:
	bool bEnable = false;
	float fMaxZ = 2000.0f;
	float fMinZ = -2000.0f;
	float fZ = 0.574f;

private:
	bool bOnce = false;

public:
	WalkableFloorZ() {};

	bool Setup() override
	{
		Initalized = true;

		return Initalized;
	};

	void Destroy() override
	{
		Initalized = false;
	}

	void HandleKeys() override {}

	void DrawMenuItems() override
	{
		ImGui::Checkbox("WalkableFloorZ", &bEnable);
		if (bEnable) {
			ImGui::Text("WalkableFloorZ");
			ImGui::SliderFloat("##WalkableFloorZ", &fZ, fMinZ, fMaxZ);
		}
	}

	void Render(void** args, size_t numArgs) override {}

	void Run(void** args, size_t numArgs) override;
};