#include "Vehicle.h"
class Rocket : public Vehicle
{
private:
	double cargoLimit;
	int numOfEngines;
	bool isSelfLanding;
public:
	Rocket();
	~Rocket();
	Rocket(double, int, bool, int, double, Engine*);
	void setCargoLimit(double);
	void setNumOfEngines(int);
	void setIsSelfLanding(bool);
	double getCargoLimit();
	int getNumOfEngines();
	bool getIsSelfLanding();
	void print();
};
