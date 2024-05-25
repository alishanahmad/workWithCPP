/* assign01_task09- sequar feet to acres area calculation.*/

#include <iostream>
using namespace std;
main()
{
    double numbersOfAcre;
    int sqrFeetInAcre = 43560;
    double givenAreaInSqrFeet = 389767;

    numbersOfAcre = givenAreaInSqrFeet / sqrFeetInAcre;
    cout << "Total numbers of acre=  " << numbersOfAcre;

    return 0;
}