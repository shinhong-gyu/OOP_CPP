#pragma once

#include <vector>
#include <iostream>
#include "INamedPerson.h"

class FireStation
{
public:
	void ClockIn(INamedPerson* staffParam)
	{
		// 이미 출근 했는지 확인.
		bool contains = false;
		for (INamedPerson* staff : clockedInStaff)
		{
			if (staff == staffParam)
			{
				contains = true;
				break;
			}
		}

		// 아직 출근 안한 상태라면
		if (!contains)
		{
			// 배열에 추가
			clockedInStaff.emplace_back(staffParam);
		}
	}

	// 출석 확인 함수.
	void RollCall()
	{
		for (INamedPerson* staff : clockedInStaff)
		{
			std::cout << staff->GetName() << "\n";
		}
	}


private:
	// 직원 관리 변수.
	std::vector<INamedPerson* > clockedInStaff;


};