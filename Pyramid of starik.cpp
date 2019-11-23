#include<iostream>
using namespace std;
int main()
{
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
