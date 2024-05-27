/*assign02_task09- Average rain calculations*/

#include <iostream>
#include <string>

using namespace std;
int main()
{
    string firstMonth, secondMonth, thirdMonth;
    int firstMonthRainfall, secondMonthRainfall, thridMonthRainfall;
    float averageRainfall;

    cout << "name of first month ";
    cin >> firstMonth;

    cout << "name of second month ";
    cin >> secondMonth;

    cout << "name of third month ";
    cin >> thirdMonth;

    cout << "enter the rainfall for first month= ";
    cin >> firstMonthRainfall;

    cout << "enter the rainfall for second month= ";
    cin >> secondMonthRainfall;

    cout << "enter the rainfall for third month= ";
    cin >> thridMonthRainfall;

    averageRainfall = (firstMonthRainfall + secondMonthRainfall + thridMonthRainfall) / 3;

    cout << "average rainfall of " << firstMonth << ", " << secondMonth << " & " << thirdMonth << " is " << averageRainfall << " millimeter.";

    return 0;
}
