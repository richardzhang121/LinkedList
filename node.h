#ifndef NODE_H
#define NODE_H
#include <iostream>
#include "student.h"

using namespace std;

class Node{
    public:
        Node* getNext();
        Student* getStudent();
        void setNext(Node*);
        Node(Student*); //constructor
        ~Node(); //destructor
    protected:
        Student* student;
        Node* node;
};

#endif