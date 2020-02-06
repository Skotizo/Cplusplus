#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
bool isAscendingSort = true;


void selectionSort(string[], int);
void insertionSort(string[], int);
void displayArray(string[], int);
void swap(string&,string&);
void vectorSelectionSort(vector<string>&);
void printVector(vector<string>&);



const int SIZE = 20;

int main()
{
    string names[SIZE];
    ifstream file("names.txt");
    if(file.is_open())
    {

        for(int i = 0; i < SIZE; ++i)
        {
            file >> names[i];
        }
    }
    cout << "       Before being sorted\n\n\n";
    displayArray(names,SIZE);
    cout << "\n\n\n";
    cout << "       After being sorted\n\n\n";
    insertionSort(names,SIZE);
    displayArray(names,SIZE);
    cout << "\n\n\n";

    cout << "                   VECTORS PART\n\n\n\n";
    //vectors part
    vector<string> my_arr;
    ifstream dict_file("names.txt");
    string line;

    while(getline(dict_file, line))
    {
        string new_line;
        new_line = line + "\n";
        cout<< new_line;
        my_arr.push_back(new_line);
    }
    vectorSelectionSort(my_arr);
    printVector(my_arr);



    return 0;
}


void displayArray(string name[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << name[i] << endl;
	}
}

void selectionSort(string array[], int size)
{
	int startScan, minIndex;
	string minValue;

	for (int startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = array[startScan];
		for (int index = startScan + 1; index < size; index++)
		{
			if(array[index] > minValue)
			{
				minValue = array[index];
				minIndex = index;
			}
		}
		array[minIndex] = array[startScan];
		array[startScan] = minValue;
	}
}

void insertionSort(string array[], int size)
{
    for(int i = 1; i < size; i++)
    {


        for(int j = i; j > 0; j--)
        {cout << "\n\n\n";


            if(array[j] < array[j - 1])
            {
                swap(array[j], array[j - 1]);
            }

            else break;
        }
    }
}

void vectorSelectionSort(vector<string>  &v)
{

    int minIndex;
    string minValue;

    for (int start = 0; start < (v.size() - 1); start++)
    {
        minIndex = start;
        minValue = v[start];
        for (int index = start + 1; index<v.size(); index++)
        {
            if(v[index] < minValue)
            {
                minValue = v[index];
                minIndex = index;
            }
        swap(v[minIndex],v[start]);
        }
    }
}

void swap(string &a, string &b)
{
    string temp = a;
    a=b;
    b=temp;
}

void printVector(vector<string> &input)
{
	cout << "The sorted vector elements are: \n\n\n";
    for (int i = 0; i < input.size(); i++)
        cout << input[i] << " ";
}

void setAscending()
{
    isAscendingSort = true;
}
void setDecending()
{
    isAscendingSort = false;
}
//bool isOutOfOrder(<type> arg1, <type> arg2)//im having trouble understanding what to do with the two args
//{
//    if(isAscendingSort==true)
//{

//    }
//}


