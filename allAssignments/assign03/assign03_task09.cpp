/*assign03_task09_SALES COMMISSION CALCILATOR*/

#include <iostream>
using namespace std;
int main()
{
    int sales1, commission1; // both variables are used to calculate respetive values for "FIRST" salesperson.
    int sales2, commission2; // both variables are used to calculate respetive values for "SECOND" salesperson.
    int sales3, commission3; // both variables are used to calculate respetive values for "THIRD" salesperson.
    float average;

    cout << "Enter the first salesperson's sale of last week= $";
    cin >> sales1; // CIN is used to get the sales of "FIRST" salesperson as an input.

    if (sales1 >= 0) // 1st CONDITION
    {
        cout << "Enter the second salesperson's sale of last week= $";
        cin >> sales2; // CIN is used to get the sales of "SECOND" salesperson as an input.

        if (sales2 >= 0) // 2nd CONDITION
        {

            cout << "Enter the third salesperson's sale of last week= $";
            cin >> sales3; // CIN is used to get the sales of "THIRD" salesperson as an input.

            if (sales3 >= 0) // 3rd CONDITION.
            {
                commission1 = 200 + ((sales1 * 9) / 100); // useing formula to calculate the commission of "FIRST" salesperson.
                commission2 = 200 + ((sales2 * 9) / 100); // useing formula to calculate the commission of "SECOND" salesperson.
                commission3 = 200 + ((sales3 * 9) / 100); // useing formula to calculate the commission of "THIRD" salesperson.

                cout << "\ncommission of first salesperson is= $" << commission1;  // displaying the commission of "FIRST" salesperson.
                cout << "\ncommission of second salesperson is= $" << commission2; // displaying the commission of "SECOND" salesperson.
                cout << "\ncommission of third salesperson is= $" << commission3;  // displaying the commission of "THIRD" salesperson.

                average = (sales1 + sales2 + sales3) / 3; // calculating the average of sales of all salespersons using average formula.
                cout << "\n\nAverage of sales= $" << average;

                if (sales1 > sales2) // 1st CONDITION.This condition is true iff sales of first person is higher than sales of second person.
                {
                    if (sales1 > sales3) // this condition is true iff sales of first person is higher than sales of third person.
                    {
                        cout << "\nMAX sales= $" << sales1; // it displays that sales of first person is maximum.
                    }
                    else
                    {
                        cout << "\nMAX sales= $" << sales3; // it displays that sales of third person is maximum.
                    }
                }
                else // if 1st condition false then this condition will execute.
                {
                    if (sales2 > sales3) // this condition displays that sales of second person is higher than sales of third person.
                    {
                        cout << "\nMAX sales= $" << sales2; // it displays that sales of second person is maximum.
                    }
                    else
                    {
                        cout << "\nMAX sale= $" << sales3; // it displays that sales of third person is maximum.
                    }
                }

                if (sales1 < sales2) // this condition displays that sales of first person is higher than sales of second person.
                {
                    if (sales1 < sales3) // this condition displays that sales of first person is higher than sales of third person.
                    {
                        cout << "\nMIN sales= $" << sales1; // it displays that sales of first person is maximum.
                    }
                    else
                    {
                        cout << "\nMIN sales= $" << sales3; // it displays that sales of third person is maximum.
                    }
                }
                else
                {
                    if (sales2 < sales3) // this condition displays that sales of second person is higher than sales of third person.
                    {
                        cout << "\nMIN sales= $" << sales2; // it displays that sales of second person is maximum.
                    }
                    else
                        cout << "\nMIN sales= $" << sales3; // it displays that sales of third person is maximum.
                }
            }
            else // this else gives value if 3rd CONDITION becomes false.
                cout << "invalid sales value.";
        }
        else // this else gives value if 2nd CONDITION becomes false.
            cout << "invalid sales value.";
    }
    else
    { // this else gives value if 1st CONDITION becomes false.
        cout << "invalid sales value.";
    }

    return 0;
}
