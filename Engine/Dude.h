#pragma once
#include "Graphics.h"
#include "Keyboard.h"
#include "Vec2.h"
#include "Mouse.h"
class Dude
{
public:
	void ClampToScreen();
	void Draw(Graphics& gfx) const;
	void Update(const Mouse& mouse, float dt_in);
	bool SetIsStopped();
	Vec2 GetPos() const;
	float GetWidth() const;
	float GetHeight() const;
private:
	Vec2 pos = Vec2(400.0f, 300.0f);
	bool isStopped = false;
    const  float speed = 1.0f * 144.0f; // mno¿e przez 144 aby obiekt poruszy³ siê 144 piksele na sekunde(oko³o) // 
	static constexpr float width = 20.0f;
	static constexpr float height = 20.0f;
};