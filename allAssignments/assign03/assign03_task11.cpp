/*assign03_task11_PALINDROM*/

#include<iostream>
using namespace std;
int main()
{
	int value;		//declaring a variable to get input.
	int a,b,c,d,e,x,y,z; // these variables are used in different ways in this program.
	
	cout<<"Enter a value=";//taking a value as an input.
	cin>>value;
	
	if(value>99999)// 1st CONDITION. It shows that "if" condition is true iff variable having more than five digit value.
	{
 		cout<<"you enter out of the range of required value.";	
	}
	else // if the 1st CONDITION is false then this part of program will be executed.
	{
		a=value/10000; // it shows that "a" will store digit at most right side of value.
		y=a*10000;     //it shows that "y" will store the value of 10000 times of digit stored in variable "a".
		
		
		value=value%10000;  //this statment shows that "value" stores modulus of 10000 with real value of variable " value".
		b=value/1000;		//this statment shows that "b" will stores value of variable "value" devided by 1000 after the modulation.
		y=y+(b*1000);		//this formula calculates the 1000 times of "b" and sum with "y" of the previous block.
		
		value=value%1000;	//this statment shows that "value" stores modulus of 1000 with value of variable " value" of privious this block.
		c=value/100;		//this statment shows that "c" will stores value of variable "value" devided by 100 after the modulation.
		y=y+(c*100);		//this formula calculates the 100 times of "c" and sum with "y" of the previous block.
		
		value=value%100;	//this statment shows that "value" stores modulus of 100 with value of variable " value" of privious block.
		d=value/10;			//this statment shows that "d" stores value of variable "value" devided by 10 after the modulation.
		y=y+(d*10); 		//this formula calculates the 10 times of "d" and sum with "y" of the previous block.
	
		value=value%10;   	//this statment shows that "value" stores modulus of 10 with value of variable " value" of privious block. 
		e=value/1;			//this statment shows that "e" will stores value of variable "value" devided by 1 after the modulation.
		y=y+(e*1); 			//this formula calculates the 1 times of "e" and sum with "y" of the previous block.
		
		if(a==e&&b==d) // it shows that this condition is true iff "first" digit is equale to "last" and "second" digit is equale to "second last" digit.
		{
			cout<<"palindrome.";
		}		
		else
			cout<<"not palindrome.";
	}
	return 0;
}
