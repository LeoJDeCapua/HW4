#include<iostream>

#include "Rocket.h"
using namespace std;

Rocket::Rocket()
{
	cargoLimit = 0.0;
	numOfEngines = 0;
	isSelfLanding = false;
	Vehicle();
}
Rocket::Rocket(double cL, int numEngines, bool sL, int numOFWheels, double tOPsPeed, Engine* attributes)
{
	cargoLimit = cL;
	numOfEngines = numEngines;
	isSelfLanding = sL;
	Vehicle(numOFWheels, tOPsPeed, attributes);
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
	
}
Rocket::~Rocket()
{

}
