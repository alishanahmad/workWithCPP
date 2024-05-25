/*assign01_task10- Stock Commission*/

#include <iostream>
using namespace std;
main()
{
    int shares = 600;
    float costPerShare = 21.77;

    double amountPaid = shares * costPerShare;
    double brokerCommission = (amountPaid * 2) / 100;
    double TotalPaidAmount = amountPaid + brokerCommission;

    cout << "Paid amount for only stock= " << amountPaid << " Rs." << endl;
    cout << "The amount of the commission= " << brokerCommission << " Rs." << endl;
    cout << "The total amount paid= " << TotalPaidAmount << " Rs." << endl;

    return 0;
}