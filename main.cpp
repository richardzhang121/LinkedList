#include <iostream>
#include <iomanip>
#include <cstring>

#include "student.h"
#include "node.h"

int main(){
  Student* aStudent = new Student(100);
  Student* bStudent = new Student(400);
  
  Node* aNode = new Node(aStudent);
  Node* bNode = new Node(bStudent);
  
  aNode -> setNext(bNode);
  cout << aNode() -> getNext() -> getStudent() -> getID() << endl;
  
  return 0;
}