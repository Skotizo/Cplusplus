// This program tests a password for the American Equities
// web page to see if the format is correct

// Michael Steele

#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

//function prototypes
bool testPassWord(char[]);
int countLetters(char*);
int countDigits(char*);
bool hasUpper(char[]);

int main()
{
        char passWord[20];

        cout << "Enter a password consisting of exactly 6 "
                 << "letters and 4 digits:" << endl;

        cin.getline(passWord, 20);

        if (testPassWord(passWord))
                cout << "Please wait - your password is being verified" << endl;

        else
        {
                cout << "Invalid password. Please enter a password "
                         << "with exactly 6 letters, 4 digits and 0 capitol letters" << endl;
                cout << "For example, my37RuN9 is valid" << endl;
        }

        // Fill in the code that will call countLetters and
        // countDigits and will print to the screen both the number of
        // letters and digits contained in the password.
        cout << "The number of letters inside your password:    " << countLetters(passWord) << endl;
        cout << "The number of digits inside your password:    " << countDigits(passWord) << endl;

        return 0;
}

//**************************************************************
//      testPassWord
//
//  task:              determines if the word in the
//                     character array passed to it, contains
//                     exactly 5 letters and 3 digits.
//  data in:       a word contained in a character array
//  data returned: true if the word contains 5 letters & 3
//                     digits, false otherwise
//
//**************************************************************
bool testPassWord(char custPass[])
{
        int numLetters, numDigits, length;
        bool capitolTest = hasUpper(custPass);

        length = strlen(custPass);
        numLetters = countLetters(custPass);
        numDigits = countDigits(custPass);

        if (numLetters == 6 && numDigits == 4 && length == 10 && capitolTest == false)
                return true;
        else
                return false;
}

// the next 2 functions are from Sample Program 10.5

//*******************************************************************
//      countLetters
//
//  task:              This function counts the number of letters
//                     (both capital and lower case) in the string
//  data in:       pointer that points to an array of characters
//  data returned: number of letters in the array of characters
//
//*******************************************************************
bool hasUpper(char *strPtr)
{
    bool occurs = false;
    while (*strPtr != '\0')     // loop is executed as long as
                // the pointer strPtr does not point
                // to the null character which
                // marks the end of the string
        {
                if (isupper(*strPtr))   // isalpha determines if
                        occurs=true;
                                        // the character is a letter

                strPtr++;
        }
        return occurs;
}
int countLetters(char *strPtr)
{
        int occurs = 0;

        while (*strPtr != '\0') // loop is executed as long as
                // the pointer strPtr does not point
                // to the null character which
                // marks the end of the string
        {
                if (isalpha(*strPtr))   // isalpha determines if
                        occurs++;
                                        // the character is a letter

                strPtr++;
        }

        return occurs;
}
