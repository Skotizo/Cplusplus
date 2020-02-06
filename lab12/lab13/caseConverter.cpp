// This program shows how the toupper and tolower functions can be
// applied in a C++ program

// Michael Steele

#include <iostream>
#include <cctype>
#include <iomanip>
using namespace std;

int main()
{
        int week, total, dollars;
        float average;
        char choice;

        cout << showpoint << fixed << setprecision(2);

        do
        {
                total = 0;

                for (week = 1; week <= 4; week++)
                {
                        cout << "How much (to the nearest dollar) did you"
                                 << " spend on food during week " << week
                                 << " ?:" << endl;
                        cin >> dollars;

                        total = total + dollars;
                }

                average = total / 4.0;

                cout << "Your weekly food bill over the chosen month is $"
                         << average << endl << endl;

                        do
                        {
                                cout << "Would you like to find the average for "
                                         << "another month?";
                                cout << endl << "Enter Y or N" << endl;
                                cin >> choice;

                        } while (tolower(choice) != 'y' && tolower(choice) != 'n');

        } while (tolower(choice) == 'y');

        return 0;
}
