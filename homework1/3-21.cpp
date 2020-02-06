//Michael Steele
//CSCI 201
//10am-11
//spring semester
//homework 1
// challenge 3-21
// Asks for a pizza amount and diameter and calculates the number of slices per pizza and the amount needed to satisfy the party
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
const double PI = atan(1.0)*4.0;
int main ()
{
    double slice;
    double diameter;
    double area;
    double people;
    double slicesPer;
    double needed;
    cout << "How many are attending your party? " << endl;
    cin >> people;
    slicesPer = people * 4;
    cout << "Enter the diameter of the pizza " << endl;
    cin >> diameter;
    diameter/=2;
    area = PI * pow(diameter,2.0);
    slice = area/14.125;
    cout << "Number of slices: " << fixed << setprecision(1) << slice << endl;
    needed = slicesPer / slice;
    cout << "Number of pizzas needed for your party: " << fixed << setprecision(1) << needed << endl;
    return 0;
}
