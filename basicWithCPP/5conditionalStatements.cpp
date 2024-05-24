/*All conditional Statemenets are discussed here*/

#include <iostream>
using namespace std;
main()
{
    /*Following are going to be discussed:
    1-if statement
    2-if-else statement
    3-if-else-if statement
    4-switch statement
    5-Ternary (conditional) operator
    6-Nested conditional statement*/

    /*Here i need to use comparison operator (less than <, and greater then >)  which are binary operator
    discussed in detailed in the file "6binaryOperator.cpp"*/

    int integer1 = 25, integer2 = 50, integer3 = 75;

    /**********if condition***************/

    if (integer1 < integer2){
        cout << "if integer1 exists then show it here:" << integer1;
    }

    /*********if-else statement**********/

    if (integer3 < integer1){
        cout << "there is integer3 exists:" << integer3 << endl;
    }
    else
    { // if the "if" condition becomes "false" then else condition runs
        cout << "if integer1 exists then show it here:" << integer1;
    }

    /*********if-else-if statement**********/

    if (integer3 < integer2){
        cout << "there is integer3 exists:" << integer3 << endl;
    }
    else if (integer1 < integer2){              // if the "if" condition becomes "false" then else condition runs
        cout << "if integer1 exists then show it here:" << integer1 << endl;
    }
    else{                                       // if the "if" condition becomes "false" then else condition runs
        cout << "there is no such integer.";
    }

    // in above if-else-if condition the else-if condition becomes true and the integer1 displayed on the screen


    /*********switch statement**********/
    /*it is used to check multiple conditions at the same time in its body by using keyword case and value in front of case*/
    switch(integer1){
        case 15:        
            cout << "integer1 is 25" << endl;
            break;  //break statement is used to separate one case from other case 
        case 25:
            cout << "integer1 is 25" << endl;
            break;
        case 50:
            cout<< "integer1 is 50" << endl;
            break;
    return 0;
}
