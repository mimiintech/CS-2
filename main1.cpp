/*
Name: Michelle_Silva, 5006988436, CS202 1003-2023, Assign 1
Description: basic input/output
Input: user/keyboard variables
Output: display outputting variables
*/
#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
#include <cstdio>
#include <fstream>
#include <iomanip>
using namespace std;
int main(int argc, char *argv[])
{
    // 2 ARGUMENTS
    if (argc < 2)
    // ARG. CAN'T BE LESS THAN 2
    {
        cout << "need the file name as input!"
         << endl;
        return 0;
    }
    string filename = argv[1];
    // MORE THAN 2 ARGUMENTS
    int defaultBins = 10;
    if (argc > 2)
    {
        defaultBins = stoi(argv[2]);
        // cout << "defaultBins: " << defaultBins << endl;
    }
// ************************************************
// *******************************************************
    ifstream reader(filename);
    const int arraySize = 100000;
    // DATA FILE SIZE
    double numbers[arraySize];
    // STORE IT INTO AN ARRAY
    int counter = 0;
    // KEEPS TRACK
    string str;
    double number;
    double sum = 0;
    double avg;
    double dev = 0;
// READ IN 
    while (reader 
    >> str && 
    counter < arraySize)
    {
        // IS NOT A NUMBER
        if (str != "nan")
        {
            number = stod(str);
            numbers[counter] = number;
            // THE SUM WITHOUT THE NAN
            sum += number;
            counter++;
        }
    }
    reader.close();
    // ****************************************
    // ************************************
    // CLOSE FILE
    // PRINTS OUT THE DATA FILE
    // for (int i = 0; i < counter; i++)
    // {
    // cout << numbers[i] << " ";
    // }
    // AVERAGE
    if (counter > 0)
    {
        avg = sum / counter;
        cout << "avg: " 
        << fixed 
        << setprecision(2) 
        << avg 
        << endl;
        // cout << "avg: " << avg << endl;
    }
    // STANDARD DEVIATION
    for (int i = 0; i < counter; i++)
    {
        dev += pow(numbers[i] - avg, 2);
    }
    double standard = sqrt(dev 
    / counter);
    cout << "std: " 
    << fixed 
    << setprecision(2)
     << standard 
     << endl;
    // cout << "std: " << standard << endl;
    // ******************************************************************
    // ***************************************************
    // CREATE A HISTOGRAM
    // MIN DATA
    // MAX DATA
    // FOR THE LEFT & RIGHT EDGE
    // STEP #1
    // INITALIZE MIN & MAX
    double min = 0.0;
    double max = 0.0;
    if (counter > 0)
    {
        min = numbers[0];
        max = numbers[0];
        for (int i = 1; i < counter; i++)
        {
            if (numbers[i] < min)
            {
                min = numbers[i];
            }
            if (numbers[i] > max)
            {
                max = numbers[i];
            }
        }
    }
    // cout << min << endl;
    // cout << max << endl;
    // 364.81
    // 475.51
    // // divide the entire range of values 
    // into a series of intervals—and
    //  then count how many values
    //  fall into each interval.
    // reader.close();
    // STEP #2
    // TO CALCULATE THE WIDTH
    double divide = (max - min) 
    / defaultBins;
    // cout << divide << endl;
    // INITIALIZE THE HISTOGRAM
    // INITIALIZE BINSIZE TO ZERO
    vector<int> histogram(defaultBins, 0);
    // **************************************
    // ******************************
    // DETERMINE DATA
    for (int i = 0; i < counter; i++)
    {
        int index = (numbers[i] - min) 
        / divide;
        if (index >= defaultBins)
        {
            index = defaultBins - 1;
        }
        histogram[index]++;
    }
    // *******************************
    // ******************************************
    // PRINT HISTOGRAM
    cout << "bin number, left edge, right edge, count:" << endl;
    for (int i = 0; i < defaultBins; i++)
    {
        double begin = min 
        + i * divide;
        double end = begin 
        + divide;
        cout 
        << setw(3)
        << i << " ";
        cout << setw(7)
         << fixed 
         << setprecision(2) 
         << begin << " ";
        cout << setw(7) 
        << fixed 
        << setprecision(2) 
        << end 
        << " ";
        cout 
        << setw(5) 
        << histogram[i] 
        << endl;
    }
    // // CLOSE FILE
    return 0;
}