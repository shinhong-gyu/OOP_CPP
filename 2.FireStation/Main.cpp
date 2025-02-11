#include "Firefighter.h"
#include "FireCheif.h"
#include "TraineeFirefighter.h"

int main()
{
	Firetruck* truckOne = new Firetruck();
	Firefighter* SHK = new Firefighter("SHK");
	Firefighter* ABC = new Firefighter("abc");

	FireCheif* harry = new FireCheif("�ظ�", SHK);
	truckOne->SetDriver(harry);

	harry->Drive(truckOne, Point(200, 200));


	harry->ExtinguishFire();

	// ������
	FirefighterBase* stillHarry = harry;
	stillHarry->ExtinguishFire();

	// ���� �ҹ��
	Firefighter* trainee = new TraineeFirefighter("����");
	trainee->ExtinguishFire();

	truckOne->SetDriver(SHK);

	truckOne->Drive(Point(10, 5));

	truckOne->SetDriver(ABC);

	truckOne->Drive(Point(20, -3));

	truckOne->Drive(Point(20, 20));
	std::cin.get();

	delete truckOne;
	delete SHK;
	delete ABC;
	delete harry;
	delete trainee;

}