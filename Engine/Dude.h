#pragma once

#include "Graphics.h"
#include "Keyboard.h"
class Dude
{
public:
	void ClampToScreen();
	void Draw(Graphics& gfx) const;
	void Update(const Keyboard& kbd);
	bool SetIsStopped();
	float GetX() const;
	float GetY() const;
	float GetWidth() const;
	float GetHeight() const;
private:
	float x = 400.0f;
	float y = 300.0f;
	bool isStopped = false;
	static constexpr float speed = 1.0f;
	static constexpr float width = 20.0f;
	static constexpr float height = 20.0f;
};