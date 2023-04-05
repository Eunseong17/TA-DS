#include "sports_car.h"

int main()
{
	//Car	yourCar;
	Car yourCar(100, 4, "your car");
	yourCar.display();
	yourCar.whereAmI();
	yourCar.gear = 5;
	yourCar.display();
	yourCar.changeGear(3);
	yourCar.display();

	SportsCar myCar(200,6,"my car");
	myCar.setTurbo(true);
	myCar.speedUp();
	myCar.display();
	myCar.whereAmI();

	return 0;
}