#pragma once

class Rectangle
{
public:
	Rectangle(float width, float height) : m_Width(width), m_Height(height)
	{

	};
	~Rectangle() {};
	float GetWidth() const { return m_Width; }
	float GetHeight() const { return m_Height; }

	float GetArea() const { return m_Width * m_Height; }
	float GetSize() const { return 2 * (m_Width + m_Height); }
private:

	float m_Width;
	float m_Height;
};