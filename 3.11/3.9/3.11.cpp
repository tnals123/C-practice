#include <iostream>
#include <string>
using namespace std;
class MotorVehicle {
private:
	string Make;
	string fuelType;
	string color;
	int yearofManufacture;
	int engineCapacity;
public:
	explicit MotorVehicle(string name1, string name2, string name3) {
		Make = name1;
		fuelType = name2;
		color = name3;
	}
	void setmake(string asdf) {
		Make = asdf;

	}
	string getmake() {
		return Make;
	}

};