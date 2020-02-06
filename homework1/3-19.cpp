#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    double loan;
    cout << "Type the load amount, then hit enter. " << endl;
    cin >> loan;

    cout << "Type in the monthly interest rate. (  Example Value: 1  )  " << endl;
    double rate;
    cin >> rate;
    //rate /= 12.0;

    cout << "Type in the number of payments. " << endl;
    double numOfPayments;
    cin >> numOfPayments;
    double one = 1;

    double bill = (rate/12.0 * (pow(rate++/12.0,numOfPayments)) / (pow(rate++/12.0,numOfPayments)-1))*loan;
    cout << "preBILL   " << bill;
    cout << "BILL   " << bill;

    return 0;

}
