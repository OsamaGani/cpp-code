#include<iostream>
using namespace std;
class A
{
	protected:
	int a,b;
	public:
	void input(){
		cout<<"Enter the two numbers.";
		cin>>a>>b;
		
	}	
};
class B :public A{
	int c;
	public:
	void add() {
		c=a+b;
		cout<<"addition of two number="<<c<<endl;
	}
	void sub(){
		c=a-b;
		cout<<"substraction of two number="<<c<<endl;
	}
};
class C :public B{
	int c;
	public:
		void multi(){
			c=a*b;
			cout<<"multiplication of two number="<<c<<endl;
		}
		void div(){
			c=a/b;
			cout<<"division of two number="<<c;
		}
};
int main()
{
C osm;
osm.input();
osm.add();
osm.sub();
osm.multi();
osm.div();	
	
}
