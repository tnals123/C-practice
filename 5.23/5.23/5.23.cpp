#include <iostream>
using namespace std;

int main() {
	int j = 7;
	int q = 3;
	int y = 0;
	int p = 0;
	int k = 0;
	cout << " ";
	for (int e = 0; e < 9; e++) {
		cout << "#";
	}
	cout << endl;
	for (int i = 0; i < 4; i++) {
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
	for (int i = 0; i < 3; i++) {
		for (int n =2; n >=i; n--) {
			cout << " ";
			if (n == 2) {
				cout << "#";
			}
		}
		for (int n = 0; n < q; n++) {
			cout << "*";
		}
		for (int k = 2; k > p; k--) {
			cout << " ";
		}
		cout << "#";
		q += 2;
		p += 1;
		cout << endl;
	}
	cout << " ";
	for (int e = 0; e < 9; e++) {
		cout << "#";
	}
	cout << endl;
	

}