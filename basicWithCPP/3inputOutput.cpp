// Taking data from user and displaying on screen

#include <iostream>
using namespace std;
int main()
{
    // declaring and initializing a variable by taking input from user

    int number;                       // declaration
    cout << "Enter the number:"; // displaying a message for user to get input
    cin >> number;               // taking number from user using cin object of iostream lib
    cout << "User give me number: " << number; // displaying the number which user will give
    return 0;                                  // return 0, used to show the main function is successfully working
}