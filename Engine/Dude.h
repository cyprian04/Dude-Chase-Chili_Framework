#pragma once

#include "Graphics.h"
#include "Keyboard.h"
class Dude
{
public:
	void ClampToScreen();
	void Draw(Graphics& gfx) const;
	void Update(const Keyboard& kbd, float dt_in);
	bool SetIsStopped();
	float GetX() const;
	float GetY() const;
	float GetWidth() const;
	float GetHeight() const;
private:
	float x = 400.0f;
	float y = 300.0f;
	bool isStopped = false;
	static constexpr float speed = 1.0f * 144.0f; // mno¿e przez 144 aby obiekt poruszy³ siê 144 piksele na sekunde(oko³o) // 
	static constexpr float width = 20.0f;
	static constexpr float height = 20.0f;
};