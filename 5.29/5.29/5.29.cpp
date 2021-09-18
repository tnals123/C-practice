#include <iostream>
#include <cmath>
using namespace std;
class asdf {
private:
	double interest;
public:
	void setinter(double num) {
		interest = num;
	}
	double getinter() {
		return interest;
	}
};
int main() {
	asdf whtnals;
	whtnals.setinter(0.05);
	double principal = 24;
	cout << "이자가 " << whtnals.getinter() << " 일때," << endl;
	for (int i = 0; i < 1627; i++) {
		double amount = principal * pow(1.0 + whtnals.getinter(), i);

		if (i == 1626) { cout << i << " 년 후 금액은 " << amount << "달러 입니다" << endl; }


	}
	whtnals.setinter(0.06);

	cout << "이자가 " << whtnals.getinter() << " 일때," << endl;
	for (int i = 0; i < 1627; i++) {
		double amount = principal * pow(1.0 + whtnals.getinter(), i);

		if (i == 1626) { cout << i << " 년 후 금액은 " << amount << "달러 입니다" << endl; }

	}
	whtnals.setinter(0.07);

	cout << "이자가 " << whtnals.getinter() << " 일때," << endl;
	for (int i = 0; i < 1627; i++) {
		double amount = principal * pow(1.0 + whtnals.getinter(), i);
		if (i == 1626) { cout << i << " 년 후 금액은 " << amount << "달러 입니다" << endl; }

	}
	whtnals.setinter(0.08);

	cout << "이자가 " << whtnals.getinter() << " 일때," << endl;
	for (int i = 0; i < 1627; i++) {
		double amount = principal * pow(1.0 + whtnals.getinter(), i);
		if (i == 1626) { cout << i << " 년 후 금액은 " << amount << "달러 입니다" << endl; }

	}
	whtnals.setinter(0.09);

	cout << "이자가 " << whtnals.getinter() << " 일때," << endl;
	for (int i = 0; i < 1627; i++) {
		double amount = principal * pow(1.0 + whtnals.getinter(), i);

		if (i == 1626) { cout << i << " 년 후 금액은 " << amount << "달러 입니다" << endl; }


	}

	whtnals.setinter(0.1);

	cout << "이자가 " << whtnals.getinter() << " 일때," << endl;
	for (int i = 0; i < 1627; i++) {
		double amount = principal * pow(1.0 + whtnals.getinter(), i);
		if (i == 1626) { cout << i << " 년 후 금액은 " << amount << "달러 입니다" << endl; }

	}


}