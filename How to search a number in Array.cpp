#include<iostream>
using namespace std;
int main()
{
cout<<"\n**************************************************************************";
cout<<"\nProgrammer :  Sohail Zia Gill.";
cout<<"\nTitle: To find/search the number in array.";
cout<<"\nCompiler : Visual Studio 19 and Dev c++  ";
cout<<"\nCopy Rights are Reserved";
cout<<"\nIslamic International University Islamabad.";
cout<<"\n***************************************************************************";
	int num;
	int marks[5]={1,2,3,4,};
	cout<<"Enter the number that you want to search ";
	cin>>num;
	for(int i=0;i<=5;++i)
	{
	if(marks[i]==num)
	{
		cout<<"Number found in"<<i+1<<endl;
		cout<<"The number is"<<marks[i];
		break;
		}	
		else
		{
			cout<<"Number not found";
			break;
					}
	}
	return 0;
	}
