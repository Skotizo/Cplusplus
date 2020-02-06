#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    char string1[20] = "Total Eclipse ";
    char string2[25] = "of the Sun";
    cout << string1 << endl;
    cout << string2 << endl;
    cout << "concatination :    " << strcat(string1,string2) << endl;
    cout << string1 << endl;
    return 0;
}
