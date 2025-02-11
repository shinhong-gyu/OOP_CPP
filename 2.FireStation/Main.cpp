#include "Firefighter.h"
#include "FireCheif.h"
#include "TraineeFirefighter.h"
#include "FireStation.h"
#include "Administrator.h"

int main() {
	// �ҹ漭 ����
	FireStation* fireStation = new FireStation();

	// ������ ����
	Administrator* admin = new Administrator("������", "����", "��");



	// �ҹ��� ����.
	Firetruck* truckOne = new Firetruck();
	Firefighter* SHK = new Firefighter("SHK");
	Firefighter* ABC = new Firefighter("abc");

	// ���� �ҹ�� ���� �� �׽�Ʈ.
	FireCheif* harry = new FireCheif("�ظ�", SHK);
	truckOne->SetDriver(harry);

	harry->Drive(truckOne, Point(200, 200));

	harry->ExtinguishFire();

	// ���� �ҹ��
	Firefighter* trainee = new TraineeFirefighter("����");
	trainee->ExtinguishFire();


	fireStation->ClockIn(SHK);
	fireStation->ClockIn(harry);
	fireStation->ClockIn(ABC);
	fireStation->ClockIn(admin);
	fireStation->ClockIn(trainee);

	fireStation->RollCall();


	// ������
	FirefighterBase* stillHarry = harry;
	stillHarry->ExtinguishFire();

	truckOne->SetDriver(SHK);

	truckOne->Drive(Point(10, 5));

	truckOne->SetDriver(ABC);

	truckOne->Drive(Point(20, -3));

	truckOne->Drive(Point(20, 20));

	delete truckOne;
	delete SHK;
	delete ABC;
	delete harry;
	delete trainee;
	delete fireStation;
	delete admin;

	std::cin.get();
}