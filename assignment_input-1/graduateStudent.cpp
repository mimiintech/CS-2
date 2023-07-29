/*
Name: Michelle_Silva, 5006988436, CS202 1003-2023, Assign 2
Description: basic input/output
Input: user/keyboard variables
Output: display outputting variables
*/
#include <iostream>
#include "graduateStudent.h"
using namespace std;
// student, cs677
// **************************************
//  default constructor
graduateStudent::graduateStudent()
{
    // Default no body
}
// **************************************
// parametrized constructor
graduateStudent::graduateStudent
(string ID, string fName, string lName) : 
student(ID, fName, lName)
// set the studentID, firstName,
// and lastName member values.
{
    // No body
}
// **************************************
// setter functions
void graduateStudent::setCS677Grades(int fE)
{
    // calls the setGrades(...) 
    // function from cs677.h
    grCS677.setGrades(fE);
}
// **************************************
// getter functions
// functions to get letter grades from classes
char graduateStudent::getCS677LetterGrade()
{
    grCS677.calculateLetterGrade();
    return grCS677.getCourseGrade();

}
// **************************************
// getter functions
double graduateStudent::getGPA()
{
    return gpa;
}
// **************************************
void graduateStudent::calculateGPA()
{
    // Calculate a student's GPA from their grades in the cs677 course
    // Get the letter grade from cs677
    char gradeCS677 = grCS677.getCourseGrade();

    // Calculate the grade points based on the letter grade
    double pointsCS677 = 0.0;

    if (gradeCS677 == 'A')
    {
        pointsCS677 = 4.0;
    }
    else if (gradeCS677 == 'B')
    {
        pointsCS677 = 3.0;
    }
    else if (gradeCS677 == 'C')
    {
        pointsCS677 = 2.0;
    }
    else if (gradeCS677 == 'D')
    {
        pointsCS677 = 1.0;
    }
    else if (gradeCS677 == 'F')
    {
        pointsCS677 = 0.0;
    }

    // Get the course credits from cs677
    double creditsCS677 = grCS677.getCourseCredits();

    // Calculate the GPA
    double gradePoints = pointsCS677 * creditsCS677;
    double totalCredits = creditsCS677;

    // Update the gpa member variable
    gpa = gradePoints / totalCredits;
}
