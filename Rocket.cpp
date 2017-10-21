#include<iostream>
#include "Vehicle.h"
#include "Rocket.h"
using namespace std;

Rocket::Rocket()
{
	cargoLimit = 0.0;
	numOfEngines = 0;
	isSelfLanding = false;
}
Rocket::Rocket(double cL, int numEngines, bool sL, int rPm, double pOwer, Engine* attributes)
{
	cargoLimit = cL;
	numOfEngines = numEngines;
	isSelfLanding = sL;
	Vehicle(rPm, pOwer, attributes);
}
void Rocket::setCargoLimit(double a)
{
	cargoLimit = a;
}
void Rocket::setNumOfEngines(int b)
{
	numOfEngines = b;
}
void Rocket::setIsSelfLanding(bool c)
{
	isSelfLanding = c;
}
double Rocket::getCargoLimit()
{
	return cargoLimit;
}
int Rocket::getNumOfEngines()
{
	return numOfEngines;
}
bool Rocket::getIsSelfLanding()
{
	return isSelfLanding;
}
void Rocket::print()
{
	cout << cargoLimit << numOfEngines << isSelfLanding << type.engineManufacturer << type.engineType << type.power << type.rpm << endl;
}
Rocket::~Rocket()
{

}
