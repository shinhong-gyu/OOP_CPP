#pragma once
#include <iostream>

class Time
{
public:
	Time(int h, int m, int s) : hour(h), minute(m), second(s) {};
	~Time() {};

	void ShowTime()
	{
		std::cout << "[" << hour << "시 " << minute << "분" << second << "초]\n";
	}
	void ShowTimeInSecond()
	{
		std::cout << hour * 3600 + minute * 60 + second << "초\n";
	}
private:
	int hour = 0;
	int minute = 0;
	int second = 0;
};