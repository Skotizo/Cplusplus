#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

//Michael Steele

const int MAXNAME = 20;
int main()
{
    ifstream inData;
    inData.open("grades.txt");

    char name[MAXNAME + 1];  // holds student name
    float average;  // holds student average



    cout << showpoint << fixed << setprecision(2);

    while (inData)
    {
        // Fill in the code to print out name and
        // student average

        inData.get(name, MAXNAME + 1);

        inData >> average;

        cout << name << " has a(n) " << average << " average" << endl;

        // Fill in the code to complete the while
        // loop so that the rest of the student
        // names and average are read in properly

        inData.ignore(80,'\n');
    }



    return 0;
}
