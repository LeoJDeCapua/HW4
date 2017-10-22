#include<iostream>
#include <string>
#include "Vehicle.h"
using namespace std;

Vehicle::Vehicle()
{
	numOfWheels = 0;
	topSpeed = 0.0;
	type = { "" , 0.0, 0, ""};
	
}

Vehicle::Vehicle(int a, double b, Engine *c)
{
	numOfWheels = a;
	topSpeed = b;
	type = *c;
}

void Vehicle::setNumOfWheels(int setNumWheels)
{
	numOfWheels = setNumWheels;
}

void Vehicle::setTopSpeed(double setTSpeed)
{
	topSpeed = setTSpeed;
}

void Vehicle::setEngine(Engine &setEngineAttribute)
{
	type = setEngineAttribute;
}

int Vehicle::getNumOfWheels()
{
	return numOfWheels;
}

double Vehicle::getTopSpeed()
{
	return topSpeed;
}

Engine Vehicle::getEngine()
{
	return type;
}

void Vehicle::print()
{
	cout << "\tEngine Type : " << type.engineType << endl;
	cout << "\tEngine Manufacturer : " << type.engineManufacturer << endl;
	cout << "\tPower : " << type.power << endl;
	cout << "\tTop Speed : " << topSpeed << endl;
	cout << "\tNumber of Wheels : " << numOfWheels << endl;
	
}

Vehicle::~Vehicle()
{
	

}