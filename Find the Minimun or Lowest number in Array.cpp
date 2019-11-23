#include<iostream>
using namespace std;
int main()

{
cout<<"\n**************************************************************************";
cout<<"\nProgrammer :  Sohail Zia Gill.";
cout<<"\nTitle: The lowest or minimun number in 1 D Array .";
cout<<"\nCompiler : Visual Studio 19 and Dev c++  ";
cout<<"\nCopy Rights are Reserved";
cout<<"\nIslamic International University Islamabad.";
cout<<"\n***************************************************************************";
	int list[10];
    int num;
	for(int i=0;i<10;++i)
	{
		cout<<"Enter the number in index in   "<<i+1<<"\t";
		cin>>num;
		list[i]=num;
	}
	int g=0;
	for(int i=0;i<10;++i)
	{
		if(list[g]>list[i])n
		list[g]=list[i];
	}
	cout<<"The lowest number is    "<<list[g];
	return 0;
}
