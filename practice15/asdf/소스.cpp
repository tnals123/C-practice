#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <fstream>
using namespace std;

int main() {
	HDC hdc = GetWindowDC(GetForegroundWindow());
	ifstream is{ "lena.raw",ios::binary };
	if (!is) {
		cout << "asdf";
	}
	int size = 256 * 256;
	char* memblock = new char[size];
	is.read(memblock,size);
	int x = 0, y = 0;
	int red = 0, green = 0, blue = 0;

	for (x = 0; x < 256; x++) {
		for (y = 0; y < 256; y++) {
			red = green = blue = memblock[y * 256 + (255-x)];
			SetPixel(hdc, x + 100, y + 200, RGB(red, green, blue));
		}
	}
	delete memblock;
}
