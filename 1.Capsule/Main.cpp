#include <iostream>
#include "Rectangle.h"
#include "Circle.h"
#include "Time.h"
#include "NameCard.h"

int main()
{
// 	Rectangle rectangle = Rectangle(3.f,4.f);
// 
// 	std::cout << "����: " << rectangle.GetArea() << "\n";
// 	std::cout << "�ѷ�: " << rectangle.GetSize() << "\n";
// 
// 	Circle circle = Circle(5.f);
// 	std::cout << "����:" << circle.GetArea() << "\n";
// 	std::cout << "�ѷ�:" << circle.GetSize() << "\n";

// 	Time time = Time(3, 4, 5);
// 
// 	time.ShowTime();
// 	time.ShowTimeInSecond();

	NameCard shin = NameCard("Shin","010-1111-1111", "����","����");

	shin.ShowData();
}