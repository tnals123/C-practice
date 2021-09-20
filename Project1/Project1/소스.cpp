#include <iostream>
using namespace std;
class MotorVehicle {
private:
	string make;
	string fuelType;
	int yearofmanufacture=0;
	string color;
	int enginecapacity=0;
public:
	string setmake(string asdf) {
		make = asdf;
		return make;
	}
	void getmake() {
		cout << "your motorvehicle is made by :  "<< make << endl;
	}
	string setfuel(string asdf){
		fuelType = asdf;
		return fuelType;

	}
	void getfuel() {
		cout << "your fueltype is: " << fuelType << endl;
	}


	int setyear(int num) {
		yearofmanufacture = num;
		return yearofmanufacture;
	}

	void getyear() {
		cout << " year of manufacture : " << yearofmanufacture << endl;
	}
	string setcolor(string asdf) {
		color = asdf;
		return color;

	}

	void getcolor() {
		cout << "your color : " << color << endl;
	}

	int setengine(int num) {
		enginecapacity = num;
		return enginecapacity;
	}
	void getengine() {
		cout << "your enginecapacity is " << enginecapacity << endl;
	}
	void displayCarDetails() {
		cout << "make :" << make << endl;
		cout << "fueltype : " << fuelType << endl;
		cout << "yearofmanufacture : " << yearofmanufacture <<"³â" << endl;
		cout << "color : " << color << endl;
		cout << "enginecapacity : " << enginecapacity <<"L" << endl;
	}
};
int main() {
	MotorVehicle asdf;
	asdf.setmake("adfefdx");
	asdf.setfuel("¼®À¯");
	asdf.setengine(30);
	asdf.setyear(2002);
	asdf.setcolor("red");
	asdf.displayCarDetails();
}