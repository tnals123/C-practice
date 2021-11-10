#include <iostream>
#include "StudentNode.h"
using namespace std;

StudentNode::StudentNode(const char* _name, int _id, StudentNode* _next) {
    name = _name;
    id = _id;
    next = _next;
}
StudentNode::StudentNode(const char* _name, int _id) {
    name = _name;
    id = _id;
}
void StudentNode::setName(const char* _name) {
    name = _name;
}
const char* StudentNode::getName() {
    return name;
}
void StudentNode::setId(int _id) {
    id = _id;
}
int StudentNode::getId() {
    return id;
}
void StudentNode::setNext(StudentNode* _next) {
    this->next = _next;
}
StudentNode* StudentNode::getNext() {
    return next;
}