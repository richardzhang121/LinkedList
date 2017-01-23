#include <iostream>
#include <cstring>
#include "node.h"
#include "student.h"

Node::Node(Student* newStudent){
    student = newStudent;
    node = NULL;
}

Node::~Node(){
    delete student;
    node = NULL;
}

Node* Node::getNext(){
    return node;
}

Student* Node::getStudent(){
    return student;
}

void Node::setNext(Node* current){
    node = current;
}