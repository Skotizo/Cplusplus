#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// __________________________________________________________________
//
// This program declares a class for a circle that will have
// member functions that set the center, find the area, find
// the circumference and display these attributes.
// The program as written does not allow the user to input data, but
// rather has the radii and center coordinates of the circles
// (spheres in the program) initialized at definition or set by a function.

// class declaration section	(header file)

// Michael Steele

class Circles
{
public:
	void setCenter(int x, int y);
	double findArea();
	double findCircumference();
	void printCircleStats();	// This outputs the radius and center of the circle.
	Circles(float r);			// Constructor
	Circles();
	Circles(float r, int x, int y);
	Circles(int x, int y);
private:
	float	radius;
	int	center_x;
	int	center_y;
};

const double PI = 4.0 * atan(1);

// Client section

int main()
{
    cout << fixed;
    cout << setprecision(2);
	Circles sphere(2);
	Circles sphere2(1,0,0);
	Circles sphere3(15,16);
	//sphere.setCenter(9,10);
	sphere.printCircleStats();

	cout << "The area of the circle is " << sphere.findArea() << endl;
	cout << "The circumference of the circle is "
		 << sphere.findCircumference() << endl<< endl;
    sphere2.printCircleStats();

    cout << "The area of the circle is " << sphere2.findArea() << endl;
	cout << "The circumference of the circle is "
		 << sphere2.findCircumference() << endl<< endl;
    sphere3.printCircleStats();

    cout << "The area of the circle is " << sphere3.findArea() << endl;
	cout << "The circumference of the circle is "
		 << sphere3.findCircumference() << endl<< endl;

	return 0;
}

// __________________________________________________________________
//
// Implementation section	Member function implementation


Circles::Circles()
{
	radius = 1;
	setCenter(0,0);

}

// Fill in the code to implement the non-default constructor
Circles::Circles(float r)
{
    radius = r;
    setCenter(0,0);
}

Circles::Circles(float r, int x, int y)
{
    radius = r;
    setCenter(x,y);
}

Circles::Circles(int x, int y)
{
    radius = 1;
    setCenter(x,y);
}

// Fill in the code to implement the findArea member function
double Circles::findArea()
{
    return PI * pow(radius,2);
}

// Fill in the code to implement the findCircumference member function
double Circles::findCircumference()
{
    return 2 * PI * radius;
}

void Circles::printCircleStats()

// This procedure prints out the radius and center coordinates of the circle
// object that calls it.
{
	cout << "The radius of the circle is " << radius << endl;
	cout << "The center of the circle is (" << center_x
		 << "," << center_y << ")" << endl;
}

void Circles::setCenter(int x, int y)
// This procedure will take the coordinates of the center of the circle from
// the user and place them in the appropriate member data.
{
	center_x = x;
	center_y = y;
}
