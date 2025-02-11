#pragma once

#include "FirefighterBase.h"
#include <string>

class FireCheif :public FirefighterBase
{
public:
	FireCheif(const std::string& name, FirefighterBase* value) : FirefighterBase(name), numberOne(value) { a = 5; }

	virtual void ExtinguishFire() override
	{
		if (numberOne == nullptr)
		{
			return;
		}

		TellFirefighterToExtinguishFire(numberOne);
	}

	void TellFirefighterToExtinguishFire(FirefighterBase* colleage)
	{
		std::cout << this->name << a << "°¡ " << colleage->GetName() << "¿¡°Ô ºÒ²ô±â¸¦ ½ÃÅ´\n";
		colleage->ExtinguishFire();
	}

	FirefighterBase* GetNumberOne() const { return numberOne; }
	void SetNumberOne(FirefighterBase* value) { numberOne = value; }
private:
	FirefighterBase* numberOne;
	int a;
};