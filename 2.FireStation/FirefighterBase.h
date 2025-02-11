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

	// 불끄기(ExtinguishFire)
	// 순수 가상 함수. (순수 가상함수를 1개라도 가지는 클래스를 추상 클래스라고 부름 => 자체로는 객체(인스턴스)를 생성할 수 없는 클래스)
	virtual void ExtinguishFire() = 0;

	// 운전(Drive)
	virtual void Drive(Firetruck* truckToDrive, const class Point& position)
	{
		if (truckToDrive == nullptr)
		{
			return;
		}

		// 이동
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