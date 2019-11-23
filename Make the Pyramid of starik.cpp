#include<iostream>
using namespace std;
int main()
{
cout<<"\n**************************************************************************";
cout<<"\nProgrammer :  Sohail Zia Gill.";
cout<<"\nTitle: To make the pyramid of * with for loop .";
cout<<"\nCompiler : Visual Studio 19 and Dev c++  ";
cout<<"\nCopy Rights are Reserved";
cout<<"\nIslamic International University Islamabad.";
cout<<"\n***************************************************************************";
	int rows;
	cout<<"Enter the number od rows";
	cin>>rows;
	for(int i=0;i<rows;++i)
	{
		for(int j=0;j<i;++j)
		{
			cout<<"*"<<"\t";
		}
	
	cout<<"\n";
	}
	return 0;
}
