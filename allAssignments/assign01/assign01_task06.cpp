/*assign01_task06- Sales Prediction*/

#include <iostream>
using namespace std;
int main()
{
    int mealCharge = 4450;
    float taxPercentage = 6.75;
    float tipPercentage = 15.0;

    double taxPayable = (mealCharge * taxPercentage) / 100;              // finding tax from percentage to real amount of money
    double tipPayable = (taxPayable + mealCharge) * tipPercentage / 100; // finding tip from percentage to real amount of money after including tax as well
    double totalBill = mealCharge + taxPayable + tipPayable;             // adding all cost, tax and tip to calculate the final and total payable bill .

    // displaying everything on the reciept
    cout << "meal cost  Rs.= " << mealCharge << endl;
    cout << "tax amount Rs.= " << taxPayable << endl;
    cout << "tip amount Rs.= " << tipPayable << endl;
    cout << "total bill Rs.= " << totalBill;

    return 0;
}