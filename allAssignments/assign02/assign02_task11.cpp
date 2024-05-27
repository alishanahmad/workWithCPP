/*assign02_task11- calories per serving*/

#include <iostream>
// #include<string>
using namespace std;
int main()
{
    int cookies;
    double totalCalories;
    cout << "enter number of cookies you consumed=";
    cin >> cookies;

    totalCalories = cookies * (300 / 40); // myltiplied the no. of cookies consumed by a person to the calories served by 40 cookies.

    cout << "Total calories you consumed are= " << totalCalories;

    return 0;
}
