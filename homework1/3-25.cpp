//Michael Steele
//CSCI 201
//10am-11
//spring semester
//homework 1
// challenge 3-25
// Asks the user a series a questions and creates a madlib based on the answers
#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string name;
    cout << "What is your name? " << endl;
    cin >> name;

    string age;
    cout << "What is your age? " << endl;
    cin >> age;

    string city;
    cout << "What is your city? " << endl;
    cin >> city;

    string college;
    cout << "What is your college? " << endl;
    cin >> college;

    string profession;
    cout << "What is your profession? " << endl;
    cin >> profession;

    string animal;
    cout << "What is your favorite animal? " << endl;
    cin >> animal;

    string petName;
    cout << "What is your pet's name? " << endl;
    cin >> petName;

    cout << "There once was a person named " << name << " who lived in " << city << ". At the age of " << age << ", " << name << " went to college at " << college << ". " << name << " graduated and went to work as a " << profession << ". Then, " << name << " adopted a " << animal << " named " << petName << ". They both lived happily ever after!";
    return 0;

}
