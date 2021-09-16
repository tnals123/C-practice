#include <iostream>
using namespace std;

int main() {
	for (int i = 1; i <= 9; i++) {
		for (int q = 1; q <= 9; q++) {
			if (i >= q) {
				cout << i;
			}
			else {
				continue;
			}

		}
		cout << endl;
		}

	}




/*
1
22
333
4444
55555
666666
7777777
88888888
999999999
*/