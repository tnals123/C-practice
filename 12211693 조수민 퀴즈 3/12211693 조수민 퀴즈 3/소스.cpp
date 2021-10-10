#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>
#include <conio.h>
using namespace std;

int main() {
	int num = 1;
	ifstream is{ "c:\\windows\\system.ini" };
	string s;
	while (is) {
		is >> s;
		cout <<num<<"   :   "<< s << endl;
		num += 1;
	}
}