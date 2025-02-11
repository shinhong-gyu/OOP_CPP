#include "Firefighter.h"
#include "FireCheif.h"
#include "TraineeFirefighter.h"
#include "FireStation.h"
#include "Administrator.h"

int main() {
	// 家规辑 积己
	FireStation* fireStation = new FireStation();

	// 包府磊 积己
	Administrator* admin = new Administrator("包府磊", "怕霖", "厘");



	// 家规瞒 积己.
	Firetruck* truckOne = new Firetruck();
	Firefighter* SHK = new Firefighter("SHK");
	Firefighter* ABC = new Firefighter("abc");

	// 荐嚼 家规包 积己 棺 抛胶飘.
	FireCheif* harry = new FireCheif("秦府", SHK);
	truckOne->SetDriver(harry);

	harry->Drive(truckOne, Point(200, 200));

	harry->ExtinguishFire();

	// 荐嚼 家规包
	Firefighter* trainee = new TraineeFirefighter("ぞし");
	trainee->ExtinguishFire();


	fireStation->ClockIn(SHK);
	fireStation->ClockIn(harry);
	fireStation->ClockIn(ABC);
	fireStation->ClockIn(admin);
	fireStation->ClockIn(trainee);

	fireStation->RollCall();


	// 促屈己
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