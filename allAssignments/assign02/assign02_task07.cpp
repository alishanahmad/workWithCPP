/*assign02_task07-denomination*/

#include<iostream>
using namespace std;
int main()
{
	int amount,notes;//"amount " variable is used to take amount as input and 
					   //"notes" variable is used to store the no. of notes in given amount 
	cout<<"The total amount is=";
	cin>>amount;
	
	if(amount/500)
	{
		notes=amount/500;
		cout<<"500:"<<notes;
		
		amount=amount%500;// take the modulous of given amount with every up level note to get lower level note.
		notes=amount/100;
		cout<<"\n100:"<<notes;
	
		amount=(amount%100);
		notes=amount/50;
		cout<<"\n50:"<<notes;
		
		amount=amount%50;
		notes=amount/20;
		cout<<"\n20:"<<notes;
		
		amount=amount%20;
		notes=amount/10;
		cout<<"\n10:"<<notes;
		
		amount=amount%10;
		notes=amount/5;
		cout<<"\n5:"<<notes;
		
		amount=amount%5;
		notes=amount/1;
		cout<<"\n1:"<<notes;
	}
	
    return 0;
}
