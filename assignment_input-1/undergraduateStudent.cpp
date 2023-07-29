/*
Name: Michelle_Silva, 5006988436, CS202 1003-2023, Assign 2
Description: basic input/output
Input: user/keyboard variables
Output: display outputting variables
*/

#include <iostream>
#include "undergraduateStudent.h"
using namespace std;
// student (inheritance), cs135 (composition), 
// cs202(composition)
// **************************************
//  default constructor
undergraduateStudent::undergraduateStudent()
{
    // Default no body
}
// **************************************
// **************************************
// **************************************
// **************************************
// parametrized constructor
undergraduateStudent::undergraduateStudent
(string ID, string fName, string lName) : 
student(ID, fName, lName)
// set the studentID, firstName, 
// and lastName member values.
{
    // No body
}
// functions to set grades for member classes
// **************************************
// setter functions
void undergraduateStudent::setCS135Grades
(int a1, int a2, int a3, int a4, int mE1, int mE2, int fE)
{
    ugCS135.setGrades(a1, a2, a3, a4, mE1, mE2, fE);
}
// **************************************
// setter functions
void undergraduateStudent::setCS202Grades
(int a1, int a2, int a3, int mE, int fE)
{
    ugCS202.setGrades(a1, a2, a3, mE, fE);
}
// functions to get letter grades from classes
// **************************************
// setter functions
char undergraduateStudent::getCS135LetterGrade()
{
    ugCS135.calculateLetterGrade();
    return ugCS135.getCourseGrade();
}
// **************************************
// getter functions
char undergraduateStudent::getCS202LetterGrade()
{
    ugCS202.calculateLetterGrade();
    return ugCS202.getCourseGrade();
}
// **************************************
// getter functions
double undergraduateStudent::getGPA()
{
    return gpa;
}
// **************************************
// functions to handle gpa
void undergraduateStudent::calculateGPA()
{
    // Calculate a student's 
    // GPA from their grades in cs135 
    // and cs202 courses

    // Get the letter grades from cs135 and cs202
    char gradeCS135 = ugCS135.getCourseGrade();
    char gradeCS202 = ugCS202.getCourseGrade();

    // Calculate grading points based on letter grades
    double pointsCS135 = 0.0;
    double pointsCS202 = 0.0;

    if (gradeCS135 == 'A')
    {
        pointsCS135 = 4.0;
    }
    else if (gradeCS135 == 'B')
    {
        pointsCS135 = 3.0;
    }
    else if (gradeCS135 == 'C')
    {
        pointsCS135 = 2.0;
    }
    else if (gradeCS135 == 'D')
    {
        pointsCS135 = 1.0;
    }
    else if (gradeCS135 == 'F')
    {
        pointsCS135 = 0.0;
    }

    if (gradeCS202 == 'A')
    {
        pointsCS202 = 4.0;
    }
    else if (gradeCS202 == 'B')
    {
        pointsCS202 = 3.0;
    }
    else if (gradeCS202 == 'C')
    {
        pointsCS202 = 2.0;
    }
    else if (gradeCS202 == 'D')
    {
        pointsCS202 = 1.0;
    }
    else if (gradeCS202 == 'F')
    {
        pointsCS202 = 0.0;
    }

    // Get the course credits from cs135 and cs202
    double creditsCS135 = ugCS135.getCourseCredits();
    double creditsCS202 = ugCS202.getCourseCredits();

    // Calculate the average weighted by course credits
    double gradePoints = (pointsCS135 * creditsCS135) 
    + (pointsCS202 * creditsCS202);
    double totalCredits = creditsCS135 + creditsCS202;

    // Update the gpa member variable
    gpa = gradePoints / totalCredits;
}
