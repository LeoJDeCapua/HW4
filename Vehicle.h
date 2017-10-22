#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
#include <iostream>
using namespace std;
struct Engine
{
	string engineType;
	double power;
	int rpm;
	string engineManufacturer;
};

class Vehicle 
{
protected:
	int numOfWheels;
	double topSpeed;
	Engine type;
public:
	Vehicle();
	~Vehicle();
	Vehicle(int, double, Engine *);
	void setNumOfWheels(int);
	void setTopSpeed(double);
	void setEngine(Engine &);
	int getNumOfWheels();
	double getTopSpeed();
	Engine getEngine();
	virtual void print();
};
#endif
