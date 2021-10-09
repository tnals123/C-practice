#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ifstream fin;
	fin.open("phonenumber.txt");
	char c;
	while (fin.get(c)) {
		cout << c;
	}
	fin.close();
}