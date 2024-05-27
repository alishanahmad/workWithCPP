/*assign02_task06- sin angle to cosec angle*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
		int angle;
		float y;
		cout<<"value of angle: ";
		cin>>angle;

		y=1/sin(angle);
		
		cout<<"the value of cosec"<<angle<<"="<<y;
		
}
