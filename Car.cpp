#include<iostream>
#include "Car.h"
#include "Vehicle.h"
using namespace std;

Car::Car()
{
	numOfDoors = 0;
	maxPassengers = 0;
	manufacturer = "";
	model = "";
	color = "";
	mileage = 0.0;
}

Car::Car(int doors, string manufact, string mOdel, string cOlor, double mIleage, int maXPassengers, int rPm, double pOwer, Engine* attributes)
{
	numOfDoors = doors;
	manufacturer = manufact;
	model = mOdel;
	color = cOlor;
	mileage = mIleage;
	maxPassengers = maXPassengers;
	Vehicle(rPm,pOwer,attributes);
}

void Car::setNumOfDoors(int a)
{
	numOfDoors = a;
}
void Car::setManufacturer(string b)
{
	manufacturer = b;
}
void Car::setModel(string c)
{
	model = c;
}
void Car::setColor(string d)
{
	color = d;
}
void Car::setMileage(double e)
{
	mileage = e;
}
void Car::setMaxPassengers(int f)
{
	maxPassengers = f;
}

int Car::getNumOfDoors()
{
	return numOfDoors;
}
string Car::getManufacturer()
{
	return manufacturer;
}
string Car::getModel()
{
	return model;
}
string Car::getColor()
{
	return color;
}
double Car::getMileage()
{
	return mileage;
}
int Car::getMaxPassengers()
{
	return maxPassengers;
}
void Car::print()
{
	cout << numOfDoors << manufacturer << model << color << mileage << maxPassengers << type.engineManufacturer << type.engineType << type.power << type.rpm << endl;
}

Car::~Car()
{

}