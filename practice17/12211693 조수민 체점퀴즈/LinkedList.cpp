#include <iostream>
#include  "LinkedList.h"
using namespace std;

LinkedList::LinkedList(StudentNode* _head)
{
	head = _head;
}


void LinkedList::PrintAll()
{
	StudentNode* tmp = head;
	while (true)
	{
		cout << "name: " << tmp->getName() << endl;
		cout << "ID: " << tmp->getId() << endl;
		if (tmp->getNext() == NULL) break;
		else tmp = tmp->getNext();
	}
}
void LinkedList::Insert() {
	cin >> stname;
	cin >> stnum;

}