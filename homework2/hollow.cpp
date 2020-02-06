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


  return 0;
}
