// This program declares the Square class and uses member functions to find
// the perimeter and area of the square

// Michael Steele

#include <iostream>
using namespace std;

// FILL IN THE CODE TO DECLARE A CLASS CALLED Square. TO DO THIS SEE
// THE IMPLEMENTATION SECTION.
class Square
{
    private:
        float side;
    public:
        void setSide(float);
        float findArea();
        float findPerimeter();
        void defaultSquare();
        ~Square();

};

int main()
{
        Square box;     // box is defined as an object of the Square class
        Square box1;
        float size;     // size contains the length of a side of the square

        // FILL IN THE CLIENT CODE THAT WILL ASK THE USER FOR THE LENGTH OF THE
        // SIDE OF THE SQUARE. (This is stored in size)
        cout << "Enter The Length Of The Square >  ";
        cin >> size;


        // FILL IN THE CODE THAT CALLS SetSide.
        box.setSide(size);

        // FILL IN THE CODE THAT WILL RETURN THE AREA FROM A CALL TO A FUNCTION
        // AND PRINT OUT THE AREA TO THE SCREEN.
        float area;

        cout << "\nThe Area Of Your Square is " << area << endl;

        // FILL IN THE CODE THAT WILL RETURN THE PERIMETER FROM A CALL TO A
        // FUNCTION AND PRINT OUT THAT VALUE TO THE SCREEN.
        float perimeter;
        perimeter = box.findPerimeter();
        cout << "\nThe Perimeter Of Your Square is " << perimeter << endl;
        box1.setSide(9);
    cout << "\nThe Area Of Square1 is " << box1.findArea() << endl;
    cout << "\nThe Perimeter Of Square1 is " << box1.findPerimeter() << endl;

    box.~Square();

        return 0;
}

// _______________________________________________________
//
// Implementation section       Member function implementation

//**************************************************
//  setSide
//
//  task:        This procedure takes the length of a side and
//               places it in the appropriate member data
//  data in: length of a side
//***************************************************

void Square::setSide(float length)[]
{
        side = length;
}

//**************************************************
//      findArea
//
//  task:              This finds the area of a square
//  data in:       none (uses value of data member side)
//  data returned: area of square
//***************************************************

float Square::findArea()
{
        return side * side;
}

//**************************************************
//      findPerimeter
//
//  task:              This finds the perimeter of a square
//  data in:       none (uses value of data member side)
//  data returned: perimeter of square
//***************************************************

float Square::findPerimeter()
{
        return 4 * side;
}
void Square::defaultSquare()
{
    side = 1;
}
Square::~Square()
{
    Square *pointer = nullptr;
    delete pointer;


}
