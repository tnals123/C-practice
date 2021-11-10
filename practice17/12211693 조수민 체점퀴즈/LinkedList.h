#pragma once
#include "StudentNode.h"
#ifndef LinkedList_H
#define LinkedList_H

class LinkedList {
private:
	StudentNode* head;
	char stname;
	int stnum;
public:
	LinkedList(StudentNode*);
	

	void PrintAll();
	void Insert();
};


#endif W2_STUDENTLIST_H