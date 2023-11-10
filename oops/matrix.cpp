#include<iostream>
using namespace std;
int main()
{
	int a[][3]={2,4,5,6,7,83,2};
	for(int i=0;i<=2;i++)
	{
		for(int j=0;j<=2;j++)
		{
		  int temp=a[i][j];
		   a[i][j]=a[j][i];
		   a[j][i]=temp;
		   //cout<<temp;0
		}
	}
	for(int i=0;i<=2;i++)
	{
		for(int j=0;j<=2;j++)
		{
			cout<<a[j][i]<<"  ";
		}
	cout<<endl;
}
}
