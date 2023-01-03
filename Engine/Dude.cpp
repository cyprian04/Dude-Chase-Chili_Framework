#include "Dude.h"
#include "Graphics.h"

void Dude::ClampToScreen()
{
	const float right = pos.x + width;
	if (pos.x < 0)
	{
		pos.x = 0;
	}
	else if (right >= float(Graphics::ScreenWidth))
	{
		pos.x = float(Graphics::ScreenWidth - 1) - width;
	}

	const float bottom = pos.y + height;
	if (pos.y < 0)
	{
		pos.y = 0;
	}
	else if (bottom >= float(Graphics::ScreenHeight))
	{
		pos.y = float((Graphics::ScreenHeight - 1)) - height;
	}
}

void Dude::Draw(Graphics& gfx) const
{
	const int x_in = int(pos.x);
	const int y_in = int(pos.y);

	gfx.PutPixel(7 + x_in, 0 + y_in, 0, 0, 0);
	gfx.PutPixel(8 + x_in, 0 + y_in, 0, 0, 0);
	gfx.PutPixel(9 + x_in, 0 + y_in, 0, 0, 0);
	gfx.PutPixel(10 + x_in, 0 + y_in, 0, 0, 0);
	gfx.PutPixel(11 + x_in, 0 + y_in, 0, 0, 0);
	gfx.PutPixel(12 + x_in, 0 + y_in, 0, 0, 0);
	gfx.PutPixel(5 + x_in, 1 + y_in, 0, 0, 0);
	gfx.PutPixel(6 + x_in, 1 + y_in, 0, 0, 0);
	gfx.PutPixel(7 + x_in, 1 + y_in, 254, 221, 88);
	gfx.PutPixel(8 + x_in, 1 + y_in, 254, 221, 88);
	gfx.PutPixel(9 + x_in, 1 + y_in, 254, 221, 88);
	gfx.PutPixel(10 + x_in, 1 + y_in, 254, 221, 88);
	gfx.PutPixel(11 + x_in, 1 + y_in, 254, 221, 88);
	gfx.PutPixel(12 + x_in, 1 + y_in, 254, 221, 88);
	gfx.PutPixel(13 + x_in, 1 + y_in, 0, 0, 0);
	gfx.PutPixel(14 + x_in, 1 + y_in, 0, 0, 0);
	gfx.PutPixel(3 + x_in, 2 + y_in, 0, 0, 0);
	gfx.PutPixel(4 + x_in, 2 + y_in, 0, 0, 0);
	gfx.PutPixel(5 + x_in, 2 + y_in, 254, 221, 88);
	gfx.PutPixel(6 + x_in, 2 + y_in, 254, 221, 88);
	gfx.PutPixel(7 + x_in, 2 + y_in, 254, 221, 88);
	gfx.PutPixel(8 + x_in, 2 + y_in, 254, 221, 88);
	gfx.PutPixel(9 + x_in, 2 + y_in, 254, 221, 88);
	gfx.PutPixel(10 + x_in, 2 + y_in, 254, 221, 88);
	gfx.PutPixel(11 + x_in, 2 + y_in, 254, 221, 88);
	gfx.PutPixel(12 + x_in, 2 + y_in, 254, 221, 88);
	gfx.PutPixel(13 + x_in, 2 + y_in, 254, 221, 88);
	gfx.PutPixel(14 + x_in, 2 + y_in, 254, 221, 88);
	gfx.PutPixel(15 + x_in, 2 + y_in, 0, 0, 0);
	gfx.PutPixel(16 + x_in, 2 + y_in, 0, 0, 0);
	gfx.PutPixel(2 + x_in, 3 + y_in, 0, 0, 0);
	gfx.PutPixel(3 + x_in, 3 + y_in, 254, 221, 88);
	gfx.PutPixel(4 + x_in, 3 + y_in, 254, 221, 88);
	gfx.PutPixel(5 + x_in, 3 + y_in, 254, 221, 88);
	gfx.PutPixel(6 + x_in, 3 + y_in, 254, 221, 88);
	gfx.PutPixel(7 + x_in, 3 + y_in, 254, 221, 88);
	gfx.PutPixel(8 + x_in, 3 + y_in, 254, 221, 88);
	gfx.PutPixel(9 + x_in, 3 + y_in, 254, 221, 88);
	gfx.PutPixel(10 + x_in, 3 + y_in, 254, 221, 88);
	gfx.PutPixel(11 + x_in, 3 + y_in, 254, 221, 88);
	gfx.PutPixel(12 + x_in, 3 + y_in, 254, 221, 88);
	gfx.PutPixel(13 + x_in, 3 + y_in, 254, 221, 88);
	gfx.PutPixel(14 + x_in, 3 + y_in, 254, 221, 88);
	gfx.PutPixel(15 + x_in, 3 + y_in, 254, 221, 88);
	gfx.PutPixel(16 + x_in, 3 + y_in, 254, 221, 88);
	gfx.PutPixel(17 + x_in, 3 + y_in, 0, 0, 0);
	gfx.PutPixel(2 + x_in, 4 + y_in, 0, 0, 0);
	gfx.PutPixel(3 + x_in, 4 + y_in, 254, 221, 88);
	gfx.PutPixel(4 + x_in, 4 + y_in, 254, 221, 88);
	gfx.PutPixel(5 + x_in, 4 + y_in, 254, 221, 88);
	gfx.PutPixel(6 + x_in, 4 + y_in, 254, 221, 88);
	gfx.PutPixel(7 + x_in, 4 + y_in, 254, 221, 88);
	gfx.PutPixel(8 + x_in, 4 + y_in, 254, 221, 88);
	gfx.PutPixel(9 + x_in, 4 + y_in, 254, 221, 88);
	gfx.PutPixel(10 + x_in, 4 + y_in, 254, 221, 88);
	gfx.PutPixel(11 + x_in, 4 + y_in, 254, 221, 88);
	gfx.PutPixel(12 + x_in, 4 + y_in, 254, 221, 88);
	gfx.PutPixel(13 + x_in, 4 + y_in, 254, 221, 88);
	gfx.PutPixel(14 + x_in, 4 + y_in, 254, 221, 88);
	gfx.PutPixel(15 + x_in, 4 + y_in, 254, 221, 88);
	gfx.PutPixel(16 + x_in, 4 + y_in, 254, 221, 88);
	gfx.PutPixel(17 + x_in, 4 + y_in, 0, 0, 0);
	gfx.PutPixel(1 + x_in, 5 + y_in, 0, 0, 0);
	gfx.PutPixel(2 + x_in, 5 + y_in, 254, 221, 88);
	gfx.PutPixel(3 + x_in, 5 + y_in, 0, 0, 0);
	gfx.PutPixel(4 + x_in, 5 + y_in, 0, 0, 0);
	gfx.PutPixel(5 + x_in, 5 + y_in, 254, 221, 88);
	gfx.PutPixel(6 + x_in, 5 + y_in, 254, 221, 88);
	gfx.PutPixel(7 + x_in, 5 + y_in, 254, 221, 88);
	gfx.PutPixel(8 + x_in, 5 + y_in, 254, 221, 88);
	gfx.PutPixel(9 + x_in, 5 + y_in, 254, 221, 88);
	gfx.PutPixel(10 + x_in, 5 + y_in, 254, 221, 88);
	gfx.PutPixel(11 + x_in, 5 + y_in, 0, 0, 0);
	gfx.PutPixel(12 + x_in, 5 + y_in, 0, 0, 0);
	gfx.PutPixel(13 + x_in, 5 + y_in, 0, 0, 0);
	gfx.PutPixel(14 + x_in, 5 + y_in, 0, 0, 0);
	gfx.PutPixel(15 + x_in, 5 + y_in, 254, 221, 88);
	gfx.PutPixel(16 + x_in, 5 + y_in, 254, 221, 88);
	gfx.PutPixel(17 + x_in, 5 + y_in, 254, 221, 88);
	gfx.PutPixel(18 + x_in, 5 + y_in, 0, 0, 0);
	gfx.PutPixel(1 + x_in, 6 + y_in, 0, 0, 0);
	gfx.PutPixel(2 + x_in, 6 + y_in, 0, 0, 0);
	gfx.PutPixel(3 + x_in, 6 + y_in, 255, 255, 255);
	gfx.PutPixel(4 + x_in, 6 + y_in, 0, 0, 0);
	gfx.PutPixel(5 + x_in, 6 + y_in, 0, 0, 0);
	gfx.PutPixel(6 + x_in, 6 + y_in, 254, 221, 88);
	gfx.PutPixel(7 + x_in, 6 + y_in, 254, 221, 88);
	gfx.PutPixel(8 + x_in, 6 + y_in, 254, 221, 88);
	gfx.PutPixel(9 + x_in, 6 + y_in, 254, 221, 88);
	gfx.PutPixel(10 + x_in, 6 + y_in, 0, 0, 0);
	gfx.PutPixel(11 + x_in, 6 + y_in, 255, 255, 255);
	gfx.PutPixel(12 + x_in, 6 + y_in, 255, 255, 255);
	gfx.PutPixel(13 + x_in, 6 + y_in, 0, 0, 0);
	gfx.PutPixel(14 + x_in, 6 + y_in, 0, 0, 0);
	gfx.PutPixel(15 + x_in, 6 + y_in, 0, 0, 0);
	gfx.PutPixel(16 + x_in, 6 + y_in, 254, 221, 88);
	gfx.PutPixel(17 + x_in, 6 + y_in, 254, 221, 88);
	gfx.PutPixel(18 + x_in, 6 + y_in, 0, 0, 0);
	gfx.PutPixel(0 + x_in, 7 + y_in, 0, 0, 0);
	gfx.PutPixel(1 + x_in, 7 + y_in, 0, 0, 0);
	gfx.PutPixel(2 + x_in, 7 + y_in, 255, 255, 255);
	gfx.PutPixel(3 + x_in, 7 + y_in, 255, 255, 255);
	gfx.PutPixel(4 + x_in, 7 + y_in, 0, 0, 0);
	gfx.PutPixel(5 + x_in, 7 + y_in, 0, 0, 0);
	gfx.PutPixel(6 + x_in, 7 + y_in, 254, 221, 88);
	gfx.PutPixel(7 + x_in, 7 + y_in, 254, 221, 88);
	gfx.PutPixel(8 + x_in, 7 + y_in, 254, 221, 88);
	gfx.PutPixel(9 + x_in, 7 + y_in, 254, 221, 88);
	gfx.PutPixel(10 + x_in, 7 + y_in, 0, 0, 0);
	gfx.PutPixel(11 + x_in, 7 + y_in, 255, 255, 255);
	gfx.PutPixel(12 + x_in, 7 + y_in, 255, 255, 255);
	gfx.PutPixel(13 + x_in, 7 + y_in, 0, 0, 0);
	gfx.PutPixel(14 + x_in, 7 + y_in, 0, 0, 0);
	gfx.PutPixel(15 + x_in, 7 + y_in, 0, 0, 0);
	gfx.PutPixel(16 + x_in, 7 + y_in, 254, 221, 88);
	gfx.PutPixel(17 + x_in, 7 + y_in, 254, 221, 88);
	gfx.PutPixel(18 + x_in, 7 + y_in, 254, 221, 88);
	gfx.PutPixel(19 + x_in, 7 + y_in, 0, 0, 0);
	gfx.PutPixel(0 + x_in, 8 + y_in, 0, 0, 0);
	gfx.PutPixel(1 + x_in, 8 + y_in, 0, 0, 0);
	gfx.PutPixel(2 + x_in, 8 + y_in, 255, 255, 255);
	gfx.PutPixel(3 + x_in, 8 + y_in, 255, 255, 255);
	gfx.PutPixel(4 + x_in, 8 + y_in, 255, 255, 255);
	gfx.PutPixel(5 + x_in, 8 + y_in, 0, 0, 0);
	gfx.PutPixel(6 + x_in, 8 + y_in, 254, 221, 88);
	gfx.PutPixel(7 + x_in, 8 + y_in, 254, 221, 88);
	gfx.PutPixel(8 + x_in, 8 + y_in, 254, 221, 88);
	gfx.PutPixel(9 + x_in, 8 + y_in, 254, 221, 88);
	gfx.PutPixel(10 + x_in, 8 + y_in, 0, 0, 0);
	gfx.PutPixel(11 + x_in, 8 + y_in, 255, 255, 255);
	gfx.PutPixel(12 + x_in, 8 + y_in, 255, 255, 255);
	gfx.PutPixel(13 + x_in, 8 + y_in, 255, 255, 255);
	gfx.PutPixel(14 + x_in, 8 + y_in, 255, 255, 255);
	gfx.PutPixel(15 + x_in, 8 + y_in, 0, 0, 0);
	gfx.PutPixel(16 + x_in, 8 + y_in, 254, 221, 88);
	gfx.PutPixel(17 + x_in, 8 + y_in, 254, 221, 88);
	gfx.PutPixel(18 + x_in, 8 + y_in, 254, 221, 88);
	gfx.PutPixel(19 + x_in, 8 + y_in, 0, 0, 0);
	gfx.PutPixel(0 + x_in, 9 + y_in, 0, 0, 0);
	gfx.PutPixel(1 + x_in, 9 + y_in, 254, 221, 88);
	gfx.PutPixel(2 + x_in, 9 + y_in, 0, 0, 0);
	gfx.PutPixel(3 + x_in, 9 + y_in, 0, 0, 0);
	gfx.PutPixel(4 + x_in, 9 + y_in, 0, 0, 0);
	gfx.PutPixel(5 + x_in, 9 + y_in, 0, 0, 0);
	gfx.PutPixel(6 + x_in, 9 + y_in, 254, 221, 88);
	gfx.PutPixel(7 + x_in, 9 + y_in, 254, 221, 88);
	gfx.PutPixel(8 + x_in, 9 + y_in, 254, 221, 88);
	gfx.PutPixel(9 + x_in, 9 + y_in, 254, 221, 88);
	gfx.PutPixel(10 + x_in, 9 + y_in, 254, 221, 88);
	gfx.PutPixel(11 + x_in, 9 + y_in, 0, 0, 0);
	gfx.PutPixel(12 + x_in, 9 + y_in, 0, 0, 0);
	gfx.PutPixel(13 + x_in, 9 + y_in, 0, 0, 0);
	gfx.PutPixel(14 + x_in, 9 + y_in, 0, 0, 0);
	gfx.PutPixel(15 + x_in, 9 + y_in, 254, 221, 88);
	gfx.PutPixel(16 + x_in, 9 + y_in, 254, 221, 88);
	gfx.PutPixel(17 + x_in, 9 + y_in, 254, 221, 88);
	gfx.PutPixel(18 + x_in, 9 + y_in, 254, 221, 88);
	gfx.PutPixel(19 + x_in, 9 + y_in, 0, 0, 0);
	gfx.PutPixel(0 + x_in, 10 + y_in, 0, 0, 0);
	gfx.PutPixel(1 + x_in, 10 + y_in, 254, 221, 88);
	gfx.PutPixel(2 + x_in, 10 + y_in, 254, 221, 88);
	gfx.PutPixel(3 + x_in, 10 + y_in, 254, 221, 88);
	gfx.PutPixel(4 + x_in, 10 + y_in, 254, 221, 88);
	gfx.PutPixel(5 + x_in, 10 + y_in, 254, 221, 88);
	gfx.PutPixel(6 + x_in, 10 + y_in, 254, 221, 88);
	gfx.PutPixel(7 + x_in, 10 + y_in, 254, 221, 88);
	gfx.PutPixel(8 + x_in, 10 + y_in, 254, 221, 88);
	gfx.PutPixel(9 + x_in, 10 + y_in, 254, 221, 88);
	gfx.PutPixel(10 + x_in, 10 + y_in, 254, 221, 88);
	gfx.PutPixel(11 + x_in, 10 + y_in, 254, 221, 88);
	gfx.PutPixel(12 + x_in, 10 + y_in, 254, 221, 88);
	gfx.PutPixel(13 + x_in, 10 + y_in, 254, 221, 88);
	gfx.PutPixel(14 + x_in, 10 + y_in, 254, 221, 88);
	gfx.PutPixel(15 + x_in, 10 + y_in, 254, 221, 88);
	gfx.PutPixel(16 + x_in, 10 + y_in, 254, 221, 88);
	gfx.PutPixel(17 + x_in, 10 + y_in, 254, 221, 88);
	gfx.PutPixel(18 + x_in, 10 + y_in, 254, 221, 88);
	gfx.PutPixel(19 + x_in, 10 + y_in, 0, 0, 0);
	gfx.PutPixel(0 + x_in, 11 + y_in, 0, 0, 0);
	gfx.PutPixel(1 + x_in, 11 + y_in, 254, 221, 88);
	gfx.PutPixel(2 + x_in, 11 + y_in, 254, 221, 88);
	gfx.PutPixel(3 + x_in, 11 + y_in, 254, 221, 88);
	gfx.PutPixel(4 + x_in, 11 + y_in, 254, 221, 88);
	gfx.PutPixel(5 + x_in, 11 + y_in, 254, 221, 88);
	gfx.PutPixel(6 + x_in, 11 + y_in, 254, 221, 88);
	gfx.PutPixel(7 + x_in, 11 + y_in, 20, 14, 18);
	gfx.PutPixel(8 + x_in, 11 + y_in, 18, 11, 14);
	gfx.PutPixel(9 + x_in, 11 + y_in, 18, 12, 14);
	gfx.PutPixel(10 + x_in, 11 + y_in, 18, 12, 14);
	gfx.PutPixel(11 + x_in, 11 + y_in, 21, 13, 16);
	gfx.PutPixel(12 + x_in, 11 + y_in, 24, 11, 15);
	gfx.PutPixel(13 + x_in, 11 + y_in, 0, 0, 0);
	gfx.PutPixel(14 + x_in, 11 + y_in, 254, 221, 88);
	gfx.PutPixel(15 + x_in, 11 + y_in, 254, 221, 88);
	gfx.PutPixel(16 + x_in, 11 + y_in, 254, 221, 88);
	gfx.PutPixel(17 + x_in, 11 + y_in, 254, 221, 88);
	gfx.PutPixel(18 + x_in, 11 + y_in, 254, 221, 88);
	gfx.PutPixel(19 + x_in, 11 + y_in, 0, 0, 0);
	gfx.PutPixel(0 + x_in, 12 + y_in, 0, 0, 0);
	gfx.PutPixel(1 + x_in, 12 + y_in, 254, 221, 88);
	gfx.PutPixel(2 + x_in, 12 + y_in, 254, 221, 88);
	gfx.PutPixel(3 + x_in, 12 + y_in, 254, 221, 88);
	gfx.PutPixel(4 + x_in, 12 + y_in, 254, 221, 88);
	gfx.PutPixel(5 + x_in, 12 + y_in, 254, 221, 88);
	gfx.PutPixel(6 + x_in, 12 + y_in, 23, 9, 23);
	gfx.PutPixel(7 + x_in, 12 + y_in, 135, 26, 68);
	gfx.PutPixel(8 + x_in, 12 + y_in, 135, 26, 68);
	gfx.PutPixel(9 + x_in, 12 + y_in, 135, 26, 68);
	gfx.PutPixel(10 + x_in, 12 + y_in, 135, 26, 68);
	gfx.PutPixel(11 + x_in, 12 + y_in, 135, 26, 68);
	gfx.PutPixel(12 + x_in, 12 + y_in, 135, 26, 68);
	gfx.PutPixel(13 + x_in, 12 + y_in, 135, 26, 68);
	gfx.PutPixel(14 + x_in, 12 + y_in, 0, 0, 0);
	gfx.PutPixel(15 + x_in, 12 + y_in, 254, 221, 88);
	gfx.PutPixel(16 + x_in, 12 + y_in, 254, 221, 88);
	gfx.PutPixel(17 + x_in, 12 + y_in, 254, 221, 88);
	gfx.PutPixel(18 + x_in, 12 + y_in, 254, 221, 88);
	gfx.PutPixel(19 + x_in, 12 + y_in, 0, 0, 0);
	gfx.PutPixel(1 + x_in, 13 + y_in, 0, 0, 0);
	gfx.PutPixel(2 + x_in, 13 + y_in, 254, 221, 88);
	gfx.PutPixel(3 + x_in, 13 + y_in, 254, 221, 88);
	gfx.PutPixel(4 + x_in, 13 + y_in, 254, 221, 88);
	gfx.PutPixel(5 + x_in, 13 + y_in, 0, 0, 0);
	gfx.PutPixel(6 + x_in, 13 + y_in, 135, 26, 68);
	gfx.PutPixel(7 + x_in, 13 + y_in, 135, 26, 68);
	gfx.PutPixel(8 + x_in, 13 + y_in, 135, 26, 68);
	gfx.PutPixel(9 + x_in, 13 + y_in, 135, 26, 68);
	gfx.PutPixel(10 + x_in, 13 + y_in, 135, 26, 68);
	gfx.PutPixel(11 + x_in, 13 + y_in, 135, 26, 68);
	gfx.PutPixel(12 + x_in, 13 + y_in, 135, 26, 68);
	gfx.PutPixel(13 + x_in, 13 + y_in, 135, 26, 68);
	gfx.PutPixel(14 + x_in, 13 + y_in, 135, 26, 68);
	gfx.PutPixel(15 + x_in, 13 + y_in, 0, 0, 0);
	gfx.PutPixel(16 + x_in, 13 + y_in, 254, 221, 88);
	gfx.PutPixel(17 + x_in, 13 + y_in, 254, 221, 88);
	gfx.PutPixel(18 + x_in, 13 + y_in, 0, 0, 0);
	gfx.PutPixel(1 + x_in, 14 + y_in, 0, 0, 0);
	gfx.PutPixel(2 + x_in, 14 + y_in, 254, 221, 88);
	gfx.PutPixel(3 + x_in, 14 + y_in, 254, 221, 88);
	gfx.PutPixel(4 + x_in, 14 + y_in, 0, 0, 0);
	gfx.PutPixel(5 + x_in, 14 + y_in, 135, 26, 68);
	gfx.PutPixel(6 + x_in, 14 + y_in, 135, 26, 68);
	gfx.PutPixel(7 + x_in, 14 + y_in, 135, 26, 68);
	gfx.PutPixel(8 + x_in, 14 + y_in, 135, 26, 68);
	gfx.PutPixel(9 + x_in, 14 + y_in, 251, 192, 224);
	gfx.PutPixel(10 + x_in, 14 + y_in, 251, 192, 224);
	gfx.PutPixel(11 + x_in, 14 + y_in, 251, 192, 224);
	gfx.PutPixel(12 + x_in, 14 + y_in, 251, 192, 224);
	gfx.PutPixel(13 + x_in, 14 + y_in, 135, 26, 68);
	gfx.PutPixel(14 + x_in, 14 + y_in, 135, 26, 68);
	gfx.PutPixel(15 + x_in, 14 + y_in, 0, 0, 0);
	gfx.PutPixel(16 + x_in, 14 + y_in, 254, 221, 88);
	gfx.PutPixel(17 + x_in, 14 + y_in, 254, 221, 88);
	gfx.PutPixel(18 + x_in, 14 + y_in, 0, 0, 0);
	gfx.PutPixel(2 + x_in, 15 + y_in, 0, 0, 0);
	gfx.PutPixel(3 + x_in, 15 + y_in, 254, 221, 88);
	gfx.PutPixel(4 + x_in, 15 + y_in, 0, 0, 0);
	gfx.PutPixel(5 + x_in, 15 + y_in, 135, 26, 68);
	gfx.PutPixel(6 + x_in, 15 + y_in, 135, 26, 68);
	gfx.PutPixel(7 + x_in, 15 + y_in, 135, 26, 68);
	gfx.PutPixel(8 + x_in, 15 + y_in, 251, 192, 224);
	gfx.PutPixel(9 + x_in, 15 + y_in, 251, 192, 224);
	gfx.PutPixel(10 + x_in, 15 + y_in, 251, 192, 224);
	gfx.PutPixel(11 + x_in, 15 + y_in, 251, 192, 224);
	gfx.PutPixel(12 + x_in, 15 + y_in, 251, 192, 224);
	gfx.PutPixel(13 + x_in, 15 + y_in, 251, 192, 224);
	gfx.PutPixel(14 + x_in, 15 + y_in, 135, 26, 68);
	gfx.PutPixel(15 + x_in, 15 + y_in, 0, 0, 0);
	gfx.PutPixel(16 + x_in, 15 + y_in, 254, 221, 88);
	gfx.PutPixel(17 + x_in, 15 + y_in, 0, 0, 0);
	gfx.PutPixel(2 + x_in, 16 + y_in, 0, 0, 0);
	gfx.PutPixel(3 + x_in, 16 + y_in, 254, 221, 88);
	gfx.PutPixel(4 + x_in, 16 + y_in, 0, 0, 0);
	gfx.PutPixel(5 + x_in, 16 + y_in, 135, 26, 68);
	gfx.PutPixel(6 + x_in, 16 + y_in, 135, 26, 68);
	gfx.PutPixel(7 + x_in, 16 + y_in, 135, 26, 68);
	gfx.PutPixel(8 + x_in, 16 + y_in, 251, 192, 224);
	gfx.PutPixel(9 + x_in, 16 + y_in, 251, 192, 224);
	gfx.PutPixel(10 + x_in, 16 + y_in, 251, 192, 224);
	gfx.PutPixel(11 + x_in, 16 + y_in, 251, 192, 224);
	gfx.PutPixel(12 + x_in, 16 + y_in, 251, 192, 224);
	gfx.PutPixel(13 + x_in, 16 + y_in, 251, 192, 224);
	gfx.PutPixel(14 + x_in, 16 + y_in, 135, 26, 68);
	gfx.PutPixel(15 + x_in, 16 + y_in, 0, 0, 0);
	gfx.PutPixel(16 + x_in, 16 + y_in, 254, 221, 88);
	gfx.PutPixel(17 + x_in, 16 + y_in, 0, 0, 0);
	gfx.PutPixel(3 + x_in, 17 + y_in, 0, 0, 0);
	gfx.PutPixel(4 + x_in, 17 + y_in, 0, 0, 0);
	gfx.PutPixel(5 + x_in, 17 + y_in, 0, 0, 0);
	gfx.PutPixel(6 + x_in, 17 + y_in, 0, 0, 0);
	gfx.PutPixel(7 + x_in, 17 + y_in, 0, 0, 0);
	gfx.PutPixel(8 + x_in, 17 + y_in, 0, 0, 0);
	gfx.PutPixel(9 + x_in, 17 + y_in, 0, 0, 0);
	gfx.PutPixel(10 + x_in, 17 + y_in, 0, 0, 0);
	gfx.PutPixel(11 + x_in, 17 + y_in, 0, 0, 0);
	gfx.PutPixel(12 + x_in, 17 + y_in, 0, 0, 0);
	gfx.PutPixel(13 + x_in, 17 + y_in, 0, 0, 0);
	gfx.PutPixel(14 + x_in, 17 + y_in, 0, 0, 0);
	gfx.PutPixel(15 + x_in, 17 + y_in, 0, 0, 0);
	gfx.PutPixel(16 + x_in, 17 + y_in, 0, 0, 0);
	gfx.PutPixel(5 + x_in, 18 + y_in, 0, 0, 0);
	gfx.PutPixel(6 + x_in, 18 + y_in, 0, 0, 0);
	gfx.PutPixel(7 + x_in, 18 + y_in, 254, 221, 88);
	gfx.PutPixel(8 + x_in, 18 + y_in, 254, 221, 88);
	gfx.PutPixel(9 + x_in, 18 + y_in, 254, 221, 88);
	gfx.PutPixel(10 + x_in, 18 + y_in, 254, 221, 88);
	gfx.PutPixel(11 + x_in, 18 + y_in, 254, 221, 88);
	gfx.PutPixel(12 + x_in, 18 + y_in, 254, 221, 88);
	gfx.PutPixel(13 + x_in, 18 + y_in, 0, 0, 0);
	gfx.PutPixel(14 + x_in, 18 + y_in, 0, 0, 0);
	gfx.PutPixel(7 + x_in, 19 + y_in, 0, 0, 0);
	gfx.PutPixel(8 + x_in, 19 + y_in, 0, 0, 0);
	gfx.PutPixel(9 + x_in, 19 + y_in, 0, 0, 0);
	gfx.PutPixel(10 + x_in, 19 + y_in, 0, 0, 0);
	gfx.PutPixel(11 + x_in, 19 + y_in, 0, 0, 0);
	gfx.PutPixel(12 + x_in, 19 + y_in, 0, 0, 0);
}

void Dude::Update(const Keyboard& kbd, float dt_in)
{
	if (!isStopped)
	{
		if (kbd.KeyIsPressed(VK_RIGHT))
		{
			pos.x += speed* dt_in; 
		}
		if (kbd.KeyIsPressed(VK_LEFT))
		{
			pos.x -= speed * dt_in;
		}
		if (kbd.KeyIsPressed(VK_DOWN))
		{
			pos.y += speed * dt_in;
		}
		if (kbd.KeyIsPressed(VK_UP))
		{
			pos.y -= speed * dt_in;
		}
	}
}

bool Dude::SetIsStopped()
{
	isStopped = true;
	return isStopped;
}

Vec2 Dude::GetPos() const
{
	return pos;
}

float Dude::GetWidth() const
{
	return width;
}

float Dude::GetHeight() const
{
	return height;
}
