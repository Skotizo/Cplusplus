#include <iostream>
#include <iomanip>
using namespace std;

// This program uses a structure to hold data about a rectangle

// Michael Steele

// Fill in code to declare a structure named rectangle which has
// members length, width, area, and perimeter all of which are floats
struct rectangle
{
        float length,width,area,perimeter;
};
int main()
{
        // Fill in code to define a rectangle variable named box

    rectangle rec1;

        cout << "Enter the length of a rectangle: ";

        // Fill in code to read in the length member of box
        cin >> rec1.length;

        cout << "Enter the width of a rectangle: ";

        // Fill in code to read in the width member of box
        cin >> rec1.width;

        cout << endl << endl;

        // Fill in code to compute the area member of box
        rec1.area = rec1.width * rec1.length;

        if (rec1.width==rec1.length)
        {
        cout << "THATS NOT A RECTANGLE!!!\n";
        }

        // Fill in code to compute the perimeter member of box
        rec1.perimeter = (rec1.width * 2) + (rec1.length * 2);

        cout << fixed << showpoint << setprecision(2);

        // Fill in code to output the area with an appropriate message
        cout << "The area of the rectangle is " << rec1.area << endl;

        // Fill in code to output the perimeter with an appropriate message
        cout << "The perimeter of the rectangle is " << rec1.perimeter << endl;

        return 0;
}
