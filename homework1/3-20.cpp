//Michael Steele
//CSCI 201
//10am-11
//spring semester
//homework 1
//challenge 3-20
// Asks the user for the diameter of the pizza and calculates the number of pieces
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
const double PI = 3.14;
int main ()
{
    double slice;
    double diameter;
    double area;
    cout << "Enter the diameter of the pizza " << endl;
    cin >> diameter;
    diameter/=2;
    area = PI * pow(diameter,2.0);
    slice = area/14.125;
    cout << "Number of slices: " << fixed << setprecision(1) << slice << endl;
    return 0;
}
