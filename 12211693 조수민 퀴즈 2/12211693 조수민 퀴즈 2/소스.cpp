#include <iostream>
#include <fstream>
#include <Windows.h>
#include <conio.h>
#include <string>
using namespace std;


void changeinfo() {
	string name;
	int num;
	cout << "�߰��ϰ� ���� �̸�: ";
	cin >> name;
	cout << "�߰��ϰ� ���� ��ȭ��ȣ: ";
	cin >> num;
	ofstream os("phonenumber.txt", ios::app);
	if (!os) {
		cerr << "���� ���� ����" << endl;
		exit(1);
	}
	os << endl;
	os << name;
	os << num;
	cout << "��ȭ��ȣ�ΰ� ������";

}
int main() {
	ifstream is{ "phonenumber.txt" };
	if (!is) {
		cerr << "���� ���¿� ����" << endl;
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