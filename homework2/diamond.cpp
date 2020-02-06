#include <iostream>
using namespace std;
int main()
{
    int length;
    cout << "Enter the number of asterisks to have on a side" << endl;
    cin >> length;

    if(length <= 2)
    {
        cout << "You must enter a value greater than 2" << endl << "Try Again" << endl << endl;
        main();
    }


    else
    {
        cout << endl << endl;
        int space = length - 1;

        for(int i = 1; i<=length; ++i)
        {


            for(int k = 1; k<=space; ++k)
            {
                cout << " ";
            }


            --space;

            for(int k = 1; k<= 2*i-1; ++k)
            {
                cout << "*";
            }

            cout << endl;
        }

        space = 1;

        for(int i = 1; i<= length - 1; ++i)
        {
            for(int k = 1; k<= space; ++k)
            {
                cout << " ";
            }
            ++space;



            for(int k = 1; k<= 2*(length-i)-1; ++k)
            {
                cout << "*";
            }
            cout << "\n";

        }
        //HOLLOW

        cout << endl;
        length--;
        space = 1;


        for(int i=0; i<=length; i++)
        {

            for(int k=length; k>i; k--)
            {
                cout << " ";
            }

            cout << "*";

            if(i>0)
            {

                for(int k=1; k<=space; k++)
                {
                    cout << " ";
                }

                space+=2;
                cout << "*";

            }

            cout << endl;
        }

        space-=4;

        for(int i=0; i<=length-1; i++)
        {

            for (int k=0; k<=i; k++)
            {
                cout << " ";
            }

            cout << "*";

            for(int k=1; k<=space; k++)
            {
                cout << " ";
            }

            space-=2;

            if(i != length -1)
            {
                cout << "*";
            }

            cout << endl;

        }
    }

    return 0;
}
