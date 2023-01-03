#pragma once
#include "Graphics.h"
#include "Dude.h"
#include "Vec2.h"
class Poo
{
public:
	void Init(const Vec2& pos_in, const Vec2& vel_in);
	void Update(float dt_in);
	void ProcessConsumption(const Dude& dude);
	void StopPoo(const Vec2& vel_in);
	void Draw(Graphics& gfx) const;
	bool GetIsEaten() const;
private:
	Vec2 pos;
	Vec2 vel;
	static constexpr float width = 24.0f;
	static constexpr float height = 24.0f;
	bool isEaten = false;
	bool initialized = false;
};