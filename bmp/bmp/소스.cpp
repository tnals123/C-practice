#include <iostream>
#include <fstream>
using namespace std;
int main() {
	const char* srcFileName = "tiger.bmp";
	const char* dstFileName = "tigerDouble.bmp";
	ifstream fsrc(srcFileName, ios::in | ios::binary);

	if (!fsrc) {
		cout << "Cant open file" << endl;
		return 0;
	}

	ofstream fdst(dstFileName, ios::out | ios::binary);

	if (!fdst) {
		cout << srcFileName << ": error occurred when opening the ifle" << endl;
	}
	return 0;

	unsigned char c;
	int a = 0;
	while (!fsrc.eof() && a < 64) {
		c = fsrc.get();
		if (a % 8 == 0) {
			cout << endl;
			a++;
		}
	}
	fsrc.seekg(0, ios::beg);
	while (!fsrc.eof()) {
		c = fsrc.get();
		fdst.put(c);
	}
	fsrc.clear();
	fsrc.seekg(54, ios::beg);
	fdst.seekp(-1, ios::end);
	while (!fsrc.eof()) {
		c = fsrc.get();
		fdst.put(c);
	}

	unsigned char fileSize[4] = { 0xc6,0x70,0x14,0x00 };
	unsigned char height[4] = { 0xc4,0x02,0x00,0x00 };

	fdst.seekp(2, ios::beg);
	for (int i = 0; i < 4; i++) {
		fdst.put(fileSize[i]);
	}
	fdst.seekp(22, ios::beg);
	for (int i = 0; i < 4; i++) {
		fdst.put(height[i]);
	}
	cout << "Complete";
	fsrc.close();
	fdst.close();
}