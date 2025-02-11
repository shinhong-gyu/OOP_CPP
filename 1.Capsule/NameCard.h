#pragma o nce
#include <iostream>
#include <string>

class NameCard
{
public:
	NameCard(const std::string& name, const std::string& phone, const std::string& address, std::string position) : m_Name(name), m_Phone(phone), m_Address(address), m_Position(position) {};
	~NameCard() {};
	void ShowData()
	{
		std::cout << "이    름: " << m_Name << std::endl;
		std::cout << "전화번호: " << m_Phone << std::endl;
		std::cout << "주    소: " << m_Address << std::endl;
		std::cout << "직    급: " << m_Position << std::endl;
	};

private: 
	std::string m_Name;
	std::string m_Phone;
	std::string m_Address;
	std::string m_Position;
};