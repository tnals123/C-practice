#include <iostream>
using namespace std;

int main() {
	int asdf;
	cout << "높이 정하기: ";
	cin >> asdf;
	int a = asdf / 2 + 0.5;
	int m = asdf - a;
	int b = asdf / 2 + 1.5;
	int z = asdf - b;
	int qwer = asdf / 2 + 2.5;
	
	int j = asdf - 2;
	int q = 3;
	int y = 0;
	int p = 0;
	int k = 0;
	
	cout << " ";
	
	for (int e = 0; e < asdf; e++) {
		cout << "#";
	}
	cout << endl;
	for (int i = 0; i < asdf - a-1; i++) {
		
		for (int n = 0; n <= i; n++) {
			cout << " ";
			if (n == 0) {
				cout << "#";
			}

		}
		for (int n = j; n > 0; n--) {
			cout << "*";
		}
		for (int z = 0; z < y; z++) {
			cout << " ";
		}
		cout << "#";
		j -= 2;
		y += 1;

		cout << endl;


	}
	for (int i = 0; i < asdf - b-1; i++) {
		
		for (int n = asdf - qwer-1; n >= i; n--) { //double qwer = asdf / 2 + 2.5;
			cout << " ";
			if (n == asdf - qwer-1) {
				cout << "#";
			}
		}
		for (int n = 0; n < q; n++) {
			cout << "*";
		}
		for (int k = asdf - qwer-1; k > p; k--) {
			cout << " ";
		}
		cout << "#";
		q += 2;
		p += 1;
		cout << endl;
	}
	cout << " ";
	for (int e = 0; e < asdf; e++) {
		cout << "#";
	}
	cout << endl;


}