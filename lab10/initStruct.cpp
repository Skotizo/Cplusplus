#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// This program demonstrates partially initialized structure variables

// Michael Steele

struct taxPayer
{
        string name;
        long socialSecNum;
        float taxRate;
        float income;
        float taxes;
};

int main()
{
        // Fill in code to initialize a structure variable named citizen1 so that
        // the first three members are initialized.     Assume the name is Tim
        // McGuiness, the social security number is 255871234, and the tax rate is .35
        taxPayer citizen1;
        citizen1.name = "Tim McGuiness";
        citizen1.socialSecNum = 225871234;
        citizen1.taxRate = .35;

        // Fill in code to initialize a structure variable named citizen2 so that
        // the first three members are initialized.     Assume the name is John Kane,
        // the social security number is 278990582, and the tax rate is .29
        taxPayer citizen2;
        citizen2.name = "John Kane";
        citizen2.socialSecNum = 278990582;
        citizen2.taxRate = .29;

        cout << fixed << showpoint << setprecision(2);

        // calculate taxes due for citizen1

        // Fill in code to prompt the user to enter this year's income for the citizen1
        cout << "Enter the income of " << citizen1.name << endl;

        // Fill in code to read in this income to the appropriate structure member
        cin >> citizen1.income;

        // Fill in code to determine this year's taxes for citizen1
        citizen1.taxes = citizen1.income * citizen1.taxRate;

        cout << "Name: " << citizen1.name << endl;

        cout << "Social Security Number: " << citizen1.socialSecNum << endl;

        cout << "Taxes due for this year: $" << citizen1.taxes << endl << endl;

        // calculate taxes due for citizen2

        // Fill in code to prompt the user to enter this year's income for citizen2
        cout << "Enter the income of " << citizen2.name << endl;

        // Fill in code to read in this income to the appropriate structure member
        cin >> citizen2.income;

        // Fill in code to determine this year's taxes for citizen2
        citizen2.taxes = citizen2.income * citizen2.taxRate;

        cout << "Name: " << citizen2.name << endl;

        cout << "Social Security Number: " << citizen2.socialSecNum << endl;

        cout << "Taxes due for this year: $" << citizen2.taxes << endl << endl;

        return 0;
}
