#include<iostream>
using namespace std;
int main()
{
cout<<"\n**************************************************************************";
cout<<"\nProgrammer :  Sohail Zia Gill.";
cout<<"\nTitle: Array of 50 numbers if numbers are less then 25 the take sqaure of that number if greater than 25 then multiply
with 3 and store it to the same array and also find average,sum the maximum and minimum number fron that array .";
cout<<"\nCompiler : Visual Studio 19 and Dev c++  ";
cout<<"\nCopy Rights are Reserved";
cout<<"\nIslamic International University Islamabad.";
cout<<"\n***************************************************************************";
	float alpha[50];
	int sum=0;
	int h=0, j=0;
	float ave;
	for(int i=0;i<50;++i)
	{
		if(i<25)
		alpha[i]=i*i;
		else
		alpha[i]=3*i;
			if((i)%10==0)
		cout<<endl;
		cout<<alpha[i]<<" ";
	sum=sum+alpha[i];
 if(alpha[h]<alpha[i])
	  {
      alpha[h]=alpha[i];
 }
       if(alpha[j]>alpha[i])
        {
            alpha[j]=alpha[i];
        }
         
	}
ave=sum/50;
cout<<"\nSum of numbers are  "<<sum<<"\n";
cout<<"Average of numbers are  "<<ave;
cout<<"\nThe greatet number is  "<<alpha[h];
cout<<"\nThe smallest number is   "<<alpha[j];
return 0;
}
