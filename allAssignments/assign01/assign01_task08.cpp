/* assign01_task08- Sea Level*/

#include <iostream>
using namespace std;
main()
{
    /*Level is actually level of sea */
    float annualIncreaseLevel = 1.5;
    float levelAfterYear5 = 5 * annualIncreaseLevel;
    float levelAfterYear7 = 7 * annualIncreaseLevel;
    float levelAfterYear10 = 10 * annualIncreaseLevel;

    cout << "currently ocean level= " << annualIncreaseLevel << " mm" << endl;
    cout << "ocean level after 5 years= " << levelAfterYear5 << " mm" << endl;
    cout << "ocean level after 7 years= " << levelAfterYear7 << " mm" << endl;
    cout << "ocean level after 10 years= " << levelAfterYear10 << " mm";
    
    return 0;
}