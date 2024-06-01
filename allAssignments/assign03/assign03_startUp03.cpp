/*assign03_StartUp03_concept of even or odd number.*/

#include <iostream>
using namespace std;
int main()
{
    int inputNum;
    cout << "Enter a number : ";
    cin >> inputNum;

    if (inputNum % 2 == 0)
    { // if any integer is totaly devisible by 2 then such integer is even number, but if not totally devisible by 2 then such number is odd.
        cout << inputNum << " is even";
    }
    else
    {
        cout << inputNum << " is odd";
    }
    return 0;
}