#include <iostream>
using namespace std;
int main()
{
  int length, c, i, space = 1;
  cout << "Enter the number of asterisks to have on a side" << endl;

  cin >> length;
  cout << "\n\n";

  space = length - 1;

  for (i = 1; i<=length; ++i)
  {
    for (c = 1; c<=space; ++c)
    {
        cout << " ";
    }


    --space;

    for (c = 1; c<= 2*i-1; ++c)
    {
        cout << "*";

    }

    cout << "\n";
  }

  space = 1;

  for (i = 1; i<= length - 1; ++i)
  {
    for (c = 1; c<= space; ++c)
    {
        cout << " ";
    }
    ++space;




    for (c = 1 ; c<= 2*(length-i)-1; ++c)
    {
        cout << "*";
    }
    cout << "\n";


  }
  //HOLLOW

    cout << endl;
    length--;


    int z=1;
  for ( int i=0; i<=length; i++)
  {
    for (int j=length; j>i; j--)
    {
      cout << " "; // printing space here
    }

    cout <<"*";  // printing asterisk here

    if ( i>0)
    {
      for ( int k=1; k<=z; k++)
      {
        cout << " ";
      }
      z+=2;
      cout << "*";
    }
    cout << endl; // end line similar  to \n
  }

  z-=4;

  for (int i=0; i<=length-1; i++)
  {
        for (int j=0; j<=i; j++)
        {
        cout << " ";
        }

    cout << "*";

    for (int k=1; k<=z; k++)
    {
        cout << " ";
    }
    z-=2;

    if (i!=length-1)
    {
        cout << "*";
    }
    cout << endl;
    }


    return 0;
}
