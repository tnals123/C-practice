#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void changebig(char* mysrc) {
	char* tempdata = new char[4];
	tempdata[0] = mysrc[3];
	tempdata[1] = mysrc[2];
	tempdata[2] = mysrc[1];
	tempdata[3] = mysrc[0];
	memcpy(mysrc, tempdata, 4);

}
int main() {
	unsigned char c;
	char* testsize = new char[64];
	int a = 0;
	const char* srcFileName = "tiger.bmp";
	const char* dstFileName = "tiger3.bmp";
	ifstream is(srcFileName, ios::in | ios::binary);
	ostream asdf(dstFileName, ios::out | ios::binary);
	while (!is.eof() && a < 64) {
		c = is.get();
		if (a % 8 == 0) {
			cout << endl;
		}
		printf("%02x ", c);
		testsize[a] = c;
		a++;
	}
	char* myheight = new char[4];
	memcpy(myheight, testsize + 22, 4);
	changebig(myheight);
	cout << endl;
	cout << std::hex << (int)myheight[0] <<"  \n"<< (int)myheight[1] << (int)myheight[2] << (int)myheight[3];
	printf("%02x ", myheight[0]);
	printf("%02x ", myheight[1]);
	printf("%02x ", myheight[2]);
	printf("%02x ", myheight[3]);
	is.seekg(0, ios::beg);
	int i = (669822 - 54) / 2;
	while (i>0) {
		c = is.get();
		is.put(c);
		i--;
	}
}