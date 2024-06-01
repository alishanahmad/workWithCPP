/*assign03_StartUp01_comperison between numbers.*/

#include <iostream>
using namespace std;

int main()
{
	int Num1 = 5, Num2 = 10;

	cout << "Num1 is " << Num1 << " and Num2 is " << Num2 << endl;

	if (Num1 > Num2)
	{
		cout << "Num1 is greater than Num2";
	}
	return 0;
}
// if we write the given program without "semicolon" at the end of "if" condition it gives the first "cout" statement as an output
// if we write the given program with "semicolon" at the end of "if" condition the it gives both "cout" statements.
