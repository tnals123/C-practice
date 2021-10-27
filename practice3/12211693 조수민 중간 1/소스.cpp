#include <iostream>
#include "헤더.h"
using namespace std;

Complex::Complex() {
	cout << "복소수의 정수 부분을 적어주세요: ";
	cin >> num1;
	cout << "복소수의 복소수 부분을 적어주세요: ";
	cin >> num1_st;
	cout << "두번 째 복소수의 정수 부분을 적어주세요: ";
	cin >> num2;
	cout << "두번 째 복소수의 복소수 부분을 적어주세요: ";
	cin >> num2_st;
}
void Complex::Print() {
	cout << num1 << "+" << num1_st << endl;
	cout << num2 << "+" << num2_st << endl;
}
void Complex::Add() {
	int result1 = num1 + num2;
	int result2 = int(num1_st[0]) + int(num2_st[0]);

	cout << "덧셈 결과는 " << result1 << "+" << result2 << "i" << " 입니다.";
	
}


int main() {
	Complex qhrthtn;
	qhrthtn.Print();
	qhrthtn.Add();
	
}