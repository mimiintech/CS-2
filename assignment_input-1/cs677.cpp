/*
Name: Michelle_Silva, 5006988436, CS202 1003-2023, Assign 2
Description: basic input/output
Input: user/keyboard variables
Output: display outputting variables
*/
#include <iostream>
#include "cs677.h"
using namespace std;
// **************************************
//  default constructor
cs677::cs677() : course
// set the following values:
("Analysis of Algorithms", "CS 677", 4, 'F')
{
    // initializing the member values of the
    // cs677 class
        finalExam = 0;
}
// **************************************
// parametrized constructor
cs677::cs677(int fE) : course
("Analysis of Algorithms", "CS 677", 4, 'F')
{
    finalExam = fE;
}
// **************************************
// function for calculating letter grade
void cs677::calculateLetterGrade()
{
    // calculates the letter grade for the course
    // based on the grade of the finalExam.
    if (finalExam >= 90)
    {
        // set the courseGrade
        setCourseGrade('A');
    }
    else if (finalExam >= 80)
    {
        setCourseGrade('B');
    }
    else if (finalExam >= 70)
    {
        setCourseGrade('C');
    }
    else if (finalExam >= 60)
    {
        setCourseGrade('D');
    }
    else
    {
        setCourseGrade('F');
    }
}
// **************************************
// getter functions
int cs677::getFinalExam()
{
    return finalExam;
}
// **************************************
// setter functions
void cs677::setFinalExam(int fE)
{
    finalExam = fE;
}
// **************************************
// setter functions
void cs677::setGrades(int fE)
{
    finalExam = fE;
}
// **************************************
// function for checking grades
bool cs677::checkGrades()
{
    // finalExam has a value
    // between 0 and 100 (inclusive
    return (finalExam >= 0 && finalExam <= 100);
}
// **************************************