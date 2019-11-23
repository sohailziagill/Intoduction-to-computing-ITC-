#include<iostream>
using namespace std;
int main()
{
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
		if(list[g]<list[i])
		list[g]=list[i];
	}
	cout<<"The greastest number is    "<<list[g];
	return 0;
}
