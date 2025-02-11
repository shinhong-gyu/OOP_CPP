#include <iostream>
#include "Rectangle.h"
#include "Circle.h"
#include "Time.h"
#include "NameCard.h"

int main()
{
// 	Rectangle rectangle = Rectangle(3.f,4.f);
// 
// 	std::cout << "면적: " << rectangle.GetArea() << "\n";
// 	std::cout << "둘레: " << rectangle.GetSize() << "\n";
// 
// 	Circle circle = Circle(5.f);
// 	std::cout << "면적:" << circle.GetArea() << "\n";
// 	std::cout << "둘레:" << circle.GetSize() << "\n";

// 	Time time = Time(3, 4, 5);
// 
// 	time.ShowTime();
// 	time.ShowTimeInSecond();

	NameCard shin = NameCard("Shin","010-1111-1111", "서울","무직");

	shin.ShowData();
}