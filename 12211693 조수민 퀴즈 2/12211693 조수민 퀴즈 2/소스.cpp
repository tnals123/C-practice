#include <iostream>
#include <fstream>
#include <Windows.h>
#include <conio.h>
#include <string>
using namespace std;


void changeinfo() {
	string name;
	int num;
	cout << "추가하고 싶은 이름: ";
	cin >> name;
	cout << "추가하고 싶은 전화번호: ";
	cin >> num;
	ofstream os("phonenumber.txt", ios::app);
	if (!os) {
		cerr << "파일 오픈 실패" << endl;
		exit(1);
	}
	os << endl;
	os << name;
	os << num;
	cout << "전화번호부가 수정됨";

}
int main() {
	ifstream is{ "phonenumber.txt" };
	if (!is) {
		cerr << "파일 오픈에 실패" << endl;
		exit(1);
	}
	string s;
	
	while (is) {
		is >> s;
		cout << s << endl;
	}
	cout << endl;
	changeinfo();

}