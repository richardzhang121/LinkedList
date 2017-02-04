//includes similar to imports from java
#include <iostream>
#include <cstring>
#include <iomanip>
#include "student.h"
#include "node.h"

using namespace std;

void addStudent(Node* head, Student* newStudent); // add student
void printStudents(Node* head); // print student
void deleteStudent(Node* current, Node* previous, int deleteId); // delete student
float getAverage(Node* head, int counter, float total); // average all gpa
void deleteHead(Node* head); // delete head node

int main(){
  Node* head = new Node(NULL); //sets new node to null
  char input[20]; 
  bool running = true;
  while (running == true){ //command line loop
    cout << "Commands: ADD, PRINT, DELETE, AVERAGE, HELP, and QUIT" << endl;
    cin.get(input,20);
    cin.ignore();
    if (!strcmp(input,"PRINT")){ // calls print
      printStudents(head->getNext());
    }
    else if (!strcmp(input, "ADD")){ // calls add
      addStudent(head,new Student);
    }
    else if (!strcmp(input, "DELETE")){ // calls delete
      bool deleted = false;
      int deleteId;
      cout << "Please give an ID to delete" << endl;
      cin >> deleteId;
      cin.ignore();
      deleteStudent(head->getNext(), head, deleteId);
    }
    else if (!strcmp(input, "HELP")){ //lists possible commands
      cout << "Commands: ADD, PRINT, DELETE, AVERAGE, HELP, and QUIT" << endl;
    }
    else if (!strcmp(input, "AVERAGE")){
      cout << "The average GPA is: " << setprecision(2) <<fixed << getAverage(head->getNext(),0,0) << endl;
    }
    else if (!strcmp(input, "QUIT")){
      running = false;
    }
    else{
      cout << "No such command: " <<  input << endl;
      cout << "Type HELP for a list of commands" << endl;
    }
  }
  //cleanup
  deleteHead(head); // deletes head
}
void printStudents(Node* head){ //go throught the list and print out thier info
  if (!head){return;}
  head->getStudent()->printStudent();
  if (head->getNext()){
    printStudents(head->getNext());
  }
}
void addStudent(Node* head, Student* newStudent ){ // adds a new student
  if (!head->getNext()){
    head->setNext(new Node(newStudent));
  }
  else if(head->getNext()->getStudent()->getId() > newStudent->getId()){
    Node* temp = head->getNext();
    head->setNext(new Node(newStudent)); 
    head->getNext()->setNext(temp);
  }
  else{
    addStudent(head->getNext(),newStudent);
  }
}
void deleteStudent(Node* current, Node* previous, int deleteId){ // deletes student
  if (current->getStudent()->getId() == deleteId){
    previous->setNext(current->getNext());
    delete current;
  }
  else if(current->getNext()){
    deleteStudent(current->getNext(),current, deleteId);
  }
  else{
    cout << "No entries with ID: " << deleteId << endl;
  }
} 
float getAverage(Node* head, int counter, float total){ // gets average of all students
  total += head->getStudent()->getGpa();
  counter++;
  if(head->getNext()){
    return getAverage(head->getNext(), counter, total);
  }
  else{
    return total/counter;
  }
}
void deleteHead(Node* head){ // delete head node
  if (head->getNext()){
    deleteHead(head->getNext());
  }
  delete head;
}
