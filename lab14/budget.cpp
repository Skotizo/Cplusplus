// This program reads in from the keyboard a record of financial information
// consisting of a person’s name, income, rent, food costs, utilities and
// miscellaneous expenses. It then determines the net money
// (income minus all expenses)and places that information in a record
// which is then written to an output file.

// Michael Steele

#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

const int NAMESIZE = 15;

struct	budget	// declare a structure to hold name and financial information
{
	char name[NAMESIZE + 1];
	float income;		// person's monthly income
	float rent;			// person's monthly rent
	float food;			// person's monthly food bill
	float utilities;	// person's monthly utility bill
	float miscell;		// person's other bills
	float net;			// person's net money after bills are paid
};

int main()
{
	fstream indata;
	ofstream outdata;	// output file of
						// student.

	indata.open("income.dat", ios::out | ios::binary);	// open file as binary
														// output.

	outdata.open("student.out", ios::out);	// output file that we
									// will write student
									// information to.

	outdata << left << fixed << setprecision(2);	// left indicates left
													// justified for fields

	budget person;	// defines person to be a record

	cout << "Enter the following information" << endl;

	cout << "Person's name: ";
	cin.getline(person.name, NAMESIZE);

	cout << "Income :";
	cin >> person.income;

	// FILL IN CODE TO READ IN THE REST OF THE FIELDS:
	// rent, food, utilities AND miscell TO THE person RECORD
	cout << "Rent: " << endl;
	cin >> person.rent;

    cout << "Food: " << endl;
	cin >> person.food;

	cout << "Utilities: " << endl;
	cin >> person.utilities;

	cout << "misc: " << endl;
	cin >> person.miscell;


	// find the net field
	person.net = person.income-(person.rent + person.food + person.utilities + person.miscell);
	// FILL IN CODE TO DETERMINE NET INCOME (income - expenses)
	cout << "Net income: " << person.net << endl;

	// write this record to the file
	// Fill IN CODE TO WRITE THE RECORD TO THE FILE indata (one instruction)
	indata.write((char *) (&person), sizeof(person));

	indata.close();

	// FILL IN THE CODE TO REOPEN THE indata FILE, NOW AS AN INPUT FILE.
	indata.open("indata.dat", ios::in | ios::binary);
    outdata << "Name " << person.name << "     Income:" << person.rent << "     Rent:" << person.rent << "       Food:" << person.food << "        Misc:" << person.miscell << "       Util" << person.utilities;


	// FILL IN THE CODE TO READ THE RECORD FROM indata AND PLACE IT IN THE

	// write information to output file
	outdata << setw(20) << "Name" << setw(10) << "Income" << setw(10) << "Rent"
		    << setw(10) << "Food" << setw(15) << "Utilities" << setw(15)
		    << "Miscellaneous" << setw(10) << "Net Money" << endl << endl;

	// FILL IN CODE TO WRITE INDIVIDUAL FIELD INFORMATION OF THE RECORD TO
	// THE outdata FILE.(several instructions)

	return 0;
}
