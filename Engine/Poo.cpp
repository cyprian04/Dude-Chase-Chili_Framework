#pragma once
#include "Poo.h"
#include "Graphics.h"
#include <assert.h>

void Poo::Init(const Vec2& pos_in, const Vec2& vel_in)
{
	assert(initialized == false);
	pos = pos_in;
	vel = vel_in;
	initialized = true;
}

void Poo::Update(float dt_in)
{
	assert(initialized == true);
	pos += vel * dt_in;  

	const float right = pos.x + width;
	if (pos.x < 0)
	{
		pos.x = 0;
		vel.x = -vel.x;
	}
	else if (right >= float(Graphics::ScreenWidth))
	{
		pos.x = float(Graphics::ScreenWidth - 1) - width;
		vel.x = -vel.x;
	}

	const float bottom = pos.y + height;
	if (pos.y < 0)
	{
		pos.y = 0;
		vel.y = -vel.y;
	}
	else if (bottom >= float(Graphics::ScreenHeight))
	{
		pos.y = float(Graphics::ScreenHeight - 1) - height;
		vel.y = -vel.y;
	}
}

void Poo::ProcessConsumption(const Dude& dude)
{
	assert(initialized == true);
	const float duderight = dude.GetPos().x + dude.GetWidth();
	const float dudebottom = dude.GetPos().y + dude.GetHeight();
	const float pooright = pos.x + width;
	const float poobottom = pos.y + height;

	if (duderight >= pos.x &&
		dude.GetPos().x <= pooright &&
		dudebottom >= pos.y &&
		dude.GetPos().y <= poobottom)
	{
		isEaten = true;
	}
}

void Poo::StopPoo(const Vec2& vel_in)
{
	vel = vel_in;
}

