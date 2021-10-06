#include <iostream>
using namespace std;

//class StudentNode {
//public:
//	StudentNode(const char* name, int num, StudentNode*);
//		
//	StudentNode(const char* name, int num) {
//		this->name = name;
//		this->id = num;
//		this->next = NULL;
//	}
//	void setNext(StudentNode* next) {
//		this->next = next;
//	}
//	StudentNode* getNext() {
//		return next;
//	}
//private:
//	const char* name;
//	int id;
//	StudentNode* next;
//};
//int main() {
//	const char* name[3] = {"kim", "lee", "park"};
//	StudentNode studentA(name[0], 1111);
//	StudentNode studentB(name[1], 2222);
//	StudentNode studentC(name[2], 3333);
//	studentA.setNext(&studentA);
//	studentB.setNext(&studentC);
//}

int main() {
	int a[3] = { 1,2,3 };
	int* aptr = a;
	cout << aptr << endl;
	cout << a;
}