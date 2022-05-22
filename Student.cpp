#include "Student.h"
#include <iostream>

// Assign studentId and name
void Student::assignDetails(int sId,char sname) {
  studentId=sId;
  strcpy(sname,name);
}

// Display StudentId and Name
void Student::display() {
  std::cout<<"Student Details"<<studentId<<name<<std::endl;
}
