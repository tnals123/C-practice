#include <iostream>
#include <fstream>
#include <Windows.h>
using namespace std;

class Student {
private:
	string name;
	string stdnum;
	string score;
	Student* next;
	friend class StudentList;
public:
	Student();
	Student(string name, string stdnum, string score);
	void setStudent();
	void setNext(Student* next);
	Student* getNext();
	string getName();
	string getStdNum();
	string getScore();
	void printStudent();
	
};

class StudentList
{
private:
	Student* head = nullptr;

public:
	void printAll();
	void setHead(Student*);
	void insert(Student*);
	int Delete();
	void Find();
};

void Student::setStudent() {
	cout << "Enter a name: ";
	cin >> name;
	cout << "Enter a stdNum: ";
	cin >> stdnum;
	cout << "Enter a score: ";
	cin >> score;
	cout << endl;
}

Student::Student() {
	next = nullptr;
}
Student::Student(string name, string stdnum, string score) {
	this->name = name;
	this->stdnum = stdnum;
	this->score = score;
	this->next = nullptr;
}
void Student::setNext(Student* node) {
	next = node;
}

Student* Student::getNext() {
	return next;
}

string Student::getName() {
	return name;
}

string Student::getStdNum() {
	return stdnum;
}

string Student::getScore() {
	return score;
}

void Student::printStudent() {
	cout << "name: " << this->name << endl;
	cout << "number: " << this->stdnum << endl;
	cout << "score: " << this->score << endl << endl;
}

void StudentList::printAll() {
	if (head == nullptr) {
		cout << "empty list" << endl;
	}
	else {
		Student* temp = head;
		while (true) {
			temp->printStudent();
			if (temp->next == nullptr) break;
			else {
				temp = temp->next;
			}
		}
	}
}

void StudentList::setHead(Student* node) {
	head = node;
}

void StudentList::insert(Student* node) {

	if (head == nullptr)
	{
		head = node;
	}
	else
	{
		Student* temp = head;
		while (true) {
			if (temp->next == nullptr) {
				temp->next = node;
				break;
			}
			else {
				temp = temp->next;
			}
		}
	}
}

int StudentList::Delete() {
	string n;
	Student* a, * b;
	a = head;
	b = head;
	cout << "Who will you delete?: ";
	cin >> n;
	while (a) {
		if (a->name == n) {
			if (a == head) {
				head = head->next;
				return 1;
			}
			a = a->next;
			return 1;
		}
		b = a;
	}
}

void StudentList::Find() {
	string f;
	Student* c;
	c = head;
	cout << "who will you find?: ";
	cin >> f;
	while (c) {
		if (c->name == f) {
			cout << c->getName() << " " << c->getStdNum() << " " << c->getScore();
			break;
		}
	}

}

int main(void) {

	StudentList test;
	//load Student info from score.txt
	ifstream is("score.txt");
	if (!is) {
		cerr << "fail to open file" << endl;
		exit(1);
	}
	string tname, tnum, tscore;
	while (!is.eof()) {

		is >> tname >> tnum >> tscore;
		Student* temp = new Student(tname, tnum, tscore);
		test.insert(temp);
	}
	is.close();
	test.printAll();
	test.Find();
	test.Delete();
	//ofstream os("score.txt", ios::app);
	//if (!os) {
	//	cerr << "open file fail" << endl;
	//	exit(1);
	//}
	//// insert node
	//Student* newnode = new Student("ff", "1230", "80");
	//os << "\n" << newnode->getName() << " " << newnode->getStdNum() << " "
	//	<< newnode->getScore();
	//os.close();

	//return 0;
}