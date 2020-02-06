#include <iostream>
#include <cmath>
//Michael Steele

using namespace std;

int main()

{
    float a,b,c,root0,root1;

    cout << "Enter The Value of a: " << endl;
    cin >> a;
    cout << endl;
    cout << "Enter The Value of b: " << endl;
    cin >> b;
    cout << endl;
    cout << "Enter The Value of c: " << endl;
    cin >> c;
    cout << endl;
    if ( b==0 | c==0 )
    {
        cout<< "There is no solution" << endl;
        return 0;
    }
    if (a==0)
    {
        cout << "Theres a single root" << endl;
        cout << "The root is " << -c/b << endl;
        return 0;
    }

    if(pow(b,2) - 4 * a * c == 0)
        cout << "The two roots are the same" << endl;
    if(pow(b,2) - 4 * a * c < 0)
        cout << "The two roots are complex" << endl;
    else
    {
        root0 = (-b + sqrt(b * b - 4 * a * c))/ (2 * a);
        root1 = (-b - sqrt(b * b - 4 * a * c))/ (2 * a);

        cout<<"The first root is "<< root0 << endl;
        cout<< "The second root is "<< root1 << endl;
    }
    return 0;
}
