/*
Name: Michelle_Silva, 5006988436, CS202 1003-2023, Assign 2
Description: basic input/output
Input: user/keyboard variables
Output: display outputting variables
*/
#include <iostream>
#include "student.h"
using namespace std;
// **************************************
//  default constructor
student::student()
{
    studentID = "";
    firstName = "";
    lastName = "";
}
// **************************************
// parametrized constructor
student::student
(string ID, string fName, string lName)
{
    studentID = ID;
    firstName = fName;
    lastName = lName;
}
// **************************************
// getter functions
string student::getStudentID()
{
    return studentID;
}
// **************************************
// getter functions
string student::getFirstName()
{
    return firstName;
}
// **************************************
// getter functions
string student::getLastName()
{
    return lastName;
}
// **************************************
//  setter function
void student::setStudentInfo
(string ID, string fName, string lName)
{
    studentID = ID;
    firstName = fName;
    lastName = lName;
}
// **************************************
//  setter function
void student::setStudentID(string ID)
{
    studentID = ID;
}
// **************************************
//  setter function
void student::setFirstName(string fName)
{
    firstName = fName;
}
// **************************************
//  setter function
void student::setLastName(string lName)
{
    lastName = lName;
}
// **************************************
// print student information
void student::printStudentInfo() const
{
    cout << "Student ID: " << studentID << endl;
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
}
// **************************************
// destructor
student::~student()
{
    // Destructor with no body
}
// **************************************