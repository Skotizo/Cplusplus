//  This program prints "You Pass" if a student's average is
//  60 or higher and prints "You Fail" otherwise

// Michael Steele
#include <iostream>
using namespace std;

int main()
{

        float average;    // holds the grade average

        cout << "Input your average:" << endl;
        cin >> average;

        if (average >= 60 && average <= 79)
                cout << "You Pass" << endl;
        if (average > 100)
            cout << "Invalid Data" << endl;
        if (average >= 90 && average <= 100)
            cout << "A" << endl;
        if (average >= 80 && average <= 90)
            cout << "B" << endl;
        if (average >= 80 && average <= 70)
            cout <<  "C" << endl;
        if (average >= 0 && average < 59)
            cout << "You Fail" << endl;





    return 0;
}
