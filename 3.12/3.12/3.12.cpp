#include <iostream>
using namespace std;
class Date {
private:
	int month;
	int day;
	int year;
public:
	explicit Date(int num1, int num2, int num3) {
		month = num1;
		day = num2;
		year = num3;
	}
	 void setmonth(int num) {
		if (num >= 1 && num <= 12) {
			month = num;
			
		}
		else {
			month = 1;
			
		}
	}
	int setmonth() {
		return month;
	}
	void setday(int num) {
		day = num;
		
	}
	int getday() {
		return day;

	}
	void setyear(int num) {
		year = num;
		
	}
	int getyear() {
		return year;

	}
	void displayDate() {
		cout << year << "/" << month << "/" << day << endl;

	}

};
int main() {
	Date asdf(12, 6, 2021);
	asdf.displayDate();
	asdf.setday(4);
	asdf.setmonth(4);
	asdf.setyear(2021);
	asdf.displayDate();
}