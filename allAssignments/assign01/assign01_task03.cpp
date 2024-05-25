/*assign01_task03-changing psudocode into program, speed,time and distance relation*/
#include <iostream>
using namespace std;
int main()
{
    /*here according to given values, intialised variables with integer data type
    otherwise these all values measured in double practicaly.*/

    int speed = 20;
    int time = 10;
    int distance;

    distance = speed * time; // mathematical formula to calculate distance

    cout << "Distance is " << distance;
    return 0;
}