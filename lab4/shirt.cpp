// This program will compute the bill for bying multiple t-shirts. It will account for a discount
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double finalPrice;
    double bill;
    int tshirtAmount;
    cout << "How many shirts would you like ?" << endl;
    cin >> tshirtAmount;

    if (tshirtAmount >= 0 && tshirtAmount < 5)
    {
        finalPrice = 12;
        bill = finalPrice * tshirtAmount;
        cout << "The cost per shirt is $" << setprecision(2) << fixed << finalPrice << " and the total cost is $" << bill << endl;
    }
    else if (tshirtAmount >= 5 && tshirtAmount < 11)
    {
        finalPrice = 12 * .90;
        bill = finalPrice * tshirtAmount;
        cout << "The cost per shirt is $" << setprecision(2) << fixed << finalPrice << " and the total cost is $" << bill << endl;
    }
    else if (tshirtAmount >= 11 && tshirtAmount < 21)
    {
        finalPrice = 12 * .85;
        bill = finalPrice * tshirtAmount;
        cout << "The cost per shirt is $" << setprecision(2) << fixed << finalPrice << " and the total cost is $" << bill << endl;
    }
    else if (tshirtAmount >= 21 && tshirtAmount < 31)
    {
        finalPrice = 12 * .80;
        bill = finalPrice * tshirtAmount;
        cout << "The cost per shirt is $" << setprecision(2) << fixed << finalPrice << " and the total cost is $" << bill << endl;
    }

    else if (tshirtAmount >= 31)
    {
        finalPrice = 12 * .75;
        bill = finalPrice * tshirtAmount;
        cout << "The cost per shirt is $" << setprecision(2) << fixed << finalPrice << " and the total cost is $" << bill << endl;
    }
    else
    {
        cout << "Invalid input\nPlease enter a nonegative value." << endl;
    }
    return 0;
}
