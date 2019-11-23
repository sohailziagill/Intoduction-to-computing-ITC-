#include<iostream>
using namespace std;
int main()
{
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

