#include <iostream>
using namespace std;
int i, a, b;
int main() {
		cout << "Face length of cube(cm)          Surface area of cube  (cm^2)        Volume of cube(cm^3)" << endl;
	for (i = 0; i <= 4; i++) {
		a = i * i * 6;
		b = i * i * i;
		
		cout << "           " << i << "                             " << a << "                                     " << b << endl;

	}


}