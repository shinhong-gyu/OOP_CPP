#pragma once

#include "FirefighterBase.h"

class Firefighter :public FirefighterBase
{
public:
	Firefighter(const std::string& name)
		:FirefighterBase(name)
	{
	}

	Firefighter(Firefighter& other) = delete;

	virtual ~Firefighter() = default;

	// �Ҳ���(ExtinguishFire)
	virtual void ExtinguishFire()
	{
		std::cout << name << " �ҹ���� ���� ���� ����! \n";
		TrainHoseOnFire();
		TurnOnHose();
	}

	// ��� �Լ� (�޼ҵ�).

protected:
	// ȣ�� �ѱ� (��)
	virtual void TurnOnHose()
	{
		std::cout << name << "���� ������ �ֽ��ϴ�! \n";
	}

	// ȣ�� ����.
	virtual void TrainHoseOnFire()
	{
		std::cout << "ȣ���� ���� �߻��� ���� �ܳ��ϰ� �ֽ��ϴ�.\n";
	}
private:
	
};

