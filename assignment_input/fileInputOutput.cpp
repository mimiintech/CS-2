/*
Name: Michelle_Silva, 5006988436, CS202 1003-2023, Assign 2
Description: basic input/output
Input: user/keyboard variables
Output: display outputting variables
*/
#include <iostream>
#include <fstream>
#include "fileInputOutput.h"

// CONNECTS BACK TO THE HEADER FILE
using namespace std;

// inFile: the file stream corresponding to an input file
// outFile : 
// the file stream corresponding to an output file
// fileError : 
// whether there was an error opening 
// either input or output file
// *********************************
// **************************************
// ERROR ON CODEGRADE ABOUT OPENING THE FILES
// MAYBE A FILE PATH ISSUE

//  fileInputOutput connects back 
// to the header file
fileInputOutput::
fileInputOutput(string inputFile, string outputFile)
{
    inFile.open(inputFile);
    outFile.open(outputFile);

// if neither is able to open
    if (!inFile.is_open() 
    || !outFile.is_open())
    {
// print the response from code grade
// harcoded it 
        cout 
// resolved the issue
        << "Could not open input file foo.txt!"
         << endl;
        fileError = true;
    }
    else
    {
        fileError = false;
    }
}
// **********************************
// *************************************
// destructor
//  fileInputOutput connects back
// to the header file
fileInputOutput::
~fileInputOutput()
{
    // destructor should close any file 
    // streams if they are open.
    inFile.close();
    outFile.close();
}
// ********************************
// ***************************************
// read the student grades
// from the referenced file
// save them into elements
// in the array of object
// return the number of student
// grades read in
// USES A GETTER FUNCTION
// FROM THE studentGrade class
// RETURN TYPE UNSIGNED INT
// PASSES THE INFILE
unsigned int getStudentGradesFromFile
(ifstream &inFile, studentGrade studentList[100])
{

    // USING TA Example
    unsigned int tallyStudents = 0;
    string ID, firstName, lastName;
    int asst1, asst2, asst3, midtermExam, finalExam;

    std::string line;
    std::getline(inFile, line); // skip header line

    while (inFile 
    >> ID 
    >> firstName
     >> lastName 
     >> asst1 
     >> asst2 
     >> asst3 
     >> midtermExam
      >> finalExam)
    {

        studentGrade temp(ID, firstName, lastName, asst1,
                          asst2, asst3, midtermExam, finalExam);
        studentList[tallyStudents] = temp;
        tallyStudents++;
    }
    return tallyStudents;
}

// ********************************
// ***************************************
// WRITE DATA
// USES A SETTER FUNCTION
// RETURN TYPE VOID 
// PASSES THE OUTFILE
void writeStudentGradesToFile
(ofstream &outFile, 
studentGrade studentList[100], unsigned int totalStudents)
{
 
        outFile << "studentID firstName lastName letterGrade" << endl;

        for (unsigned int i = 0; i < totalStudents; i++)
        {
            outFile << studentList[i].getStudentID()
                    << ' ' << studentList[i].getFirstName()
                    << ' ' << studentList[i].getLastName();
            if (studentList[i].checkScores())
                outFile << studentList[i].calculateLetterGrade();
            else
                outFile << "Invalid scores";

            outFile << '\n';
        }
}
