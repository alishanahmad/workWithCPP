#include <iostream>
using namespace std;
int main()
{
    /*There are Comparison Operators are as following:
    1- equal to ==
    2- not equal to !=
    3- less than <
    4- less than equal to <=
    5- greater than >
    6- greater than equal to >=
    */

   int a=10,b=15,c=20,d=15;

    //1- equal to ==
    if(b==d)
    {
        cout<<"1- Equal To  ==\n";
        cout<<"b and d are equal. \n\n";
    }

    //2- not equal to !=
    
    if(a!=d)
    {
        cout<<"2- Not Equal To  !=\n";
        cout<<"a and d are not equal. \n\n";
    }
    // 3- less than <
    if(a<c)
    {
        cout<<"3-a less than c <\n";
        cout<<"a less than c. \n\n";
    }
    
    // 4- less than equal to  <=
    if(d<=c)
    {
        cout<<"4- Less than Equal To  <=\n";
        cout<<"d and c are equal. \n\n";
    }

    //5-greater than >
    
    if(c>d)
    {
        cout<<"5- Greater Than  >\n";
        cout<<"c is great than d. \n\n";
    }
    //6-greater than equal to >=
    if(b>=d)
    {
        cout<<"6-Greater Than Equal To  >=\n";
        cout<<"b is greater than equal to d\n\n";
    }
    return 0;
}