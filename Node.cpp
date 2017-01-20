#include "Node.h"
#include <iostream>

Node::Node(){
	student = NULL;
	next = NULL;
};

Node::Node(Student* stud){
	student = stud;
	next = NULL;
};

Node::~Node(){
	delete student;
	delete next;
};

Node* Node::getNext(){
	return next;
};

Student* Node::getStudent(){
	return student;
};

void Node::setNext(Node* node){
	next = node;
};

void Node::setStudent(Student* stud){
	student = stud;
};