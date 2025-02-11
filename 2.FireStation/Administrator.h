#pragma once
#include <string>
#include "INamedPerson.h"

// 관리자 클래스
class Administrator : public INamedPerson
{
public:
	Administrator(const std::string& title, const std::string& firstName, const std::string& lastName) : title(title), firstName(firstName), lastName(lastName)
	{
	}

	std::string GetTitle() const { return title; }
	std::string GetFirstName() const { return firstName; }
	std::string GetLastName() const { return lastName; }

	// INamedPerson을(를) 통해 상속됨
	virtual std::string GetName() const override;

private:
	std::string title;
	std::string firstName;
	std::string lastName;
};