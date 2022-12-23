#pragma once
#include "Dude.h"
#include "Graphics.h"

class Goal
{
public:
	void Bar( Color c, Graphics& gfx);
	void Respawn(float x_in, float y_in);
	void ProcessConsumption(const Dude& dude);
	void ChangeColor();
	void Draw(Graphics& gfx) const
	{
		gfx.DrawRectDim(int(x), int(y), int(dimension), int(dimension), c);
	}
	bool GetTeleport() const;
private:
	Color c = { 255, 255, 150 };
	float x;
	float y;
	int progress = 0;
	bool teleport = true;
	bool Cchange = true;
	bool StartAdd = false;
	static constexpr float dimension = 20.0f;
};

