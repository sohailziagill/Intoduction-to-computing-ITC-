#include<iostream>
using namespace std;
int main()
{
cout<<"\n**************************************************************************";
cout<<"\nProgrammer :  Sohail Zia Gill.";
cout<<"\nTitle: To check the enterd number by user is prime number or not .";
cout<<"\nCompiler : Visual Studio 19 and Dev c++  ";
cout<<"\nCopy Rights are Reserved";
cout<<"\nIslamic International University Islamabad.";
cout<<"\n***************************************************************************";
int num, count=0;
cout<<"Enter the number";
cin>>num;
for(int i=2;i<num;++i)
{
    if(num%i==0)
    {
        count=count+1;
    }
}

    if(count>1)
    cout<<"Number is not prime";
    else
    cout<<"Number is prime";
    return 0;

}

