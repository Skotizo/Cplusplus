#include <iostream>
#include <iomanip>
using namespace std;

// This program will demonstrate the scope rules.

// Michael Steele

const double PI = 3.14;
const double RATE = 0.25;

void findArea(float, float&);
void findCircumference(float, float&);

int main()
{
        cout << fixed << showpoint << setprecision(2);
        float radius = 12;

        cout << " Main function outer block" << endl;
        cout << " PI, Rate, and Radius." << endl << endl;

        {
                float area;

                cout << "Main function first inner block" << endl;
                cout << "Area, PI, Rate, and Radius." << endl << endl;

                // Fill in the code to call findArea here
        findArea(radius,area);

                cout << "The radius = " << radius << endl;
                cout << "The area = " << area << endl << endl;
        }

        {
                float radius = 10;
                float circumference;

                cout << "Main function second inner block" << endl;
                cout << "Circumference, PI, Rate, and Radius." << endl << endl;

                // Fill in the code to call findCircumference here
                findCircumference(radius,circumference);

                cout << "The radius = " << radius << endl;
                cout << "The circumference = " << circumference << endl << endl;
        }

        cout << "Main function after all the calls" << endl;
        cout << "PI, Rate, and Radius." << endl << endl;

        return 0;
}

//      *********************************************************************
//      findArea
//
//      task:     This function finds the area of a circle given its radius
//      data in:  radius of a circle
//      data out: answer (which alters the corresponding actual parameter)
//
//      ********************************************************************

void findArea(float rad, float& answer)
{
        cout << "AREA FUNCTION" << endl << endl;
        cout << "Rad, Answer, PI, Rate, and Radius." << endl << endl;

        // FILL in the code, given that parameter rad contains the radius, that
        // will find the area to be stored in answer
        answer = PI * rad * rad;

}

//      ******************************************************************************
//      findCircumference
//
//      task:     This function finds the circumference of a circle given its radius
//      data in:  radius of a circle
//      data out: distance (which alters the corresponding actual parameter)
//
//      *****************************************************************************

void findCircumference(float length, float& distance)
{
        cout << "CIRCUMFERENCE FUNCTION" << endl << endl;
        cout << "Length, Distance, PI, Rate, and Radius." << endl << endl;

        // FILL in the code, given that parameter length contains the radius,
        // that will find the circumference to be stored in distance
        distance = 2.0 * PI * length;

}
