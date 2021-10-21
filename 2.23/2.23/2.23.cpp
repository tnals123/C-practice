#include <iostream>
using namespace std;
int asdf[5], i, qwer;
int main() {
	for (i = 0; i < 5; i++) {
		cout << "Write five integers: ";
		cin >> asdf[i];
	}
	qwer = asdf[0];
	for (i = 1; i < 5; i++) {
		if (asdf[i] > qwer) {
			qwer = asdf[i];
		}
	}
	cout << "largest integers : " << qwer;

}