/*assign01_task06-Annual Pay*/

#include <iostream>
using namespace std;
int main()
{
    float payAmount = 5700.00; // get paid after 2 weeks
    int payPeriods = 26;       // in year got 26 time pay , as 52 weeks in a year but, he gets after 2 weeks

    float anualPay = payAmount * payPeriods;

    cout << "The payAmount for one period is= Rs." << payAmount << endl;
    cout << "The payPeriod for one year are= " << payPeriods << endl;
    cout << "the anualPay for a complete year= Rs." << anualPay;

    return 0;
}