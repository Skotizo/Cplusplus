#include <iostream>
#include <cmath> // necessary for pow function
#include <iomanip>
using namespace std;
struct circle // declares the structure circle
{ // This structure has 6 members
float centerX; // x coordinate of center
float centerY; // y coordinate of center
float radius;
float area;
float circumference;
float distance_from_origin;
};
const float PI = 3.14159;
int main()
{
circle circ1, circ2; // defines 2 circle structure variables
cout << "Please enter the radius of the first circle: ";
cin >> circ1.radius;
cout << endl
<< "Please enter the x-coordinate of the center: ";
cin >> circ1.centerX;
cout << endl
<< "Please enter the y-coordinate of the center: ";
cin >> circ1.centerY;
circ1.area = PI * pow(circ1.radius, 2.0);
circ1.circumference = 2 * PI * circ1.radius;
circ1.distance_from_origin = sqrt(pow(circ1.centerX,2.0)
+ pow(circ1.centerY,2.0));
cout << endl << endl;
cout << "Please enter the radius of the second circle: ";
cin >> circ2.radius;
cout << endl
<< "Please enter the x-coordinate of the center: ";
cin >> circ2.centerX;
cout << endl
<< "Please enter the y-coordinate of the center: ";
cin >> circ2.centerY;
circ2.area = PI * pow(circ2.radius, 2.0);
circ2.circumference = 2 * PI * circ2.radius;
circ2.distance_from_origin = sqrt(pow(circ2.centerX,2.0)
+ pow(circ2.centerY,2.0));

cout << endl << endl;
// This next section determines which circle's center is
// closer to the origin
if (circ1.distance_from_origin > circ2.distance_from_origin)
{
cout << "The first circle is further from the origin"
<< endl << endl;
}
else if (circ1.distance_from_origin < circ2.distance_from_origin)
{
cout << "The first circle is closer to the origin"
<< endl << endl;
}
else
cout << "The two circles are equidistant from the origin";
cout << endl << endl;
cout << setprecision(2) << fixed << showpoint;
cout << "The area of the first circle is : ";
cout << circ1.area << endl;
cout << "The circumference of the first circle is: ";
cout << circ1.circumference << endl << endl;
cout << "The area of the second circle is : ";
cout << circ2.area << endl;
cout << "The circumference of the second circle is: ";
cout << circ2.circumference << endl << endl;
return 0;
}
