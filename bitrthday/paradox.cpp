//Michael Steele
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <ctime>

using namespace std;
void randomize();
const int DAYS = 365;

int main()
{
    bool birthday[DAYS]{false};
    int freq[DAYS] = {0};
    randomize();
    int i = 0;
    cout << birthday[0] << endl;
    int day;
//
//
//    cout << "day "<< i << " -> " << day << endl;
//    while(freq[day]<1)
//    {
//        day = rand() % 365 + 1;
//        birthday[day]=true;
//        freq[day] = freq[day] + 1;
//    }
//
//
//    double finished[DAYS];
//    finished[0] = day;
//
//
    day = rand() % 365;

    while(birthday[day]!=true)
    {
        ++i;
        birthday[day] = true;
        freq[day] = freq[day] + 1;
        cout << "day "<< i << " -> " << rand() % 365 + 1 << endl;
        day = rand() % 365 ;
    }



}


void randomize()
{
    unsigned seed = time(0);
    srand(seed);
    cout << "Randomization Seed -> " << seed << endl;
}
