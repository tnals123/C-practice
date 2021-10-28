#include <iostream>
#include <fstream>
#include <Windows.h>
using namespace std;

int main() {
	const char* asdf = "myfigure.bmp";
	ifstream input{asdf,ios::in | ios::binary };
	if (!input) {
		cout << "출력안됨";
	}
	//ifstream output{ "newfigure.bmp",ios::out | ios::binary };
	//if (!output) {
	//	cout << "실패/!";
	//}

	unsigned char c;
	char* size = new char[64];
	int a = 0;
	while (!input.eof() && a < 64) {
		c = input.get();
		if (a % 8 == 0) {
			cout << endl;
			printf("%02x", c);
			size[a] = c;
			a++;
		}
	}
	char* mysize = new char[4];
	memcpy(mysize, size + 2, 4);

}