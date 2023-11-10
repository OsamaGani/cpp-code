#include<iostream>
using namespace std;
class A
{
	public:
	virtual void show()=0;
	void fun()
	{
		cout<<"base class";
		}	
};
class B: public A{
	public:
		void show(){
		cout<<"derived class."<<endl;
		}
};
int main(){
	B ob;
	ob.show();
	ob.fun();
}
