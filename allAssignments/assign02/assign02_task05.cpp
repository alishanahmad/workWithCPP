/*assign02_task05- Concept of trigonometry*/

#include <iostream>
#include <cmath>
#define PI 3.12149
using namespace std;
int main()
{
    float angle1, angle2, x;

    cout << "value of angle1 in radian= ";
    cin >> angle1;

    cout << "value of angle2 in radian= ";
    cin >> angle2;

    angle1 = angle1 * (180 / PI);
    angle2 = angle2 * (180 / PI);
    x = sin(angle1) + cos(angle2);

    cout << "value of x=" << x;
}
