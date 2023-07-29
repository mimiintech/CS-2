unsigned int getStudentGradesFromFile(ifstream &inFile, studentGrade studentList[100])
{
    // arguments an input stream and an array of
    // studentGrade objects

    unsigned int count = 0;
    // read the student grades from the referenced file
    string studentID, firstName, lastName;
    int asst1, asst2, asst3, midtermExam, finalExam;

    while (inFile >> studentID 
    >> firstName >> lastName 
    >> asst1 >> asst2 >> asst3 
    >> midtermExam >> finalExam)
    {
        studentList[count].setStudentGrade(studentID,
                                           firstName,
                                           lastName,
                                           asst1,
                                           asst2,
                                           asst3,
                                           midtermExam,
                                           finalExam);
        count++;
    }
    return count;
    // save them into elements in the array of objects
    //  return the number of student
    // grades read in from the file.
}
// ******************************
// *****************************************
void writeStudentGradesToFile(ofstream &outFile, studentGrade studentList[100],
                              unsigned int totalStudents)
{
    for (unsigned int i = 0; i < totalStudents; i++)
    {
        outFile
            << "ID: "
            << studentList[i].getStudentID() << endl;
        outFile << "First Name: "
                << studentList[i].getFirstName() << endl;
        outFile << "Last Name: "
                << studentList[i].getLastName() << endl;

        if (studentList[i].checkScores())
        {
            char letterGrade = studentList[i].calculateLetterGrade();
            outFile << "Letter Grade: "
                    << letterGrade << endl;
        }
        else
        {
            outFile
                << "Letter Grade: Invalid scores"
                << endl;
        }

        outFile
            << endl; // Add empty line between students
    }
}