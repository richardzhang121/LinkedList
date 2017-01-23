#include "student.h"
#include <iostream>
#include <cstring>

using namespace std;

Student::Student(int newID){
    ID = newID;
}

int Student::getID(){
    return ID;
}