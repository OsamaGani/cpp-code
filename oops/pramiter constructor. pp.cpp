#include<iostream>
using namespace std;
class A{
	public:
		void show(int a,int b){
		int c=a+b;
		cout<<"additon of two number.."<<endl<<c;
		
}
};
class B:public A{
	public:
			void show(int x,int y){
			int sum=x+y;
			cout<<"sum of two number.."<<sum;
}
};
class C:public B
{
		public:
		void show(int a,int b){
				int c=a+b;
				cout<<c;
		}	
};
int main()
{
	C ob;
	ob.show(8,8);
	ob.B::show(8,8);
	ob.A::show(6,6);
	
}
