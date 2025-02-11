#pragma once

class Circle
{
public:
	Circle(float radius) : m_Radius(radius) {}
	~Circle() {}
	float GetArea() const { return PI * m_Radius * m_Radius; }
	float GetSize() const { return 2 * PI * m_Radius; }

private:
	float m_Radius;
	const float PI = 3.141592f;
};