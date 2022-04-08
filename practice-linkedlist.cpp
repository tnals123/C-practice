#include <iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

class linkedlist{
private:
    node* head;
    node* tail;
    int listsize;
public:
    linkedlist(){
        head = NULL;
        tail = NULL;
        listsize = 0;
    }
    bool empty(){
        if (listsize == 0){
            return true;
        }
        else{
            return false;
        }
   }
   void append(int data){
       node* newNode = new node;
       newNode ->data = data;
       newNode ->next = NULL;
       if (empty()){
           head = tail = newNode;
       }
       else{
           tail->next = newNode;
           tail = newNode;
       }
       listsize ++;
   }
    
};





int main(){
    linkedlist list;
    list.empty();
}