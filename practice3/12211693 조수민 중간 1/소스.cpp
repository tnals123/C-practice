#include <iostream>
#include "���.h"
using namespace std;

Complex::Complex() {
	cout << "���Ҽ��� ���� �κ��� �����ּ���: ";
	cin >> num1;
	cout << "���Ҽ��� ���Ҽ� �κ��� �����ּ���: ";
	cin >> num1_st;
	cout << "�ι� ° ���Ҽ��� ���� �κ��� �����ּ���: ";
	cin >> num2;
	cout << "�ι� ° ���Ҽ��� ���Ҽ� �κ��� �����ּ���: ";
	cin >> num2_st;
}
void Complex::Print() {
	cout << num1 << "+" << num1_st << endl;
	cout << num2 << "+" << num2_st << endl;
}
void Complex::Add() {
	int result1 = num1 + num2;
	int result2 = int(num1_st[0]) + int(num2_st[0]);

	cout << "���� ����� " << result1 << "+" << result2 << "i" << " �Դϴ�.";
	
}


int main() {
	Complex qhrthtn;
	qhrthtn.Print();
	qhrthtn.Add();
	
}