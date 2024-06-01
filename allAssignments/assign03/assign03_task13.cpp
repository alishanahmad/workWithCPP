/*assign03_task11_GEAOMETRY CLACULATOR*/

#include <iostream>
#include <cmath>   //cmath for taking power of radius
#define PI 3.14159 // using defined value of PI.

using namespace std;
int main()
{
    int x;                                                  // variable "x" is used to choose a spacific block e.g block of circle ,block of rectangle etc.
    double length, width, base, height, radius, area, a, b; // all variable are used to get respective value but variable "a" and "b" are used to get value of bases of TRAPEZOID.

    cout << ""; // taking first input to choose the spacific block.
    cin >> x;

    if (x >= 1 && x <= 6) // it shows that if the x having value equale greater than 1 and less than equale to 6 then this condition is true and program further proceeds.
    {
        if (x == 1) // it shows that if user choose 1 then he/she able to solve and find the area of CIRCLE.
        {
            cout << "Enter the radius of circle=";
            cin >> radius;

            if (radius < 0) // there is condition that if value of RADIUS is negartive than it displays a massage that there is a invalid or negative value.
            {
                cout << "invalid/negative value.";
            }
            else
            {
                area = PI * (pow(radius, 2));
                cout << "\nArea of Circle=" << area;
            }
        }
        else if (x == 2) // it shows that if user choose 2 then he/she able to solve and find the area of RECTANGLE.
        {
            cout << "Enter the LENGTH of rectangle=";
            cin >> length;
            cout << "Enter the WIDTH of rectangle=";
            cin >> width;

            if (length < 0 || width < 0) // there is condition that if value of LENGTH or WIDTH is negartive than it displays a massage that there is a invalid or negative value.
            {
                cout << "invalid/negative value.";
            }

            else
            {
                area = length * width; // using formula of rectangle to find its area.
                cout << "Area of RECTANGLE=" << area;
            }
        }
        else if (x == 3) // it shows that if user choose 3 then he/she able to solve and find the area of TRIANGLE.
        {
            cout << "Enter the length of BASE of triangle=";
            cin >> base;
            cout << "Enter the height of triangle=";
            cin >> height;

            if (length < 0 || height < 0) // there is condition that if value of LENGTH or HEIGHT is negartive than it displays a massage that there is a invalid or negative value.
            {
                cout << "invalid/negative value.";
            }

            else
            {

                area = base * height * 0.5; // using formula of TRIANGLE to find its area.
                cout << "Area of TRIANGLE=" << area;
            }
        }
        else if (x == 4) // it shows that if user choose 4 then he/she able to solve and find the area of CYLINDER.
        {
            cout << "Enter the hight of cylinder=";
            cin >> height;
            cout << "Enter the radius of cylinder=";
            cin >> radius;

            if (height < 0 || radius < 0) // there is condition that if value of HEIGHT or RADIUS is negartive than it displays a massage that there is a invalid or negative value.
            {
                cout << "invalid/negative value.";
            }

            else
            {
                area = (pow(radius, 2) * 2 * PI) + height * (2 * PI * radius); // using formula of area of CYLINDER to find its area.
                cout << "Area of CYLINDER=" << area;
            }
        }
        else if (x == 5) // it shows that if user choose 5 then he/she able to solve and find the area of TRAPEZOID.
        {
            cout << "Enter the base a=";
            cin >> a;
            cout << "Enter the base b=";
            cin >> b;
            cout << "Enter the height of Trapezoid=";
            cin >> height;

            if (height < 0 || a < 0 || b < 0) // there is condition that if value of HEIGHT or BASE "a" or BASE "B" is negartive than it displays a massage that there is a invalid or negative value.
            {
                cout << "invalid/negative value.";
            }

            else
            {

                area = height * ((a + b) / 2); // using formula of AREA OF TRAPEZOID to find its area.
                cout << "The area of TRAPEZOID=" << area;
            }
        }
        else if (x == 6) // if user choose block 6 then it will display a message QUIT and program will ended.
            cout << "QUIT";
    }

    else
    {
        cout << "invalid range.";
    }
    return 0;
}
