
#pragma once
#include "Goal.h"

void Goal::Bar( Color c, Graphics& gfx)
{
	if (teleport && StartAdd)
	{
		progress += 10;
	}
	for (int i = 0; i < progress; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			gfx.PutPixel(i, j, c);
		}
	}
}

void Goal::Respawn(const Vec2& pos_in)
{
	pos = pos_in;
	teleport = false;
}

void Goal::ProcessConsumption(const Dude& dude)
{
	const float duderight = dude.GetPos().x + dude.GetWidth();
	const float dudebottom = dude.GetPos().y + dude.GetHeight();
	const float pooright = pos.x + dimension;
	const float poobottom = pos.y + dimension;

	if (duderight >= pos.x &&
		dude.GetPos().x <= pooright &&
		dudebottom >= pos.y &&
		dude.GetPos().y <= poobottom)
	{
		teleport = true;
		StartAdd = true;
	}
}

void Goal::ChangeColor()
{
	if (Cchange)
	{
		c = Color(c.GetR() - 1, c.GetG() - 1, c.GetB());
		if (c.GetR() == 0)
		{
			Cchange = false;
		}
	}
	if (!Cchange)
	{
		c = Color(c.GetR() + 1, c.GetG() + 1, c.GetB());
		if (c.GetR() == 255)
		{
			Cchange = true;
		}
	}
}

bool Goal::GetTeleport() const
{
	return teleport;
}
