/*assign03_task06_BANK CHARGES*/

#include <iostream>
using namespace std;
int main()
{
    int month, cheque; // taking month and cheque variable for inputing no. of months and cheques.

    unsigned long fee; // taking fee variable to calculate total charges of a month.

    int extra_charges = 100; // extra charges used for adding extra fee if amount becomes less than 15000.

    double beginning_balance; // beginning balance is used to store acount balance of a person.

    int min_balance = 0; // min_balance is used to specify the minimum range of balance.

    cout << "Enter the beginning balance=";
    cin >> beginning_balance;

    if (beginning_balance <= min_balance) // 1st condition. if first condition becomes true, it will break the program.
    {
        cout << "account is overdrawn";
    }
    else // if the first condition becomes false it further executes the program.
    {

        cout << "number of months=";
        cin >> month;

        if (month > 0) // 2nd condition.// if the second condition becomes true it further executes the program.
        {

            cout << "number of cheques=";
            cin >> cheque;

            if (cheque < 0) // 3rd condition.if third condition becomes true, it will break the program.
            {

                cout << "invalid cheque.";
            }

            else
            {
                if (cheque > 0 && cheque < 20) // this conditions gives  the value of fee equal to "10 times of number of cheques", if no. of cheques are in between 0 and 19.
                {
                    fee = (cheque * 10);
                }
                else if (cheque >= 20 && cheque <= 39) // this conditions gives  the value of fee equal to "8 times of number of cheques", if no. of cheques are in between 20 and 39.
                {
                    fee = (cheque * 8);
                }
                else if (cheque >= 40 && cheque <= 59) // this conditions gives  the value of fee equal to "6 times of number of cheques", if no. of cheques are in between 40 and 59.
                {
                    fee = (cheque * 06);
                }
                else if (cheque >= 60) // this conditions gives  the value of fee equal to "4 times of number of cheques", if no. of cheques are 60 or more than 60.
                {
                    fee = (cheque * 04);
                }

                fee = (50 * month) + (fee); // there are two "fee" variable.the variable "fee" after the equality sign calculates the fee of "if else" condition just before this statement.

                if (beginning_balance < 15000) // this condition calculates the fee if the beginning amount fall down below 15000. and adds extra charges.
                {
                    fee = fee + extra_charges;
                }

                fee = fee;
                cout << "total fee=" << fee;

                beginning_balance = beginning_balance - fee; // it gives remaining beginning balance after the deduction of fee.

                if (beginning_balance < 0) // this condition executes a massage if the beginning balance fall down below 0 after deduction of fee.
                {
                    cout << "\n account is overdrawn.";
                }
            }
        }
        else // this else condition is used for the 2nd condition .
        {
            cout << "invalid month.";
        }
    }
}
