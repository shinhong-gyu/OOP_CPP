#pragma once

#include <vector>
#include <iostream>
#include "INamedPerson.h"

class FireStation
{
public:
	void ClockIn(INamedPerson* staffParam)
	{
		// �̹� ��� �ߴ��� Ȯ��.
		bool contains = false;
		for (INamedPerson* staff : clockedInStaff)
		{
			if (staff == staffParam)
			{
				contains = true;
				break;
			}
		}

		// ���� ��� ���� ���¶��
		if (!contains)
		{
			// �迭�� �߰�
			clockedInStaff.emplace_back(staffParam);
		}
	}

	// �⼮ Ȯ�� �Լ�.
	void RollCall()
	{
		for (INamedPerson* staff : clockedInStaff)
		{
			std::cout << staff->GetName() << "\n";
		}
	}


private:
	// ���� ���� ����.
	std::vector<INamedPerson* > clockedInStaff;


};