/*assign03_task07_SHIPING CHARGES*/

#include <iostream>
using namespace std;
int main()
{
    int weight, distance, charge; // taking variable to get respective values.
    float rate;                   // taking "rate" variable to claculate the charges of a ship for carrying luggage.

    cout << "Enter the weight=";
    cin >> weight;

    if (weight >= 0 && weight <= 20) // this condition is true for only if weight is greater than or equale to 2 and less than or equale to 20.
    {
        cout << "Enter the distance=";
        cin >> distance;

        if (distance >= 10 && distance <= 3000) // this condition is true only if distance is in between 10 and 3000.
        {

            if (weight <= 2) // this condition is true only if weight of luggage is less than or equale to 2.
            {
                rate = (distance * 50) / 500; //
                cout << "Rate is=" << rate;
            }
            else if (weight > 2 && weight <= 6) // this condition is true only if weight of luggage is greater than 2 and less than or equale to 6.
            {
                rate = (distance * 100) / 500;
                cout << "Rate is=" << rate;
            }
            else if (weight > 6 && weight <= 10) // this condition is true only if weight of luggage is greater than 6 and less than or equale to 10.
            {
                rate = (distance * 150) / 500;
                cout << "Rate is=" << rate;
            }
            else if (weight > 10 && weight <= 20) // this condition is true only if weight of luggage is greater than 10 and less than or equale to 20.
            {
                rate = (distance * 200) / 500;
                cout << "Rate is=" << rate;
            }
        }
        else // if the distance is less than 10 or greater than 3000 than this condition becomes true.
            cout << "invalid distance.";
    }
    else // if the weight is less than 0 or greater than 20 then this condition becomes true.
    {
        cout << "weight is invalid.";
    }

    return 0;
}