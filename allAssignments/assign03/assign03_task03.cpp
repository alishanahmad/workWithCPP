/*assign03_task03_BODY MASS INDEX*/

#include <iostream>
#include <cmath> //using cmath library to calculate the square of height.
using namespace std;
int main()
{

    double weight, // taking variable "weight" to find weight of a person.
        height,    // taking variable "height" to find height of a person.
        BMI;       // taking variable "BMI" to find  the BODY MASS INDEX of a person.

    cout << "Enter weight of person=";
    cin >> weight;
    cout << "Enter height of person=";
    cin >> height;

    BMI = weight * 703 / pow(height, 2); // using formula of BMI to find the BODY MASS INDEX of a person.
    cout << "The BMI of person is=" << BMI;

    if (BMI < 18.5)
    {
        cout << "\nPerson is under-weighted.";
    }
    else if (BMI > 25)
    {
        cout << "\nperson is over-weighted.";
    }
    else
    {
        cout << "\nperson has optimal BMI.";
    }
    return 0;
}
