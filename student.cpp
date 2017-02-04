#include <iostream>
#include <cstring>
#include <iomanip>
#include "student.h"

using namespace std;

//constructor
Student::~Student(){

}
//deconstructor
Student::Student(){
  cout << "What is the first name?" << endl;
  cin.get(firstName,30);
  cin.ignore();
  cout << "What is the last Name" << endl;
  cin.get(lastName,30);
  cin.ignore();
  cout << "What is the ID" << endl;
  cin >> id;
  cin.ignore();
  cout << "What is the GPA?" << endl;
  cin >> gpa;
  cin.ignore();
  cout << "Name: " << firstName << " " << lastName << ", ID: " << id << ", GPA: " << setprecision(2) <<fixed << gpa << endl;
}

//gets ID
int Student::getId(){
  return id;
}

//gets GPA
float Student::getGpa(){
  return gpa;
}

//prints student
void Student::printStudent() {
  cout << "Student: " << firstName << " " << lastName << ", " << id << ", " << gpa << endl;
}
