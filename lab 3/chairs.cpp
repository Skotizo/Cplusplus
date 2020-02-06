#include <iostream>
using namespace std;
int main()
{
        float AM,M,FC,total;
        cout << "Please input the numer of America Colonial chairs sold" << endl;
        cin >> AM;
        cout << "Please input the number of Modern chairs sold" << endl;
        cin >> M;
        cout << "Please input the number of French Classical chairs sold" << endl;
        cin >> FC;
        float AMfinal = AM * 85.00;
        cout << "The total sales of Americal Colonial chairs " << AMfinal << endl;
        float Mfinal = 57.50 * M;
        cout << "The total sales of Modern chairs " << Mfinal << endl;
        float FCfinal = 127.75 * FC;
        cout << "The total sales of French classical chairs " << FCfinal << endl;
        total = AMfinal + Mfinal + FCfinal;
        cout << "The total sales of all chairs " << total << endl;

}
