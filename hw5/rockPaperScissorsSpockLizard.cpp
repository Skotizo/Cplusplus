#include <iostream>
#include <random>
#include <ctime>
using namespace std;
const int ROCK = 1;
const int PAPER = 2;
const int SCISSORS = 3;
const int LIZARD = 4;
const int SPOCK = 5;
int getUserChoice();
void display();
int getCompChoice();
int counter(int userIn, int compIn);
int main()
{
    int winner;
    int userCount=0,compCount=0;
    int user=0,comp=0;
    display();
    while(user != 99)
    {
        if(user==99)
            return 0;

        user = getUserChoice();
        comp = getCompChoice();


        winner = counter(user ,comp );
        if(winner ==  0)
            userCount++;
        if(winner == 1)
            compCount++;
        cout << "user wins:" << userCount;
        cout << "       computer wins:" << compCount << endl << endl;
    }





}
int getUserChoice()
{
    int userIn;
    cout << "Enter a number between 1 and 5 >";
    cin >> userIn;
    cout << endl << endl;
    return userIn;


}
void display()
{
    cout << "Enter 1 for rock" << endl;
    cout << "Enter 2 for paper" << endl;
    cout << "Enter 3 for scissors" << endl;
    cout << "Enter 4 for lizzard" << endl;
    cout << "Enter 5 for spock" << endl << endl;
    cout << "Enter 99 to exit" << endl << endl;
}
int getCompChoice()
{
    unsigned seed = time(0);
    srand(seed);
    int choice = (rand() % (5)) + 1;
    return choice;
}
int counter(int userIn, int compIn)

{
    int who;
    if ((userIn == SCISSORS) && (compIn == PAPER))
    {
        cout << "Scissors beats paper. You Win" << endl;
        who = 0;
    }
    if ((userIn == PAPER) && (compIn == ROCK))
    {
        cout << "Paper beats rock. You Win" << endl;
        who = 0;
    }
    if ((userIn == ROCK) && (compIn == LIZARD))
    {
        cout << "Rock beats lizard. You Win" << endl;
        who = 0;
    }
    if ((userIn == LIZARD) && (compIn == SPOCK))
    {
        cout << "Lizard beats Spock. You Win" << endl;
        who = 0;
    }
    if ((userIn == SPOCK) && (compIn == SCISSORS))
    {
        cout << "Spock beats scissors. You Win" << endl;
        who = 0;
    }
    if ((userIn == SCISSORS) && (compIn == LIZARD))
    {
        cout << "Scissors beats lizard. You Win" << endl;
        who = 0;
    }
    if ((userIn == LIZARD) && (compIn == PAPER))
    {
        cout << "Lizard beats paper. You Win" << endl;
        who = 0;
    }
    if ((userIn == PAPER) && (compIn == SPOCK))
    {
        cout << "Paper beats Spock. You Win" << endl;
        who = 0;
    }
    if ((userIn == SPOCK) && (compIn == ROCK))
    {
        cout << "Spock beats rock. You Win" << endl;
        who = 0;
    }
    if ((userIn == ROCK) && (compIn == SCISSORS))
    {
        cout << "Rock beats scissors. You Win" << endl;
        who = 0;
    }
    if ((compIn == SCISSORS) && (userIn == PAPER))
    {
        cout << "Scissors beats paper. You Lose" << endl;
        who = 1;
    }
    if ((compIn == PAPER) && (userIn == ROCK))
    {
        cout << "Paper beats rock. You Lose" << endl;
        who = 1;
    }
    if ((compIn == ROCK) && (userIn == LIZARD))
    {
        cout << "Rock beats lizard. You Lose" << endl;
        who = 1;
    }
    if ((compIn == LIZARD) && (userIn == SPOCK))
    {
        cout << "Lizard beats Spock. You Lose" << endl;
        who = 1;
    }
    if ((compIn == SPOCK) && (userIn == SCISSORS))
    {
        cout << "Spock beats scissors. You Lose" << endl;
        who = 1;
    }
    if ((compIn == SCISSORS) && (userIn == LIZARD))
    {
        cout << "Scissors beats lizard. You Lose" << endl;
        who = 1;
    }
    if ((compIn == LIZARD) && (userIn == PAPER))
    {
        cout << "Lizard beats paper. You Lose" << endl;
        who = 1;
    }
    if ((compIn == PAPER) && (userIn == SPOCK))
    {
        cout << "Paper beats Spock. You Lose" << endl;
        who = 1;
    }

    if ((compIn == SPOCK) && (userIn == ROCK))
    {
        cout << "Spock beats rock. You Lose" << endl;
        who = 1;
    }
    if ((compIn == ROCK) && (userIn == SCISSORS))
    {
        cout << "Rock beats scissors. You Lose" << endl;
        who = 1;
    }

    return who;
}
