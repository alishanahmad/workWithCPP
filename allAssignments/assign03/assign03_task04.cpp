/*assign03_task04_MASS & WEIGHT*/

#include <iostream>
using namespace std;
int main()
{
    double mass, weight; // taking two variable "mass" and "weight" having "double" data type because both may have floating or integer value.

    cout << "Enter the mass of object=";
    cin >> mass;

    weight = mass * 9.8; // as weight of an object accourding to newton second equation w=ma. where a=g  "g" is greavitational constant having value 9.8
    cout << "The weight of object=" << weight;

    // using if condition to find heavy or light weight object.
    if (weight > 1000)
    {
        cout << "\nObject is too heavy.";
    }
    else if (weight < 1000)
    {
        cout << "\nObject is too light.";
    }
    return 0;
}