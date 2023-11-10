#include<iostream>
using namespace std;
int main()
{
	int a[]={4,5,1,2,3};
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		if(a[i]<=a[j])
		{
		  int c=a[i];
		  a[i]=a[j];
		  a[j]=c;
		   
		}
		 
	}
	for(int i=1;i<6;i++)
	{
		cout<<a[i];
	}
}
