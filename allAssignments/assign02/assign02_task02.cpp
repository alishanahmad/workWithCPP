/*assign02_task02- store and credit problem*/

/*Pseudo code for solving problem*/

/*take a veriable to store the maximum amount of credits of customers
take a veriable to store the used amount of  credits 
take a veriable to calculate the remaining/available amount of  credits
take maximum amount of credits from the user
take used amount of credits
calclulate the available amount of credits by minus the used amount of credits from maximum amount of credits.
display the available amount of credits on screen
*/

#include<iostream>
using namespace std;
int main()
{
	int maxAmount,creditUsed,availableCredit;
	cout<<"Maximum Amount of Credit=";
	cin>>maxAmount;
	cout<<"Used Credit by Customers=";
	cin>>creditUsed;
	availableCredit=maxAmount-creditUsed; //geting available amount of credits by minus the used amount of credits from maximum amount of credits
	cout<<"The Available Credit= "<<availableCredit;
    return 0;
}
