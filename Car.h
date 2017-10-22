#ifndef CAR_H
#define CAR_H
#include <string>
#include "Vehicle.h"
using namespace std;
class Car : public Vehicle
{
private:
	int numOfDoors, maxPassengers;
	string manufacturer, model, color;
	double mileage;
public:
	Car();
	~Car();
	Car(int, string, string, string, double, int, int, double, Engine*);
	void setNumOfDoors(int);
	void setManufacturer(string);
	void setModel(string);
	void setColor(string);
	void setMileage(double);
	void setMaxPassengers(int);
	int getNumOfDoors();
	string getManufacturer();
	string getModel();
	string getColor();
	double getMileage();
	int getMaxPassengers();
	void print();
};
#endif

