#include<iostream>
using namespace std;
int main()
{
	int num1, num2;
	int sum=0, sum1=0;
	cout<<"Enter the lower limit";
	cin>>num1;
	cout<<"Enter the upper limit";
	cin>>num2;
	for(num1;num1<num2;num1++)
{
	if(num1%2==0)
	sum=sum+num1;
	else
	sum1=sum1+num1;
}
cout<<"Sum of all evven numbers are   "<<sum<<endl;
cout<<"Sum of all odd numbers are    "<<sum1;
return 0;
}