void Poo::Draw(Graphics& gfx) const
{
	assert(initialized == true);
	const int x_in = int(pos.x);
	const int y_in = int(pos.y);

	gfx.PutPixel(14 + x_in, 0 + y_in, 138, 77, 0);
	gfx.PutPixel(7 + x_in, 1 + y_in, 138, 77, 0);
	gfx.PutPixel(13 + x_in, 1 + y_in, 138, 77, 0);
	gfx.PutPixel(20 + x_in, 1 + y_in, 138, 77, 0);
	gfx.PutPixel(6 + x_in, 2 + y_in, 138, 77, 0);
	gfx.PutPixel(13 + x_in, 2 + y_in, 138, 77, 0);
	gfx.PutPixel(20 + x_in, 2 + y_in, 138, 77, 0);
	gfx.PutPixel(6 + x_in, 3 + y_in, 138, 77, 0);
	gfx.PutPixel(6 + x_in, 4 + y_in, 138, 77, 0);
	gfx.PutPixel(14 + x_in, 4 + y_in, 138, 77, 0);
	gfx.PutPixel(21 + x_in, 4 + y_in, 138, 77, 0);
	gfx.PutPixel(7 + x_in, 5 + y_in, 138, 77, 0);
	gfx.PutPixel(13 + x_in, 5 + y_in, 138, 77, 0);
	gfx.PutPixel(21 + x_in, 5 + y_in, 138, 77, 0);
	gfx.PutPixel(7 + x_in, 6 + y_in, 138, 77, 0);
	gfx.PutPixel(20 + x_in, 6 + y_in, 138, 77, 0);
	gfx.PutPixel(6 + x_in, 7 + y_in, 138, 77, 0);
	gfx.PutPixel(14 + x_in, 7 + y_in, 51, 28, 0);
	gfx.PutPixel(15 + x_in, 7 + y_in, 51, 28, 0);
	gfx.PutPixel(20 + x_in, 7 + y_in, 138, 77, 0);
	gfx.PutPixel(12 + x_in, 8 + y_in, 51, 28, 0);
	gfx.PutPixel(13 + x_in, 8 + y_in, 51, 28, 0);
	gfx.PutPixel(14 + x_in, 8 + y_in, 51, 28, 0);
	gfx.PutPixel(7 + x_in, 9 + y_in, 138, 77, 0);
	gfx.PutPixel(11 + x_in, 9 + y_in, 51, 28, 0);
	gfx.PutPixel(12 + x_in, 9 + y_in, 102, 57, 0);
	gfx.PutPixel(13 + x_in, 9 + y_in, 138, 77, 0);
	gfx.PutPixel(14 + x_in, 9 + y_in, 138, 77, 0);
	gfx.PutPixel(15 + x_in, 9 + y_in, 51, 28, 0);
	gfx.PutPixel(21 + x_in, 9 + y_in, 138, 77, 0);
	gfx.PutPixel(10 + x_in, 10 + y_in, 51, 28, 0);
	gfx.PutPixel(11 + x_in, 10 + y_in, 51, 28, 0);
	gfx.PutPixel(12 + x_in, 10 + y_in, 102, 57, 0);
	gfx.PutPixel(13 + x_in, 10 + y_in, 138, 77, 0);
	gfx.PutPixel(14 + x_in, 10 + y_in, 138, 77, 0);
	gfx.PutPixel(15 + x_in, 10 + y_in, 51, 28, 0);
	gfx.PutPixel(20 + x_in, 10 + y_in, 138, 77, 0);
	gfx.PutPixel(9 + x_in, 11 + y_in, 51, 28, 0);
	gfx.PutPixel(10 + x_in, 11 + y_in, 138, 77, 0);
	gfx.PutPixel(11 + x_in, 11 + y_in, 138, 77, 0);
	gfx.PutPixel(12 + x_in, 11 + y_in, 51, 28, 0);
	gfx.PutPixel(13 + x_in, 11 + y_in, 51, 28, 0);
	gfx.PutPixel(14 + x_in, 11 + y_in, 51, 28, 0);
	gfx.PutPixel(15 + x_in, 11 + y_in, 51, 28, 0);
	gfx.PutPixel(16 + x_in, 11 + y_in, 51, 28, 0);
	gfx.PutPixel(9 + x_in, 12 + y_in, 51, 28, 0);
	gfx.PutPixel(10 + x_in, 12 + y_in, 138, 77, 0);
	gfx.PutPixel(11 + x_in, 12 + y_in, 138, 77, 0);
	gfx.PutPixel(12 + x_in, 12 + y_in, 111, 62, 0);
	gfx.PutPixel(13 + x_in, 12 + y_in, 102, 57, 0);
	gfx.PutPixel(14 + x_in, 12 + y_in, 102, 57, 0);
	gfx.PutPixel(15 + x_in, 12 + y_in, 102, 57, 0);
	gfx.PutPixel(16 + x_in, 12 + y_in, 51, 28, 0);
	gfx.PutPixel(9 + x_in, 13 + y_in, 51, 28, 0);
	gfx.PutPixel(10 + x_in, 13 + y_in, 109, 61, 0);
	gfx.PutPixel(11 + x_in, 13 + y_in, 138, 77, 0);
	gfx.PutPixel(12 + x_in, 13 + y_in, 138, 77, 0);
	gfx.PutPixel(13 + x_in, 13 + y_in, 138, 77, 0);
	gfx.PutPixel(14 + x_in, 13 + y_in, 138, 77, 0);
	gfx.PutPixel(15 + x_in, 13 + y_in, 138, 77, 0);
	gfx.PutPixel(16 + x_in, 13 + y_in, 51, 28, 0);
	gfx.PutPixel(5 + x_in, 14 + y_in, 51, 28, 0);
	gfx.PutPixel(7 + x_in, 14 + y_in, 51, 28, 0);
	gfx.PutPixel(8 + x_in, 14 + y_in, 51, 28, 0);
	gfx.PutPixel(9 + x_in, 14 + y_in, 51, 28, 0);
	gfx.PutPixel(10 + x_in, 14 + y_in, 51, 28, 0);
	gfx.PutPixel(11 + x_in, 14 + y_in, 138, 77, 0);
	gfx.PutPixel(12 + x_in, 14 + y_in, 138, 77, 0);
	gfx.PutPixel(13 + x_in, 14 + y_in, 138, 77, 0);
	gfx.PutPixel(14 + x_in, 14 + y_in, 138, 77, 0);
	gfx.PutPixel(15 + x_in, 14 + y_in, 138, 77, 0);
	gfx.PutPixel(16 + x_in, 14 + y_in, 51, 28, 0);
	gfx.PutPixel(4 + x_in, 15 + y_in, 51, 28, 0);
	gfx.PutPixel(5 + x_in, 15 + y_in, 138, 77, 0);
	gfx.PutPixel(6 + x_in, 15 + y_in, 51, 28, 0);
	gfx.PutPixel(7 + x_in, 15 + y_in, 116, 65, 0);
	gfx.PutPixel(8 + x_in, 15 + y_in, 138, 77, 0);
	gfx.PutPixel(9 + x_in, 15 + y_in, 138, 77, 0);
	gfx.PutPixel(10 + x_in, 15 + y_in, 138, 77, 0);
	gfx.PutPixel(11 + x_in, 15 + y_in, 51, 28, 0);
	gfx.PutPixel(12 + x_in, 15 + y_in, 51, 28, 0);
	gfx.PutPixel(13 + x_in, 15 + y_in, 51, 28, 0);
	gfx.PutPixel(14 + x_in, 15 + y_in, 51, 28, 0);
	gfx.PutPixel(15 + x_in, 15 + y_in, 51, 28, 0);
	gfx.PutPixel(16 + x_in, 15 + y_in, 51, 28, 0);
	gfx.PutPixel(17 + x_in, 15 + y_in, 51, 28, 0);
	gfx.PutPixel(18 + x_in, 15 + y_in, 51, 28, 0);
	gfx.PutPixel(1 + x_in, 16 + y_in, 51, 28, 0);
	gfx.PutPixel(2 + x_in, 16 + y_in, 51, 28, 0);
	gfx.PutPixel(3 + x_in, 16 + y_in, 51, 28, 0);
	gfx.PutPixel(4 + x_in, 16 + y_in, 51, 28, 0);
	gfx.PutPixel(5 + x_in, 16 + y_in, 138, 77, 0);
	gfx.PutPixel(6 + x_in, 16 + y_in, 51, 28, 0);
	gfx.PutPixel(7 + x_in, 16 + y_in, 116, 65, 0);
	gfx.PutPixel(8 + x_in, 16 + y_in, 138, 77, 0);
	gfx.PutPixel(9 + x_in, 16 + y_in, 138, 77, 0);
	gfx.PutPixel(10 + x_in, 16 + y_in, 138, 77, 0);
	gfx.PutPixel(11 + x_in, 16 + y_in, 138, 77, 0);
	gfx.PutPixel(12 + x_in, 16 + y_in, 138, 77, 0);
	gfx.PutPixel(13 + x_in, 16 + y_in, 109, 61, 0);
	gfx.PutPixel(14 + x_in, 16 + y_in, 51, 28, 0);
	gfx.PutPixel(15 + x_in, 16 + y_in, 138, 77, 0);
	gfx.PutPixel(16 + x_in, 16 + y_in, 138, 77, 0);
	gfx.PutPixel(17 + x_in, 16 + y_in, 138, 77, 0);
	gfx.PutPixel(18 + x_in, 16 + y_in, 123, 69, 0);
	gfx.PutPixel(19 + x_in, 16 + y_in, 51, 28, 0);
	gfx.PutPixel(0 + x_in, 17 + y_in, 51, 28, 0);
	gfx.PutPixel(1 + x_in, 17 + y_in, 87, 49, 0);
	gfx.PutPixel(2 + x_in, 17 + y_in, 87, 49, 0);
	gfx.PutPixel(3 + x_in, 17 + y_in, 87, 49, 0);
	gfx.PutPixel(4 + x_in, 17 + y_in, 87, 49, 0);
	gfx.PutPixel(5 + x_in, 17 + y_in, 51, 28, 0);
	gfx.PutPixel(6 + x_in, 17 + y_in, 51, 28, 0);
	gfx.PutPixel(7 + x_in, 17 + y_in, 43, 24, 0);
	gfx.PutPixel(8 + x_in, 17 + y_in, 51, 28, 0);
	gfx.PutPixel(9 + x_in, 17 + y_in, 51, 28, 0);
	gfx.PutPixel(10 + x_in, 17 + y_in, 51, 28, 0);
	gfx.PutPixel(11 + x_in, 17 + y_in, 51, 28, 0);
	gfx.PutPixel(12 + x_in, 17 + y_in, 51, 28, 0);
	gfx.PutPixel(13 + x_in, 17 + y_in, 40, 22, 0);
	gfx.PutPixel(14 + x_in, 17 + y_in, 51, 28, 0);
	gfx.PutPixel(15 + x_in, 17 + y_in, 138, 77, 0);
	gfx.PutPixel(16 + x_in, 17 + y_in, 138, 77, 0);
	gfx.PutPixel(17 + x_in, 17 + y_in, 138, 77, 0);
	gfx.PutPixel(18 + x_in, 17 + y_in, 123, 69, 0);
	gfx.PutPixel(19 + x_in, 17 + y_in, 51, 28, 0);
	gfx.PutPixel(0 + x_in, 18 + y_in, 51, 28, 0);
	gfx.PutPixel(1 + x_in, 18 + y_in, 138, 77, 0);
	gfx.PutPixel(2 + x_in, 18 + y_in, 138, 77, 0);
	gfx.PutPixel(3 + x_in, 18 + y_in, 138, 77, 0);
	gfx.PutPixel(4 + x_in, 18 + y_in, 138, 77, 0);
	gfx.PutPixel(5 + x_in, 18 + y_in, 51, 28, 0);
	gfx.PutPixel(6 + x_in, 18 + y_in, 51, 28, 0);
	gfx.PutPixel(7 + x_in, 18 + y_in, 51, 28, 0);
	gfx.PutPixel(8 + x_in, 18 + y_in, 51, 28, 0);
	gfx.PutPixel(9 + x_in, 18 + y_in, 51, 28, 0);
	gfx.PutPixel(10 + x_in, 18 + y_in, 51, 28, 0);
	gfx.PutPixel(11 + x_in, 18 + y_in, 51, 28, 0);
	gfx.PutPixel(12 + x_in, 18 + y_in, 51, 28, 0);
	gfx.PutPixel(13 + x_in, 18 + y_in, 51, 28, 0);
	gfx.PutPixel(14 + x_in, 18 + y_in, 51, 28, 0);
	gfx.PutPixel(15 + x_in, 18 + y_in, 138, 77, 0);
	gfx.PutPixel(16 + x_in, 18 + y_in, 138, 77, 0);
	gfx.PutPixel(17 + x_in, 18 + y_in, 138, 77, 0);
	gfx.PutPixel(18 + x_in, 18 + y_in, 123, 69, 0);
	gfx.PutPixel(19 + x_in, 18 + y_in, 51, 28, 0);
	gfx.PutPixel(20 + x_in, 18 + y_in, 51, 28, 0);
	gfx.PutPixel(21 + x_in, 18 + y_in, 51, 28, 0);
	gfx.PutPixel(22 + x_in, 18 + y_in, 51, 28, 0);
	gfx.PutPixel(0 + x_in, 19 + y_in, 51, 28, 0);
	gfx.PutPixel(1 + x_in, 19 + y_in, 138, 77, 0);
	gfx.PutPixel(2 + x_in, 19 + y_in, 138, 77, 0);
	gfx.PutPixel(3 + x_in, 19 + y_in, 138, 77, 0);
	gfx.PutPixel(4 + x_in, 19 + y_in, 138, 77, 0);
	gfx.PutPixel(5 + x_in, 19 + y_in, 51, 28, 0);
	gfx.PutPixel(6 + x_in, 19 + y_in, 138, 77, 0);
	gfx.PutPixel(7 + x_in, 19 + y_in, 138, 77, 0);
	gfx.PutPixel(8 + x_in, 19 + y_in, 138, 77, 0);
	gfx.PutPixel(9 + x_in, 19 + y_in, 138, 77, 0);
	gfx.PutPixel(10 + x_in, 19 + y_in, 138, 77, 0);
	gfx.PutPixel(11 + x_in, 19 + y_in, 138, 77, 0);
	gfx.PutPixel(12 + x_in, 19 + y_in, 138, 77, 0);
	gfx.PutPixel(13 + x_in, 19 + y_in, 138, 77, 0);
	gfx.PutPixel(14 + x_in, 19 + y_in, 138, 77, 0);
	gfx.PutPixel(15 + x_in, 19 + y_in, 138, 77, 0);
	gfx.PutPixel(16 + x_in, 19 + y_in, 138, 77, 0);
	gfx.PutPixel(17 + x_in, 19 + y_in, 138, 77, 0);
	gfx.PutPixel(18 + x_in, 19 + y_in, 123, 69, 0);
	gfx.PutPixel(19 + x_in, 19 + y_in, 51, 28, 0);
	gfx.PutPixel(20 + x_in, 19 + y_in, 138, 77, 0);
	gfx.PutPixel(21 + x_in, 19 + y_in, 138, 77, 0);
	gfx.PutPixel(22 + x_in, 19 + y_in, 65, 36, 0);
	gfx.PutPixel(23 + x_in, 19 + y_in, 51, 28, 0);
	gfx.PutPixel(1 + x_in, 20 + y_in, 51, 28, 0);
	gfx.PutPixel(2 + x_in, 20 + y_in, 51, 28, 0);
	gfx.PutPixel(3 + x_in, 20 + y_in, 51, 28, 0);
	gfx.PutPixel(4 + x_in, 20 + y_in, 51, 28, 0);
	gfx.PutPixel(5 + x_in, 20 + y_in, 51, 28, 0);
	gfx.PutPixel(6 + x_in, 20 + y_in, 138, 77, 0);
	gfx.PutPixel(7 + x_in, 20 + y_in, 138, 77, 0);
	gfx.PutPixel(8 + x_in, 20 + y_in, 138, 77, 0);
	gfx.PutPixel(9 + x_in, 20 + y_in, 138, 77, 0);
	gfx.PutPixel(10 + x_in, 20 + y_in, 138, 77, 0);
	gfx.PutPixel(11 + x_in, 20 + y_in, 138, 77, 0);
	gfx.PutPixel(12 + x_in, 20 + y_in, 138, 77, 0);
	gfx.PutPixel(13 + x_in, 20 + y_in, 138, 77, 0);
	gfx.PutPixel(14 + x_in, 20 + y_in, 138, 77, 0);
	gfx.PutPixel(15 + x_in, 20 + y_in, 138, 77, 0);
	gfx.PutPixel(16 + x_in, 20 + y_in, 138, 77, 0);
	gfx.PutPixel(17 + x_in, 20 + y_in, 138, 77, 0);
	gfx.PutPixel(18 + x_in, 20 + y_in, 123, 69, 0);
	gfx.PutPixel(19 + x_in, 20 + y_in, 51, 28, 0);
	gfx.PutPixel(20 + x_in, 20 + y_in, 138, 77, 0);
	gfx.PutPixel(21 + x_in, 20 + y_in, 138, 77, 0);
	gfx.PutPixel(22 + x_in, 20 + y_in, 65, 36, 0);
	gfx.PutPixel(23 + x_in, 20 + y_in, 51, 28, 0);
	gfx.PutPixel(0 + x_in, 21 + y_in, 51, 28, 0);
	gfx.PutPixel(1 + x_in, 21 + y_in, 138, 77, 0);
	gfx.PutPixel(2 + x_in, 21 + y_in, 138, 77, 0);
	gfx.PutPixel(3 + x_in, 21 + y_in, 138, 77, 0);
	gfx.PutPixel(4 + x_in, 21 + y_in, 138, 77, 0);
	gfx.PutPixel(5 + x_in, 21 + y_in, 138, 77, 0);
	gfx.PutPixel(6 + x_in, 21 + y_in, 51, 28, 0);
	gfx.PutPixel(7 + x_in, 21 + y_in, 51, 28, 0);
	gfx.PutPixel(8 + x_in, 21 + y_in, 51, 28, 0);
	gfx.PutPixel(9 + x_in, 21 + y_in, 51, 28, 0);
	gfx.PutPixel(10 + x_in, 21 + y_in, 51, 28, 0);
	gfx.PutPixel(11 + x_in, 21 + y_in, 51, 28, 0);
	gfx.PutPixel(12 + x_in, 21 + y_in, 51, 28, 0);
	gfx.PutPixel(13 + x_in, 21 + y_in, 51, 28, 0);
	gfx.PutPixel(14 + x_in, 21 + y_in, 51, 28, 0);
	gfx.PutPixel(15 + x_in, 21 + y_in, 51, 28, 0);
	gfx.PutPixel(16 + x_in, 21 + y_in, 51, 28, 0);
	gfx.PutPixel(17 + x_in, 21 + y_in, 51, 28, 0);
	gfx.PutPixel(18 + x_in, 21 + y_in, 51, 28, 0);
	gfx.PutPixel(20 + x_in, 21 + y_in, 51, 28, 0);
	gfx.PutPixel(21 + x_in, 21 + y_in, 51, 28, 0);
	gfx.PutPixel(22 + x_in, 21 + y_in, 51, 28, 0);
	gfx.PutPixel(0 + x_in, 22 + y_in, 51, 28, 0);
	gfx.PutPixel(1 + x_in, 22 + y_in, 65, 36, 0);
	gfx.PutPixel(2 + x_in, 22 + y_in, 65, 36, 0);
	gfx.PutPixel(3 + x_in, 22 + y_in, 65, 36, 0);
	gfx.PutPixel(4 + x_in, 22 + y_in, 65, 36, 0);
	gfx.PutPixel(5 + x_in, 22 + y_in, 65, 36, 0);
	gfx.PutPixel(6 + x_in, 22 + y_in, 51, 28, 0);
	gfx.PutPixel(1 + x_in, 23 + y_in, 51, 28, 0);
	gfx.PutPixel(2 + x_in, 23 + y_in, 51, 28, 0);
	gfx.PutPixel(3 + x_in, 23 + y_in, 51, 28, 0);
	gfx.PutPixel(4 + x_in, 23 + y_in, 51, 28, 0);
	gfx.PutPixel(5 + x_in, 23 + y_in, 51, 28, 0);
	gfx.PutPixel(6 + x_in, 23 + y_in, 51, 28, 0);
}

bool Poo::GetIsEaten() const
{
	assert(initialized == true);
	return isEaten;
}
