#pragma once
#include "Dude.h"
#include "Graphics.h"
#include "Vec2.h"

class Goal
{
public:
	void Bar( Color c, Graphics& gfx);
	void Respawn(const Vec2& pos_in);
	void ProcessConsumption(const Dude& dude);
	void ChangeColor();
	void Draw(Graphics& gfx) const
	{
		gfx.DrawRectDim(int(pos.x), int(pos.y), int(dimension), int(dimension), c);
	}
	bool GetTeleport() const;
private:
	Color c = { 255, 255, 150 };
	Vec2 pos;
	int progress = 0;
	bool teleport = true;
	bool Cchange = true;
	bool StartAdd = false;
	static constexpr float dimension = 20.0f;
};

