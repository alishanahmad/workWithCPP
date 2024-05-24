#include <iostream>
using namespace std;
int main()
{
    /*Discussed arithmetic operator in 4arithmeticOperatore.cpp file , which are binary operator,
    here we we'll discuss few more BINARY 0PERATORS and UNARY OPERATORS as well*/

    /*Unary Operators:
    1-Increament ++
    2-Decreament --
    3-Logical Not !
    */

    int a = 10, b = 20;
    int c = 8;
    // Prefix Increament
    cout << "PREFIX INCREAMENT:\n";
    cout << "before Operation on a: " << a << endl;
    cout << "during operation on a: " << ++a << endl;
    cout << "after increament on a: " << a << endl;
    // Postfix Increament

    cout << "\nPOSTFIX INCREAMENT:\n";
    cout << "before operation on b: " << b << endl;
    cout << "during operation on b: " << b++ << endl;
    cout << "after increament on b: " << b << endl;

    if (!c) // if c has no value then this condition will be satisfied
    {
        cout << "\n\nc has no value\n\n";
    }
    else
    {
        cout << "\n\n c has value : " << c << "\n\n";
    }
    return 0;
}