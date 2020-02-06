#include <iostream>
#include <iomanip>
using namespace std;

// This program uses a structure to hold data about a rectangle
// It calculates the area and perimeter of a box

// Michael Steele

// Fill in code to declare a structure named dimensions that
// contains 2 float members, length and width
struct dimensions
{
    float length,height;
};
// Fill in code to declare a structure named rectangle that contains
// 3 members, area, perimeter, and sizes. area and perimeter should be
// floats, whereas sizes should be a dimensions structure variable
struct rectangle
{
    float area,perimeter;
    dimensions sizes;
};

int main()
{
        // Fill in code to define a rectangle structure variable named box.
        rectangle box;

        cout << "Enter the length of a rectangle: ";

        // Fill in code to read in the length to the appropriate location
        cin >> box.sizes.length;

        cout << "Enter the width of a rectangle: ";

        // Fill in code to read in the width to the appropriate location
        cin >> box.sizes.height;

        cout << endl << endl;

        // Fill in code to compute the area and store it in the appropriate
        // location
        box.area = box.sizes.length * box.sizes.height;

        // Fill in code to compute the perimeter and store it in the
        // appropriate location
        box.perimeter = (box.sizes.length * 2)+(box.sizes.height * 2);

        cout << fixed << showpoint << setprecision(2);

        cout << "The area of the rectangle is " << box.area << endl;

        cout << "The perimeter of the rectangle is " << box.perimeter
                 << endl;

        return 0;
}
