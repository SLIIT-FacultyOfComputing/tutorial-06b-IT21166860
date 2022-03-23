#include "Student.h"
#include <iostream>
#include<cstring>
// Assign studentId and name
Student::assignDetails() {
  studentID=id;
  strcpy(name,n);
  
}

// Display StudentId and Name
Student::display() {
  cout << "student ID :" << studentID;
  cout << endl;
  cout << "Name" << name;
}
