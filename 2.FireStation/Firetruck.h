#pragma once

#include "Point.h"
#include <iostream>
#include "Ladder.h"

// 전방 선언 (Forward Declaration). 
// 쓰는 이유 
// 1. 헤더 순환 참조를 막기 위해서
// 2. 컴파일 속도 개선

class FirefighterBase;

class Firetruck
{
public:
	Firetruck()
	{
		// Composition 관계
		ladder = new Ladder(10.0f);
	}
	~Firetruck()
	{
		// 팩토리 패턴
		// : 생성은 전문 생성기에게 맡기고 주소를 할당받아 소멸을 객체에서 함
		delete ladder;
	}

	void Drive(const Point& position)
	{
		if (driver == nullptr)
		{
			return;
		}

		std::cout << position << "위치로 소방차 이동 중. \n";
	}

	FirefighterBase* GetDriver() const { return driver; }
	void SetDriver(FirefighterBase* driver) { this->driver = driver; }
	class Ladder* GetLadder() { return ladder; }
	class Hose* GetHose() const { return hose; }
	void SetHose(Hose* hose) { this->hose = hose; }

private:
	FirefighterBase* driver = nullptr;
	Ladder* ladder = nullptr;
	Hose* hose = nullptr;
};