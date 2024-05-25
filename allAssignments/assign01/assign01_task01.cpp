/*assign01_task01-Initial Letters of First,Middle and Last Name*/

#include <iostream>
using namespace std;
int main()
{
    char first = 'a', middle = 's', last = 'a';
    cout << "itials with single quotes:\n first: " << first << "\nmiddle: " << middle << "\nlast: " << last;

    // first="A";
    // middle="S";
    // last="A";

    /*as all variables are declared as character variable , but on line 7,8 and 9 we are trying to store string
     which is not possible and syntax error*/

    cout << "itials with single quotes:\n first: " << first << "\nmiddle: " << middle << "\nlast: " << last;

    return 0;
}