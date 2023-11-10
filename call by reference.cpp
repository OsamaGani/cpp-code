#include<iostream>
using namespace std;
int add(int &a ,int &b)
{
	
	a=100;
	b=200;
	return a+b;
}
int main()
{
	int q,w,e;
	q=10;
	w=7; 
	cout<<q<<"\n"<<w<<endl;
	e=add(q,w);
	
	
   cout<<q<<"\n"<<w;
}
