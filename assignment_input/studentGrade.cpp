/*
Name: Michelle_Silva, 5006988436, CS202 1003-2023, Assign 2
Description: basic input/output
Input: user/keyboard variables
Output: display outputting variables
*/
#include "studentGrade.h"
#include "fileInputOutput.h"
#include <iostream>
// #include <fstream>
using namespace std;
// Implement the class functions
// default constructor
// initialize all of the
// member variables
studentGrade::studentGrade()
{
    studentID = "";
    firstName = "";
    lastName = "";
    asst1 = 0;
    asst2 = 0;
    asst3 = 0;
    midtermExam = 0;
    finalExam = 0;
}
// ********************************************************
// Align with the private members
studentGrade::studentGrade
(string ID, string fName, string lName, int a1,
 int a2, int a3, int midE, int finE){

studentID = ID;
firstName = fName;
lastName = lName;
asst1 = a1;
asst2 = a2;
asst3 = a3;
midtermExam = midE;
finalExam = finE;
}
// ********************************************************
// Align with the private members
void studentGrade::setStudentGrade
(string ID, string fName, string lName, int a1,
int a2, int a3, int midE, int finE) {
studentID = ID;
firstName = fName;
lastName = lName;
asst1 = a1;
asst2 = a2;
asst3 = a3;
midtermExam = midE;
finalExam = finE;
}
// ********************************************************
// void is a setter function
// that updates the studentID
// value with the string provided.
// setter function for studentID
void studentGrade::setStudentID(string ID)
{
    studentID = ID;
}
// ********************************************************
//  getter function that returns the value
// currently assigned to the studentID member variable.
string studentGrade::getStudentID() const
{
    return studentID;
}
// ********************************************************
// getter function that returns the value
// currently assigned to the firstName member variable.
string studentGrade::getFirstName() const{
    return firstName;
}
// ********************************************************
//  getter function that returns the value
// currently assigned to the lastName member variable.
string studentGrade::getLastName() const{
    return lastName;
}
// ********************************************************
// returns the value currently
// assigned to the asst1 member variable.
int studentGrade::getAsst1() const{
    return asst1;
}
// ********************************************************
//  getter function that returns the value currently
// assigned to the asst2 member variable.
int studentGrade::getAsst2() const
{
    return asst2;
}
// ********************************************************
// getter function that returns the value currently
// assigned to the asst3 member variable.
int studentGrade::getAsst3() const
{
    return asst3;
}
// ********************************************************
// getter function that returns the value
// currently assigned to the midtermExam member variable.
int studentGrade::getMidtermExam() const
{
    return midtermExam;
}
// ********************************************************
// getter function that returns the value currently
// assigned to the finalExam member variable.
int studentGrade::getFinalExam() const
{
    return finalExam;
}
// ********************************************************
//  function that checks that all grade variables
bool studentGrade::checkScores() {
    // greater than or equal to 0 and
    // less than or equal to 100
     if (asst1 >= 0 && asst1 <= 100 &&
            asst2 >= 0 && asst2 <= 100 &&
            asst3 >= 0 && asst3 <= 100 &&
            midtermExam >= 0 && midtermExam <= 100 &&
            finalExam >= 0 && finalExam <= 100)
    {
        return true;
    } else {
        return false;
    }
}
// ********************************************************
// function that calculates a student’s letter
//     grade in the course.
char studentGrade::calculateLetterGrade()
{
    // assignments total = 50% of the overall grade
    // midterm & final exam = 25% of the overall grade
    // average score
    double assGrade = (asst1 + asst2 + asst3) / 3.0;
    double totalGrade 
    = assGrade * 0.5 + 
    midtermExam * 0.25 + finalExam * 0.25;
    // 0.5 since it is 50%
    // 0.25 since it is both 25%

// above or equal to 90 
    if (totalGrade >= 90)
    {
        return 'A';
    }
    // above or equal to 80
    else if (totalGrade >= 80)
    {
        return 'B';
    }
    // above or equal to 70
    else if (totalGrade >= 70)
    {
        return 'C';
    }
    // above or equal to 60
    else if (totalGrade >= 60)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
}

// ********************************************************
// print the current value of each class
// member to stdout.
void studentGrade::printStudentGrade() const
{
// print out all
// the private members
    cout << "Student ID: " << studentID << endl;
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Assignment 1: " << asst1 << endl;
    cout << "Assignment 2: " << asst2 << endl;
    cout << "Assignment 3: " << asst3 << endl;
    cout << "Midterm Exam: " << midtermExam << endl;
    cout << "Final Exam: " << finalExam << endl;
}
// ********************************************************
// destructor
// clears 
studentGrade::~studentGrade()
{
    // Nothing added to the body of function
}
