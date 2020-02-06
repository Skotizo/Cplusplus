// This program illustrates the use of the Switch statement.

// Michael Steele

#include <iostream>
using namespace std;


int main()
{
        char grade;

        cout << "What grade did you earn in Programming I ?" << endl;
        cin >> grade;
        if (grade=='A'||grade=='B'||grade=='C'||grade=='D')
            cout << "YOU PASSED!!!" << endl;
        if (grade =='A')
            cout << "an A - excellent work !" << endl;
        else if (grade =='B')
            cout << "you got a B - good job" << endl;
        else if (grade =='C')
            cout << "earning a C is satisfactory" << endl;
        else if (grade =='D')
            cout << "while  D is passing, there is a problem" << endl;
        else if (grade =='F')
            cout << "you failed - better luck next time" << endl;
        else
            cout << "You did not enter an A, B, C, D, or F" << endl;

    //switch ( grade )
        //{
        //  case 'A': cout << "YOU PASSED!!!!" << endl;
        //   break;
        //  case 'B': cout << "YOU PASSED!!!!" << endl;
        //    break;
        //  case 'C': cout << "YOU PASSED!!!!" << endl;
        //    break;
        //  case 'D': cout << "YOU PASSED!!!!" << endl;
        //    break;
        //}
        //switch( grade )                // This is where the switch statement begins
    //{

                //case 'A'||'B'||'C'||'D': cout << "YOU PASSED!!!!" << endl;
        //      case 'A':  cout << "an A - excellent work !" << endl;
        //                     break;
        //      case 'B':  cout << "you got a B - good job" << endl;
        //                     break;
        //      case 'C':  cout << "earning a C is satisfactory" << endl;
        //                     break;
        //      case 'D':  cout << "while  D is passing, there is a problem" << endl;
        //                     break;
    //   case 'F':  cout << "you failed - better luck next time" << endl;
        //                     break;
    //    default:   cout << "You did not enter an A, B, C, D, or F" << endl;
        //}



    return 0;
}
