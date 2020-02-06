//Michael Steele
//CSCI 201
//10am-11
//spring semester
//homework 1
// challenge
//
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int pennie,nickle,dime,quarter;
    double pennieValue=.01;
    double nickleValue=.05;
    double dimeValue=.1;
    double quarterValue = .25;
    double total;
    cout << "Enter an amount of money between $0 - $1, then press enter" << endl;
    cin >> total;
    if (static_cast<int>(total)%static_cast<int>(quarterValue)>0 )
    {
        quarter = total/.25;
        cout << quarter << " Quarters" << endl;
        cout << remainder(total,0.25);
    }

    if ( total/.10 > 0)
        quarter = total/.10;
        cout << quarter << " dimes" << endl;
        cout << total - quarter * .10;
    if ( total/.05 > 0)
        quarter = total/.05;
        cout << quarter << " nickles" << endl;
        cout << total - quarter * .05;
    if ( total/.01 > 0)
        pennie = total/.01;
        cout << quarter << " pennies" << endl;
        cout << total - quarter * .01;
}
