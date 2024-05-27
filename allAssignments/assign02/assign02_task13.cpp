/*assign02_task13- interest Earned*/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int principal, T;
    double rate, amount;
    cout << "Interest Rate: ";
    cin >> rate;
    cout << "Time Compounded:";
    cin >> T;
    cout << "Principal:";
    cin >> principal;
    rate = rate / 100;
    amount = principal * pow((1 + (rate / T)), T);
    cout << "amount is=" << amount;
    return 0;
}
