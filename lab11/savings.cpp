// Made by Michael Steele
//This program will compute a balance after an undetermined amount of deposits and withdrawals
#include <iostream>
using namespace std;
class SavingsAccount
{

    private:
        double dollars,cents;

    public:
        SavingsAccount();

        SavingsAccount(int dollarsIn, int centsIn);


        void deposit (int dollarsIn,int centsIn);

        void withdrawal(int dollarsIn, int centsIn);
        double showBalance();
};

int main()
{
    char sentinal;
    int dollar,coins;
    cout<< "Please input the initial dollars" << endl;
    cin >> dollar;
    cout<< "Please input the initial cents" << endl;
    cin >> coins;
    SavingsAccount bank(dollar,coins);


    cout << "Would you like to make a deposit? Y or y for yes" << endl;
    cin >> sentinal;

    while(sentinal=='y'||sentinal=='Y')
    {
        cout << "Please input the dollars to be deposited" << endl;
        cin >> dollar;
        cout << "Please input the cents to be deposited" << endl;
        cin >> coins;
        bank.deposit(dollar,coins);
        cout << "Would you like to make another deposit? Y or y for yes" << endl;
        cin >> sentinal;
    }


    cout << "Would you like to make a withdrawal? Y or y for yes" << endl;
    cin >> sentinal;

    while(sentinal=='y'||sentinal=='Y')
    {
        cout << "Please input the dollars to be withdrawn" << endl;
        cin >> dollar;
        cout << "Please input the cents to be withdrawn" << endl;
        cin >> coins;
        bank.withdrawal(dollar,coins);
        cout << "Would you like to make another withdrawal? Y or y for yes" << endl;
        cin >> sentinal;
    }

    cout<<"Final Balance $" << bank.showBalance() << endl;

    return 0;

}


SavingsAccount::SavingsAccount()
{
    dollars=0;
    cents=0;
}

SavingsAccount::SavingsAccount(int dollarsIn, int centsIn)
{
    dollars=dollarsIn;
    cents=centsIn;
}

void SavingsAccount::deposit (int dollarsIn,int centsIn)
{
    dollarsIn+=dollars;
    centsIn+=cents;
    int extra;
    extra =centsIn/100;
    dollarsIn+=extra;
    cents-=extra*100;

}

void SavingsAccount::withdrawal(int dollarsIn, int centsIn)
{
    int extra;
    if(centsIn>100)
    {
        extra = centsIn%100;
        dollarsIn += extra;
        centsIn -=(centsIn/100);
    }
    if(dollarsIn>dollars)
    {
        cout << "You do not have the required funds" << endl;
        return;
    }
    dollars -= dollarsIn;
    cents -= centsIn;
    if(cents<0)
    {
        dollars--;
        cents+=100;
    }
}
double SavingsAccount::showBalance()
{
    double funds = dollars + cents / 100;
    return funds;
}
