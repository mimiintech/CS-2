/*
Name: Michelle_Silva, 5006988436, CS202 1003-2023, Assign 2
Description: basic input/output
Input: user/keyboard variables
Output: display outputting variables
*/
#include <iostream>
#include "course.h"
using namespace std;
// **************************************
//  default constructor
course::course()
{
    courseName = "";
    courseNumber = "";
    courseCredits = 0;
    courseGrade = ' ';
}
// **************************************
// parametrized constructor
course::course
(string cName, string cNumber, int cCredits, char cGrade)
{
    // set the member variables
    courseName = cName;
    courseNumber = cNumber;
    courseCredits = cCredits;
    courseGrade = cGrade;
    // courseGrade should NOT have a value
    // besides the characters A, B, C, D, F.
    // if not courseGrade, then error
    if (cGrade == 'A' 
    || cGrade == 'B' 
    || cGrade == 'C' 
    || cGrade == 'D' 
    || cGrade == 'F')
    {
    // set it 
        courseGrade = cGrade;
    }
    else {
        cout << "Error course grade.";
    // does not update
        courseGrade = ' ';
    }
}
// **************************************
// setter functions
void course::setCourseInfo
(string cName, string cNumber, int cCredits, char cGrade)
{
    courseName = cName;
    courseNumber = cNumber;
    courseCredits = cCredits;
    courseGrade = cGrade;
    // courseGrade should NOT have a value
    // besides the characters A, B, C, D, F.
    // if not courseGrade, then error
    if (cGrade == 'A' 
    || cGrade == 'B'
     || cGrade == 'C' 
     || cGrade == 'D' 
     || cGrade == 'F')
    {
        // set it
        courseGrade = cGrade;
    }
    else
    {
        cout << "Error course grade.";
        // does not update
        courseGrade = ' ';
    }
}
// **************************************
// getter functions
string course::getCourseName()
{
    return courseName;
}
// **************************************
// getter functions
string course::getCourseNumber()
{
    return courseNumber;
}
// **************************************
// getter functions
int course::getCourseCredits()
{
    return courseCredits;
}
// **************************************
// getter functions
char course::getCourseGrade()
{
    return courseGrade;
}
// **************************************
// setter functions
void course::setCourseName(string cName)
{
    courseName = cName;
}
// **************************************
// setter functions
void course::setCourseNumber(string cNumber)
{
    courseNumber = cNumber;
}
// **************************************
// setter functions
void course::setCourseCredits(int cCredits)
{
    courseCredits = cCredits;
}
// **************************************
// setter functions
void course::setCourseGrade(char cGrade)
{
    if (cGrade == 'A' 
    || cGrade == 'B' 
    || cGrade == 'C' 
    || cGrade == 'D' 
    || cGrade == 'F')
    {
        // updates the value
            courseGrade = cGrade;
    }
    else
    {
        cout << "Error course grade." << endl;
        // does not update
    }
}
// **************************************
void course::printCourseInfo() const
{
    cout << "courseName: " << courseName << endl;
    cout << "courseNumber: " << courseNumber << endl;
    cout << "courseCredits: " << courseCredits << endl;
    cout << "courseGrade: " << courseGrade << endl;
}
// **************************************
// function for printing course info
course::~course()
{
    // Destructor no body
}