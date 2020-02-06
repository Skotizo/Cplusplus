#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

// Michael Steele

int main()
{
	fstream inFile("preverb.txt", ios::in);
	long offset , count;
	char ch;
	char more;

	do
	{
		// Fill in the code to write to the screen
		// the current read position (with label)
		count = inFile.tellp();
		cout << "Position : " << count << endl;

		cout << "Enter an offset from the current read position: ";
		cin >> offset;

		//	Fill in the code to move the read position “offset” bytes
		//	from the CURRENT read position.
		inFile.seekp(offset-1);

		//	Fill in the code to get one byte of information from the file
		//	and place it in the variable "ch".
		inFile.get(ch);


		cout << "The character read is " << ch << endl;
		cout << "If you would like to input another offset enter a Y"
			 << endl;
		cin >> more;


		// Fill in the code to clear the eof flag.
        inFile.clear();


	} while (toupper(more) == 'Y');

	inFile.close();

	return 0;
}
