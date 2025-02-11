#pragma once

#include "Firetruck.h"
#include <string>
#include <iostream>
#include "Point.h"
#include "INamedPerson.h"

class FirefighterBase :public INamedPerson
{
public:
	FirefighterBase(const std::string& name)
		:name(name)
	{
	}


	virtual ~FirefighterBase() = default;

	// �Ҳ���(ExtinguishFire)
	// ���� ���� �Լ�. (���� �����Լ��� 1���� ������ Ŭ������ �߻� Ŭ������� �θ� => ��ü�δ� ��ü(�ν��Ͻ�)�� ������ �� ���� Ŭ����)
	virtual void ExtinguishFire() = 0;

	// ����(Drive)
	virtual void Drive(Firetruck* truckToDrive, const class Point& position)
	{
		if (truckToDrive == nullptr)
		{
			return;
		}

		// �̵�
		truckToDrive->Drive(position);
	}

	// Getter/Setter.
	virtual std::string GetName() const override { return name; }
	void SetName(const std::string& name)
	{
		this->name = name;
	}

protected:
	std::string name;
};