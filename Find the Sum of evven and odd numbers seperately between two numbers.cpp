#include<iostream>
using namespace std;
int main()
{
cout<<"\n**************************************************************************";
cout<<"\nProgrammer :  Sohail Zia Gill.";
cout<<"\nTitle: To find the sum of evven and odd numbers between two numbers .";
cout<<"\nCompiler : Visual Studio 19 and Dev c++  ";
cout<<"\nCopy Rights are Reserved";
cout<<"\nIslamic International University Islamabad.";
cout<<"\n***************************************************************************";
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
