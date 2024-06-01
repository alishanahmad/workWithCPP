/*assign03_task02_AREA OF RECTANGLE*/

#include <iostream>
using namespace std;
int main()
{

    // as there are two rectangles so taking every variable for two times to calculate the area of both rectangles.

    float length1, width1, length2, width2; // taking "length1 and width1" for rectangle1 and "length2 and width2" for rectangle2.

    float area1, area2; // taking two variable "area1" and "area2" to calculate the area of "rectangle1" and "rectangle2" respectively.

    cout << "Enter the length of first rectangle=";
    cin >> length1;
    cout << "Enter the width of first rectangle=";
    cin >> width1;

    cout << "Enter the length of second rectangle=";
    cin >> length2;
    cout << "Enter the width of second rectangle=";
    cin >> width2;

    area1 = length1 * width1; // as area is length times width.
    cout << "The area of first rectangle=" << area1;

    area2 = length2 * width2; // as aera is length times width.
    cout << "\nThe area of second rectangle=" << area2;

    // using "if" condition to find a rectangle having large area.

    if (area1 > area2) // in this condition if area1 is greater than area2 then it means that rectangle1 has larger area than rectangle2.
    {
        cout << "\nArea of first rectangle is greater.";
    }
    else
    {
        cout << "\nArea of second rectangle is greater.";
    }
}