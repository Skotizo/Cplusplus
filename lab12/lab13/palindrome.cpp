//Asks user for a string than tests if it is a palindrome
#include<iostream>
#include<cstring>
using namespace std;
char word[50];
int main()
{
    cout << "Enter a string to test if it is a palindrome :     ";
    cin >> word;
    cout << "word size: " << strlen(word);
    cout << "\n";
    cout << "Your word is " << word << endl;
    for(int i = 0; i < (strlen(word)/2.0); i++)
    {
        cout << word[i] << " : " << word[strlen(word)-i-1] << endl;
        if(word[i]==word[strlen(word)-i-1])
        {

        }
        else
        {
            cout << "not a palindrome";
            return 0;
        }

    }
    cout << word << " IS A PALINDROME!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
    return 1;
}
