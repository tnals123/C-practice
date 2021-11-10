#pragma once
#pragma once
#ifndef StudentNode_H
#define StudentNode_H

class StudentNode
{
private:
	const char* name;
	int id;
	StudentNode* next;

public:
	StudentNode(const char*, int, StudentNode*);
	StudentNode(const char*, int);

	void setName(const char*);
	const char* getName();

	void setId(int);
	int getId();

	void setNext(StudentNode*);
	StudentNode* getNext();
};

#endif W2_STUDENTNODE_H