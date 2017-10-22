#include <iostream>
#include <fstream>
#include <string>
#include "Vehicle.h"
#include "Car.h"
#include "Plane.h"
#include "Rocket.h"

using namespace std;
void setEngine(Engine &engine, string engineManufacturer, string engineType, double power, int rpm)
{
	engine.engineManufacturer = engineManufacturer;
	engine.engineType = engineType;
	engine.power = power;
	engine.rpm = rpm;

}

void readCars(Car *cars, ifstream &inFile, int numOfCars)
{
	string fileName = "";
	string carManu;
	string carModel;
	int numOfWheels;
	string engineType;
	string engineManu;
	double power;
	int rpm;
	double topSpeed;
	string color;
	int numOfDoors;
	double mileage;
	int maxPassengers;
	inFile.open(fileName);

	for (int i = 0; i < numOfCars; i++)
	{
		inFile >> carManu >> carModel >> numOfWheels >> engineType >> engineManu >> power >> rpm >> topSpeed >> color >> numOfDoors >> mileage >> maxPassengers;
		Engine carEngine;
		setEngine(carEngine, engineManu, engineType, power, rpm);
		cars[i] = Car(numOfDoors, carManu, carModel, color, mileage, maxPassengers, numOfWheels, topSpeed, &carEngine);
		
	}

	inFile.close();
}



void readPlanes(Plane *planes, ifstream &inFile, int numOfPlanes)
{

	string fileName = "";
	string planeManu;
	int pNumOfEng;
	string pEngineType;
	string pEngineManu;
	double pPower;
	int pRpm;
	double pTopSpeed;
	int pNumOfWheels;
	double wingSpan;
	string pType;
	int pMaxOccupancy;
	inFile.open(fileName);

	for (int i = 0; i < numOfPlanes; i++)
	{
		inFile >> planeManu >> pNumOfEng >> pEngineType >> pEngineManu >> pPower >> pRpm >> pTopSpeed >> pNumOfWheels >> wingSpan >> pType >> pMaxOccupancy;
		Engine planeEngine;
		setEngine(planeEngine, pEngineManu, pEngineType, pPower, pRpm);
		planes[i] = Plane(wingSpan, planeManu, pType, pNumOfEng, pMaxOccupancy, pNumOfWheels, pTopSpeed,&planeEngine);
	}

	inFile.close();
}
void readRockets(Rocket *rockets, ifstream &inFile, int numOfRockets)
{
	string fileName = "";
	int rNumOfEngines;
	string rEngineType;
	string rEngineManu;
	double rPower;
	int rRpm;
	double rTopSpeed;
	int rNumOfWheels;
	bool selfLanding;
	double cargoLimit;
	inFile.open(fileName);

	for (int i = 0; i < numOfRockets; i++)
	{
		inFile >> rNumOfEngines >> rEngineType >> rEngineManu >> rPower >> rRpm >> rTopSpeed >> rNumOfWheels >> selfLanding >> cargoLimit;
		Engine rocketEngine;
		setEngine(rocketEngine, rEngineManu, rEngineType, rPower, rRpm);
		rockets[i] = Rocket(cargoLimit, rNumOfEngines, selfLanding, rNumOfWheels,rTopSpeed,&rocketEngine);
	}

	inFile.close();
}

// This function performs printing out information of each object of each type
// You are ALLOWED to use standard Array syntax or Pointer
void printVehicles(Vehicle **vehicles, Car *cars, Plane* planes, Rocket* rockets, int numOfTypes[3])
{
	//delete[] vehicles;
	//vehicles[0] = cars;
	/*for (int i = 0; i < numOfTypes[0]; i++)
	{
		vehicles[0] = &cars[i];
		vehicles[0][i].print();
	}*/
	
	
	
	/*Vehicle **rewind;
	rewind = vehicles;
	int arraySize = 0;

	for (int i = 0; i < numOfTypes[0]; i++)
	{
		vehicles[i] = &cars[i];
	}

	arraySize += numOfTypes[0];

	for (int i = 0; i < numOfTypes[1]; i++)
	{
		vehicles[arraySize + i] = &planes[i];
	}

	arraySize += numOfTypes[1];

	for (int i = 0; i < numOfTypes[2]; i++)
	{
		vehicles[arraySize + i] = &rockets[i];
	}

	arraySize += numOfTypes[2];
	
	

	for (int i = 0; i < arraySize; i++)
	{
		vehicles[i]->print();
	}
	
	vehicles = rewind;*/

	vehicles[0] = cars;
	vehicles[1] = planes;
	vehicles[2] = rockets;
	
	
	string *allVehicles = new string[3];
	string *rewind2;
	rewind2 = allVehicles;
	*allVehicles = "Car";
	allVehicles++;
	*allVehicles = "Plane";
	allVehicles++;
	*allVehicles = "Rocket";

	allVehicles = rewind2;

	cout << "- Total number of vehicles = " << numOfTypes[0] + numOfTypes[1] + numOfTypes[2] << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << "+ " << allVehicles[i] << " = " << numOfTypes[i] << endl;

		for (int j = 0; j < numOfTypes[i]; j++)
		{
			cout << allVehicles[i] << " " << j + 1 << ":" << endl;
			vehicles[i][j].print();
			
		}
	}


	allVehicles = rewind2;

	

	



	
	// Your code goes here. Use polymorphism to call print() from child class
	// 0 points if not followed
}
// This function is called to free our allocated memory
void deleteVehicles(Vehicle **vehicles, Car *cars, Plane *planes, Rocket *rockets)
{
	delete[] cars;
	delete[] planes;
	delete[] rockets;
	// Your code goes here.
}
int main(int argc, char* argv[])
{
	ifstream inFile;
	string fileName = argv[1];
	int numOfCars = atoi(argv[2]);
	int numOfPlanes = atoi(argv[3]);
	int numOfRockets = atoi(argv[4]);
	int numOfTypes[] = { numOfCars, numOfPlanes, numOfRockets };
	// Create 3 objects
	Car *cars = new Car[numOfCars];
	Plane *planes = new Plane[numOfPlanes];
	Rocket *rockets = new Rocket[numOfRockets];
	inFile.open(fileName);
	if (inFile.fail())
	{
		cout << "Error! File does not exist." << endl;
		return 1;
	}

	// Put three attributes into object of type Engine
	
	// Call function(s) to read the input file
	readCars(cars, inFile, numOfCars);
	readPlanes(planes, inFile, numOfPlanes);
	readRockets(rockets, inFile, numOfRockets);
	// Create double pointer vehicle to store all vehicle types
	Vehicle **vehicles = new Vehicle *[3];
	// Print function will be called from child class (not Base Class)
	
	printVehicles(vehicles, cars, planes, rockets, numOfTypes);
	// Clean up new memory allocation after using
	deleteVehicles(vehicles, cars, planes, rockets);
	return 0;
}
