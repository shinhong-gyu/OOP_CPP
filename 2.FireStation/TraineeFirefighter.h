#pragma once
#include "Firefighter.h"

class TraineeFirefighter : public Firefighter
{
public:
	TraineeFirefighter(const  std::string& name, bool hoseTrainedOnFire = false)
		: Firefighter(name), hoseTrainedOnFire(hoseTrainedOnFire)
	{

	}

protected:
	// ȣ�� �ѱ� (��)
	virtual void TurnOnHose() override
	{
		if (hoseTrainedOnFire)
		{
			Firefighter::TurnOnHose();
			std::cout << "���� ������ �ֽ��ϴ�.\n";
		}
		else
		{
			std::cout << "���� ������ ������ Ƣ�� �ֽ��ϴ�.\n";
		}
	}

	// ȣ�� ����.
	virtual void TrainHoseOnFire() override
	{
		hoseTrainedOnFire = true;
		Firefighter::TrainHoseOnFire();
		std::cout << "ȣ���� ���� �߻��� ���� �ܳ��ϰ� �ֽ��ϴ�.\n";
	}

private:
	bool hoseTrainedOnFire = false;
};