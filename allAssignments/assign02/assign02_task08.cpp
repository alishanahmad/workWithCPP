/*assign02_task08- stadium Capacity*/


#include<iostream>
using namespace std;
main()
{{
	int ClassA=2000,ClassB=1000,ClassC=500,ClassA_seats,ClassB_seats,ClassC_seats;
	int incomeA,incomeB,incomeC,total_income;
	
	cout<<"Enter Class A Tickets=";
	cin>>ClassA_seats;
	
	cout<<"Enter Class B Tickets=";
	cin>>ClassB_seats;
	
	cout<<"Enter Class C Tickets=";
	cin>>ClassC_seats;
	
	incomeA=ClassA*ClassA_seats;
	incomeB=ClassB*ClassB_seats;
	incomeC=ClassC*ClassC_seats;
	total_income=incomeA+incomeB+incomeC;
	
	cout<<"Total   Income       ="<<total_income<<"   Rs";
}}
