/*
Name: Michelle_Silva, 5006988436, CS202 1003-2023, Assign 2
Description: basic input/output
Input: user/keyboard variables
Output: display outputting variables
*/
#include <iostream>
#include "cs202.h"
using namespace std;
// **************************************
// **************************************
// **************************************
// **************************************
// **************************************
//  default constructor
cs202::cs202() : 
course("Computer Science II", "CS 202", 3, 'F')
{
    asst1 = 0;
    asst2 = 0;
    asst3 = 0;
    midtermExam = 0;
    finalExam = 0;
}
// **************************************
// parametrized constructor
cs202::cs202(int a1, int a2, int a3, int mE, int fE) : 
course("Computer Science II", "CS 202", 3, 'F')
{
    asst1 = a1;
    asst2 = a2;
    asst3 = a3;
    midtermExam = mE;
    finalExam = fE;
}
// **************************************
// update the course values 
void cs202::setGrades
(int a1, int a2, int a3, int mE, int fE)
{
    asst1 = a1;
    asst2 = a2;
    asst3 = a3;
    midtermExam = mE;
    finalExam = fE;
}
// **************************************
// getter functions
int cs202::getAsst1()
{
    return asst1;
}
// **************************************
// getter functions
int cs202::getAsst2()
{
    return asst2;
}
// **************************************
// getter functions
int cs202::getAsst3()
{
    return asst3;
}
// **************************************
// getter functions
int cs202::getMidtermExam()
{
    return midtermExam;
}
// **************************************
// getter functions
int cs202::getFinalExam()
{
    return finalExam;
}
// **************************************
// getter functions
void cs202::setAsst1(int a1)
{
    asst1 = a1;
}
// **************************************
// setter functions
void cs202::setAsst2(int a2)
{
    asst2 = a2;
}
// **************************************
// setter functions
void cs202::setAsst3(int a3)
{
    asst3 = a3;
}
// **************************************
// setter functions
void cs202::setMidtermExam(int mE)
{
    midtermExam = mE;
}
// **************************************
// setter functions
void cs202::setFinalExam(int fE)
{
    finalExam = fE;
}
// **************************************
bool cs202::checkGrades()
{
    // Check that all grades are 
    // between 0 and 100 (inclusive)
    if (asst1 >= 0 
        && asst1 <= 100 
        && asst2 >= 0 
        && asst2 <= 100 
        && asst3 >= 0 
        && asst3 <= 100 
        && midtermExam >= 0 
        && midtermExam <= 100 
        && finalExam >= 0 
        && finalExam <= 100)
    {
        return true;
    }
    else
    {
        return false;
    }
}
// **************************************
void cs202::calculateLetterGrade()
{
    if (checkGrades())
    {

        // the average of all assignments = 50%
        double allAssign =
            (asst1 + asst2 + asst3) / 3.0;
        // the average of all midterms = 25%
        double allMidterm =
            (midtermExam) / 1.0;
        // the final exam = 25%
        double finalE =
            (finalExam) / 1.0;
        // total average
        double totalAvg =
            (allAssign * 0.5) 
            + (allMidterm * 0.25) 
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



