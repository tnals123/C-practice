#include <iostream>
using namespace std;

class Student {
private:
	string name;
	int num;
public:
	Student(string nm, int num1) {
		name = nm;
		num = num1;
	
	}
	void GetStudentInfo() {
		cout << name << num << "asdf" << endl;
	}
};
class MyClass {
	string className;
	Student* p;
	int studentNumber;
	
public:
	MyClass(Student* b) {
		this->p = b;
		this->getmyclass();
		
	}
	void getmyclass() {
		p->GetStudentInfo();
	}
	void set(string name,int num) {
		className = name;
		studentNumber = num;

	}
};

int main() {
	Student* tnals = new Student("tnals", 123);
	/*MyClass s[3] = { MyClass(tnals),0,0};
	s[0].getmyclass();*/
	tnals->GetStudentInfo();
	delete tnals;


}