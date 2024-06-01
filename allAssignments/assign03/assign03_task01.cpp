/*assign03_task01_MAGIC DATE*/

#include <iostream>
using namespace std;
int main()
{
    unsigned long day, month, year; // taking unsigned long data type as time can never be negative.
    int calculator;                 // taking "calculator" variable to calculate the relation of month and days.

    cout << "Enter the day=";
    cin >> day; // entering days as an input.

    cout << "Enter the month=";
    cin >> month; // entering months as an input.

    cout << "Enter the year=";
    cin >> year; // entering years as an input.

    cout << "\n\n"
         << day << "/" << month << "/" << year; // writing "days","months" and "year" in a sequance.

    calculator = month * day; // calculating the total time via months times days.

    if (year == calculator) // using condition "if calculated value is equal to the total years then its a magic date".
    {
        cout << "\nDate is magic";
    }
    else
    { // using else for non magic date.
        cout << "\nDate is not magic";
    }
    return 0;
}
