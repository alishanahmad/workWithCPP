// All basic Arithmatic Operations are performed here

#include <iostream>
using namespace std;
int main()
{
    // comma operator ','  is used to declare multiple variable of same datatype in a single line
    // comma operator is an other type of operator
    int integer1, integer2, sum, sub, mul;
    double dev, mod;
    // int integer1;
    // int integer2;

    cout << "Enter First Integer:";
    cin >> integer1;
    cout << "Enter second Integer:";
    cin >> integer2;

    sum = integer1 + integer2; // summition of two number
    sub = integer1 - integer2; // subtraction of two number
    mul = integer1 * integer2; // multiplication of two number
    dev = integer1 / integer2; // devision of two number
    mod = integer1 % integer2; // modulus of two number

    cout << "summition:" << sum << endl;
    cout << "subtraction:" << sub << endl;
    cout << "multiplication:" << mul << endl;
    cout << "devision:" << dev << endl;
    cout << "modulus:" << mod;

    return 0;
}
