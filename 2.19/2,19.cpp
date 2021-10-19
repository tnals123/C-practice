#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cout << "input three different integers: ";

	cin >> a >> b >> c;
	cout << "sum is " << a + b + c << endl;
	cout << "average is " << (a + b + c) / 3 << endl;
	cout << "product is " << a * b * c << endl;
	int d;
	if (a < b & a < c) {
		d = a;
	}
	if (b < a & b < c) {
		d = b;
	}
	if (c < a & c < b) {
		d = c;
	}
	cout << "the smallest is " << d << endl;
	int e;
	if (a > b & a > c) {
		e = a;
	}
	if (b > a & b > c) {
		e= b;
	}
	if (c > a & c > b) {
		e = c;
	}
	cout << "the largest is " << e;
	

}