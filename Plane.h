#ifndef PLANE_H
#define PLANE_H
#include <string>
#include "Vehicle.h"
using namespace std;
class Plane : public Vehicle
{
private:
	double wingspan;
	string planeType, businessType;
	int numOfEngines, maxOccupancy;
public:
	Plane();
	~Plane();
	Plane(double, string, string, int, int, int, double, Engine*);
	void setWingspan(double);
	void setPlaneType(string);
	void setBusinessType(string);
	void setNumOfEngines(int);
	void setMaxOccupancy(int);
	double getWingspan();
	string getPlaneType();
	string getBusinessType();
	int getNumOfEngines();
	int getMaxOccupancy();
	void print();
};
#endif

