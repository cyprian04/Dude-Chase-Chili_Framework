#pragma once
#include "Dude.h"
#include "Graphics.h"

class Goal
{
public:
	void Bar( Color c, Graphics& gfx);
	void Respawn(int x_in, int y_in);
	void ProcessConsumption(const Dude& dude);
	void ChangeColor();
	void Draw(Graphics& gfx) const
	{
		gfx.DrawRectDim(x, y, dimension, dimension, c);
	}
	bool GetTeleport() const;
	bool SetTeleportFalse();
private:
	Color c = { 255, 255, 150};
	int x;
	int y;
	int progress = 0;
	bool teleport = true;
	bool Cchange = true;
	bool StartAdd = false;
	static constexpr int dimension = 20;
};

