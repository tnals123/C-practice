#include <iostream>
using namespace std;
class HeartRate {
private:
	string name;
	string lastname;
	int birthyear;
	int birthmonth;
	int birthday;
	int age;
	int maxheartrate;
	int goalheartrate;
public:
	explicit HeartRate(string asdf1, string asdf2, int num3, int num4, int num5) {
		name = asdf1;
		lastname = asdf2;
		birthyear = num3;
		birthmonth = num4;
		birthday = num5;

	}

	int getage() {
		age = 2021 - birthyear+1;
		return age;
	}
	int getmaxheartrate() {
		maxheartrate = 220 - age;
		return maxheartrate;
	}

	int getgoalheartrate() {
		goalheartrate = maxheartrate / 0.85;
		return goalheartrate;
	}
	void setname(string asdf) {
		name = asdf;
	}
	string getname() {
		return name;
	}
	void setlastname(string asdf) {
		lastname = asdf;
	}
	string getlastname() {
		return lastname;
	}
	void setbirthyear(int num) {
		birthyear = num;
	}
	int getbirthyear() {
		return birthyear;
	}
	void setbirthmonth(int num) {
		birthmonth = num;
	}
	int getbirthmonth() {
		return birthmonth;
	}
	void setbirthday(int num) {
		birthday = num;
	}
	int getbirthday() {
		return birthday;
	}
	
};


int main() {
	HeartRate asdf("¼ö¹Î", "Á¶", 2002, 8, 22);
	cout <<"your age is: "<< asdf.getage() << endl;
	cout <<"your maximum heartrate is : "<< asdf.getmaxheartrate() << endl;
	cout <<"your goal heartrate is : " << asdf.getgoalheartrate() << endl;

}






