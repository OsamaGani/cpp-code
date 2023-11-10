#include<iostream>
using namespace std;
class override
{

public:
	void add(int a,int b,int n){

 int	c=a+b+n;
	cout<<"sum of a and b is "<<c<<endl;
}
};
class B:public override
{

	public:
	void add(int a,int b,int j){
	  int	sum=a*b*j;
		cout<<"multiplication "<<sum;
	}
};
class C:public B{
	public:
	void add(int j,int i,int x){
	int add=j+i+x;
	cout<<"addition  "<<add;
	}
};
int main(){
	C osm;
	osm.override::add(5,5,4);
	osm.B::add(7,9,7);	
}
