// This program will determine the batting average of a player.
// The number of hits and at bats are set internally in the program.

// Michael Steele

#include <iostream>
using namespace std;

const int AT_BAT = 421;
const int HITS = 123;

int main()
{
        double batAvg;
        double hitsAsDouble;
        hitsAsDouble = HITS/1.0;
        double atBatsAsDouble;
        atBatsAsDouble = AT_BAT/1.0;
        cout << "hits: " << hitsAsDouble << endl;
        cout << "at bats: " << atBatsAsDouble << endl;
        batAvg = hitsAsDouble / atBatsAsDouble;

                                                                        // an assignment statement
        cout << "The batting average is " << batAvg << endl;    // output the result

        return 0;
}
