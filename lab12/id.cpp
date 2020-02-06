//This program will read in id numbers and place them in an array.
//The array is dynamically allocated large enough to hold the number of id
//numbers given by the user. The program will then input an id and call a
//function to search for that id in the array. It will print whether the id is in
//the array or not.


//michael steele

#include <iostream>
using namespace std;
void searchId(int idNumIn, int* id , int numIds);
int main()
{
    int *id = nullptr;
    int numIds;
    cout << "How many ID's will be will be stored ? :  ";
    cin >> numIds;
    id = new int(numIds);

    for( int i = 0; i < numIds; i++)
    {
        cout << "Enter ID #" << i+1 << ":   ";
        cin >> *(id + i);
    }

    cout << "Enter an ID# to find inside the list :  ";
    int mySearch;
    cin >> mySearch;
    searchId(mySearch, id, numIds);





    delete [] id;
    return 1;

}
void searchId(int idNumIn, int* id , int numIds)
{
    for (int i = 0; i <= numIds; i++)
    {
        if(*(id+i)==idNumIn)
        {
            cout << "The IDs was found inside the list under position : " << i+1 << endl;
            break;
        }


        if(i==numIds)
            cout << "ID:" << idNumIn << " was not inside the list";
    }

}
