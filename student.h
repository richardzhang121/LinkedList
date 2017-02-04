#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string.h>


//student class with four variables (gpa, id, first name, last name)
class Student{
 public:
  Student();
  ~Student();
  void printStudent();
  int getId();
  float getGpa();
 private:
  char firstName[80];
  char lastName[80];
  int id;
  float gpa;
};

#endif
