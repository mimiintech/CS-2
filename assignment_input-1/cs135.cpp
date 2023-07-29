/*
Name: Michelle_Silva, 5006988436, CS202 1003-2023, Assign 2
Description: basic input/output
Input: user/keyboard variables
Output: display outputting variables
*/
#include <iostream>
#include "cs135.h"
using namespace std;
// **************************************
//  default constructor
cs135::cs135() : course
("Computer Science I", "CS 135", 3, 'F')
// courseName, courseNumber, courseCredits, courseGrade
// From the course
//  set the following values for 
// the course member variables
{
    // initialize all of the member
    // values unique to the cs135 class
    asst1 = 0;
    asst2 = 0;
    asst3 = 0;
    asst4 = 0;
    midtermExam1 = 0;
    midtermExam2 = 0;
    finalExam = 0;
}
// **************************************
// parametrized constructor
cs135::cs135(int a1, int a2, int a3,
             int a4, int mE1, int mE2, int fE) : course
             ("Computer Science I", "CS 135", 3, 'F')
            // initialize the
            // course member variables
{
    // initialize all of the member
    // values unique to the cs135 class
    // order of passed parameters
    asst1 = a1;
    asst2 = a2;
    asst3 = a3;
    asst4 = a4;
    midtermExam1 = mE1;
    midtermExam2 = mE2;
    finalExam = fE;
}
// **************************************
// getter functions
int cs135::getAsst1()
{
    return asst1;
}
// **************************************
// getter functions
int cs135::getAsst2()
{
    return asst2;
}
// **************************************
// getter functions
int cs135::getAsst3()
{
    return asst3;
}
// **************************************
// getter functions
int cs135::getAsst4()
{
    return asst4;
}
// **************************************
// getter functions
int cs135::getMidtermExam1()
{
    return midtermExam1;
}
// **************************************
// getter functions
int cs135::getMidtermExam2()
{
    return midtermExam2;
}
// **************************************
// getter functions
int cs135::getFinalExam()
{
    return finalExam;
}
// **************************************
// setter functions
void cs135::setAsst1(int a1)
{
    asst1 = a1;
}
// **************************************
// setter functions
void cs135::setAsst2(int a2)
{
    asst2 = a2;
}
// **************************************
// setter functions
void cs135::setAsst3(int a3)
{
    asst3 = a3;
}
// **************************************
// setter functions
void cs135::setAsst4(int a4)
{
    asst4 = a4;
}
// **************************************
// setter functions
void cs135::setMidtermExam1(int mE1)
{
    midtermExam1 = mE1;
}
// **************************************
// setter functions
void cs135::setMidtermExam2(int mE2)
{
    midtermExam2 = mE2;
}
// **************************************
// setter functions
void cs135::setFinalExam(int fE)
{
    finalExam = fE;
}
// **************************************
// setter functions
void cs135::setGrades
(int a1, int a2, int a3, int a4, int mE1, int mE2, int fE)
{
    asst1 = a1;
    asst2 = a2;
    asst3 = a3;
    asst4 = a4;
    midtermExam1 = mE1;
    midtermExam2 = mE2;
    finalExam = fE;
}
// **************************************
// method for checking grades
bool cs135::checkGrades()
// values between 0 and 100 (inclusive).
{
    if (asst1 >= 0 
        && asst1 <= 100 
        && asst2 >= 0 
        && asst2 <= 100 
        && asst3 >= 0 
        && asst3 <= 100 
        && asst4 >= 0 
        && asst4 <= 100 
        && midtermExam1 >= 0 
        && midtermExam1 <= 100 
        && midtermExam2 >= 0 
        && midtermExam2 <= 100 
        && finalExam >= 0 
        && finalExam <= 100)
    {
        return true;
        // if all grades are in this range
        // function returns true
    }
    return false;
}
// **************************************
void cs135::calculateLetterGrade()
{
    if (checkGrades())
    {

    // the average of all assignments = 50%
        double allAssign =
         (asst1 + asst2 + asst3 + asst4) / 4.0;
    // the average of all midterms = 25%
        double allMidterm = 
        (midtermExam1 + midtermExam2) / 2.0;
// the final exam = 25%
    double finalE = 
    (finalExam) / 1.0;
    // total average
    double totalAvg =
        (allAssign * 0.5) + (allMidterm * 0.25) 
        + (finalE * 0.25);
    // set the courseGrade member variable
    if (totalAvg >= 90)
    {
        setCourseGrade('A');
        // back to char cGrade
        // from course.h
        }
        else if (totalAvg >= 80)
        {
            setCourseGrade('B');
        }
        else if (totalAvg >= 70)
        {
            setCourseGrade('C');
        }
        else if (totalAvg >= 60)
        {
            setCourseGrade('D');
        }
        else
        {
            setCourseGrade('F');
        }
    }
}