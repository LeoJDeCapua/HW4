#include <iostream>
#include "Vehicle.h"
#include "Plane.h"
using namespace std;


Plane::Plane()
{
	wingspan = 0.0;
	planeType = "";
	businessType = "";
	numOfEngines = 0;
	maxOccupancy = 0;
}

Plane::Plane(double ws, string pType, string bizType, int noEngines, int maxO, int rPm, double pOwer, Engine* attributes)
{
	wingspan = ws;
	planeType = pType;
	businessType = bizType;
	numOfEngines = noEngines;
	maxOccupancy = maxO;
	Vehicle(rPm, pOwer, attributes);
}
void Plane::setWingspan(double a)
{
	wingspan = a;
}
void Plane::setPlaneType(string b)
{
	planeType = b;
}
void Plane::setBusinessType(string c)
{
	businessType = c;
}
void Plane::setNumOfEngines(int d)
{
	numOfEngines = d;
}
void Plane::setMaxOccupancy(int e)
{
	maxOccupancy = e;
}
double Plane::getWingspan()
{
	return wingspan;
}
string Plane::getPlaneType()
{
	return planeType;
}
string Plane::getBusinessType()
{
	return businessType;
}
int Plane::getNumOfEngines()
{
	return numOfEngines;
}
int Plane::getMaxOccupancy()
{
	return maxOccupancy;
}
void Plane::print()
{
	cout << wingspan << planeType << businessType << numOfEngines << maxOccupancy << type.engineManufacturer << type.engineType << type.power << type.rpm << endl;
}
Plane::~Plane()
{

}