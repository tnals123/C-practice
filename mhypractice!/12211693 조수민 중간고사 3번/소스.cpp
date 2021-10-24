#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	const char* InputFile = "C:\Windows\system.ini";
	const char* OutputFile = "system.txt";
	unsigned char c;
	ifstream input{"system.ini"};
	if (!input) {
		cout << "asdf";
	}
	ofstream output(OutputFile, ios::out | ios::binary);
	//Woa ¸¦ TOW ·Î
	
	string line;
	int line_number = 1;
	while (getline(input, line)) {
		cout<<line_number++<<": "<<line<<endl;
		output << line_number<< ": " << line << endl;
	}
	const char* WOA="WOA";
	const char* TOW="TOW";
	char* str = new char();
	while (!input.eof()) {
		input.getline(str, 100);
		for (int i = 0,j=0; i < (int)strlen(str); i++) {
			if (str[i] == WOA[j]) {
				j++;
			}
			else {
				j = 0;
			}
			if (j >= 3) {
				for (j; j > 0; j--) {
					str[i - j + 1] = TOW[3 - j];
				}
			}
		}
		
	}
	
	
}