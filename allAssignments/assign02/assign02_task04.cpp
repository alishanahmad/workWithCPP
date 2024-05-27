/*assign02_task04- Concept of variable overflow and underflow.*/

#include <iostream>
using namespace std;
int main()
{
    short testVariable = 32767; // taking a test variable to enter assign the highest value of "short" data type
    cout << "value of test variable is : " << testVariable << endl;

    testVariable = testVariable + 1; // adding 1 in test variable to observe the behaviour of "short" data type.
    cout << "value of test variable after adding 1 : " << testVariable << endl;

    testVariable = testVariable - 1;
    cout << "value of test variable after subtracting 1 : " << testVariable;

    return 0;
}
