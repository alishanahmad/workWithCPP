/*assign03_task10_CREDIT LIMITS*/

#include<iostream>
using namespace std;
int main()
{
	int account_num;				//using acount_num variaable to store tha acount number of client.
	long beginning_balance; 		//this variable is used to store the orignal balance of client.
	long items_charge;      		//this variable is used to store the items charged by the client.
	long credit_applied;			//this variable is used to store the .
	long allowed_credit_limit;		//this variable is used to store the .
	long new_balance;				//this variable is used to store the .

	cout<<"Enter the account number=";
	cin>>account_num;     // taking acount number as an input.

	cout<<"\nEnter the beginning balance of the month=";
	cin>>beginning_balance;

	cout<<"\nTotal of all items charged by the customer=";
	cin>>items_charge;

	cout<<"\nEnter the credits applied to this customer's account this month=";
	cin>>credit_applied;

	cout<<"\nAllowed credit limit=";
	cin>>allowed_credit_limit;

	new_balance=(beginning_balance+items_charge-credit_applied);// using formula to claculate the new balance after deduction of credit applied.
	cout<<"\nNew balance ="<<new_balance;
	
	if(new_balance>allowed_credit_limit) // if new balance after deducting all charges is greater than allowed limit then this condi
	{
		cout<<"\nThe account number="<<account_num;
		cout<<"\nAllowed credit limit="<<allowed_credit_limit;
		cout<<"\nNew balance ="<<new_balance;
		cout<<"\nCredit Limit Exceeded.";
	}
    return 0;

}
