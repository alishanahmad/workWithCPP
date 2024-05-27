/*assign02_task01- analysis of code*/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double value1, value2, value3; // declare three double data typed variable to store the required data

    cout << "Enter the number : ";
    cin >> value1; // "value1" varible is used to take a no. from the used which needs to get square

    value2 = 2 * pow(value1, 2.0);
    cout << "value 2: " << value2 << endl;

    value3 = 3 + value2 / 2 - 1; // acourding to given condintion this statement displays the square of the given no and in addition of 2.
    cout << "value 3: " << value3;

    return 0;
}