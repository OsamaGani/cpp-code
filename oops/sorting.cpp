#include<iostream>
using namespace std;
int main()
{
	int a[]={1,3,5,4,2};
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{  
			if(a[i]<a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		 
		}
	}
	for(int i=0;i<5;i++)
	{
		cout<<a[i];
	}
}
