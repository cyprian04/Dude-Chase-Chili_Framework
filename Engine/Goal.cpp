
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

void Goal::Respawn(int x_in, int y_in)
{
	x = x_in;
	y = y_in;
	teleport = false;
}

void Goal::ProcessConsumption(const Dude& dude)
{
	const int duderight = dude.GetX() + dude.GetWidth();
	const int dudebottom = dude.GetY() + dude.GetHeight();
	const int pooright = x + dimension;
	const int poobottom = y + dimension;

	if (duderight >= x &&
		dude.GetX() <= pooright &&
		dudebottom >= y &&
		dude.GetY() <= poobottom)
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
