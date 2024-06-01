/*assign03_task11_BINARY TO DECIMAL CONVERSION*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	unsigned long a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;//these variables are used in the program to perform calculation and store values.
	unsigned long value,value1,dec_value;

	cout<<"Enter binary code for decimal value=";
	cin>>value;

	if(value>1111111111)//1st CONDITION."if" condition is used to avoid over-writing. if user gives input more than 10 than it will display a massage and program will stop.
	{
		cout<<"the range of digits is exceeded.";	
	}
	else  // if 1st condition becomes falls than following part of program will execute.
	{
		a=value%10;			//taking the modulus of given value and store in variale "a".
		value=value/10;		//dividing by 10 to the given value to get value 10 place less.
		
		b=value%10;			//taking the modulus of value remaining from previous block and store in variale "b".		
		value=value/10;		//dividing by 10 to the value remaining from previous block  to get output 10th place less then privious vlaue.
	
		c=value%10;			//taking the modulus of value remaining from previous block and store in variale "c".
		value=value/10;		//dividing by 10 to the value remaining from previous block  to get output 10th place less then privious vlaue.		

		d=value%10;			//taking the modulus of value remaining from previous block and store in variale "d".
		value=value/10;		//dividing by 10 to the value remaining from previous block  to get output 10th place less then privious vlaue.		

		e=value%10;			//taking the modulus of value remaining from previous block and store in variale "e".
		value=value/10;		//dividing by 10 to the value remaining from previous block  to get output 10th place less then privious vlaue.		

		f=value%10;			//taking the modulus of value remaining from previous block and store in variale "f".
		value=value/10;		//dividing by 10 to the value remaining from previous block  to get output 10th place less then privious vlaue.		

		g=value%10;			//taking the modulus of value remaining from previous block and store in variale "g".
		value=value/10;		//dividing by 10 to the value remaining from previous block  to get output 10th place less then privious vlaue.		

		h=value%10;			//taking the modulus of value remaining from previous block and store in variale "h".
		value=value/10;		//dividing by 10 to the value remaining from previous block  to get output 10th place less then privious vlaue.		
	
		i=value%10;			//taking the modulus of value remaining from previous block and store in variale "i".
		value=value/10;		//dividing by 10 to the value remaining from previous block  to get output 10th place less then privious vlaue.		
	
		j=value%10;			//taking the modulus of value remaining from previous block and store in variale "j".
		value=value/10;		//dividing by 10 to the value remaining from previous block  to get output 10th place less then privious vlaue.		
	
		k=value%10;			//taking the modulus of value remaining from previous block and store in variale "k".
		value=value/10;		//dividing by 10 to the value remaining from previous block  to get output 10th place less then privious vlaue.	
			
		l=value%10;			//taking the modulus of value remaining from previous block and store in variale "l".
		value=value/10;		//dividing by 10 to the value remaining from previous block  to get output 10th place less then privious vlaue.		
		
		m=value%10;			//taking the modulus of value remaining from previous block and store in variale "".
		value=value/10;		//dividing by 10 to the value remaining from previous block  to get output 10th place less then privious vlaue.		
		
		n=value%10;			//taking the modulus of value remaining from previous block and store in variale "n".
		value=value/10;		//dividing by 10 to the value remaining from previous block  to get output 10th place less then privious vlaue.			
		
		o=value%10;			//taking the modulus of value remaining from previous block and store in variale "o".
		value=value/10;		//dividing by 10 to the value remaining from previous block  to get output 10th place less then privious vlaue.		
		
		p=value%10;			//taking the modulus of value remaining from previous block and store in variale "p".
		value=value/10;		//dividing by 10 to the value remaining from previous block  to get output 10th place less then privious vlaue.		
		
		
			
		dec_value=(a*1)+(b*2)+(c*4)+(d*8)+(e*16)+(f*32)+(g*64)+(h*128)+(i*256)+(j*512)+(k*1024)+(l*2048)+(m*4096)+(n*8192); // calculating the values and store in decimal value.
		cout<<"the converssion of binary into decimal="<<dec_value;
	}
    return 0;
}
