#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
#include <conio.h>
using namespace std;
void Changeupdown() {
	unsigned char image[512][512];
	unsigned char Resultimage[512][512];


	for (int i = 0; i < 512; i++) {
		for (int j = 0; j < 512; j++) {
			Resultimage[i][j] = image[512 - 1 - i][j];
		}
	}
	ifstream is{ "lena.raw",ios::binary };
	fwrite(Resultimage, sizeof(char), 512 * 512,is);
	ofstream out("lena(3).raw");
}

int main() {
	HDC hdc = GetWindowDC(GetForegroundWindow());
	ifstream is{"lena.raw",ios::binary };
	if (is.fail()) {
		cout << "Cannot open lena" << endl;
		exit(1);

	}
	int size = 256*256;
	char* memblock = new char[size];
	is.read(memblock, size);
	delete memblock;
	Changeupdown();
}