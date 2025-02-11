#pragma once

#include "Point.h"
#include <iostream>
#include "Ladder.h"

// ���� ���� (Forward Declaration). 
// ���� ���� 
// 1. ��� ��ȯ ������ ���� ���ؼ�
// 2. ������ �ӵ� ����

class FirefighterBase;

class Firetruck
{
public:
	Firetruck()
	{
		// Composition ����
		ladder = new Ladder(10.0f);
	}
	~Firetruck()
	{
		// ���丮 ����
		// : ������ ���� �����⿡�� �ñ�� �ּҸ� �Ҵ�޾� �Ҹ��� ��ü���� ��
		delete ladder;
	}

	void Drive(const Point& position)
	{
		if (driver == nullptr)
		{
			return;
		}

		std::cout << position << "��ġ�� �ҹ��� �̵� ��. \n";
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