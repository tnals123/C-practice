#include <iostream>
#include <iomanip>
using namespace std;

#include "StudentNode.h"
#include "LinkedList.h"

int main()
{
    const char* name[3] = { "kim", "lee", "park" };
    StudentNode StudentA(name[0], 001);
    StudentNode StudentB(name[1], 002);
    StudentNode StudentC(name[2], 003);
  
    StudentA.setNext(&StudentB);
    StudentB.setNext(&StudentC);


    LinkedList StudentList(&StudentA);
    StudentList.PrintAll();
}