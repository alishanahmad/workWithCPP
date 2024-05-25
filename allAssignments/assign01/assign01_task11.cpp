/*assign01_task11- Energy Drink Consumption)*/

#include <iostream>
using namespace std;
main()
{
    int customers = 12467;
    int customersType1 = (customers * 14) / 100; // number of customers lie in 14% of one or more drink takers per week.
    int customersType2 = (customers * 64) / 100; // number of customers lie in 64% of those prefer citrus flavored drink.

    cout << "customers parchase one or more drinks per week= " << customersType1 << endl;
    cout << "customers who prefer citrus flavored drink= " << customersType2;

    return 0;
}