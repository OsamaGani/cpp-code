#include<iostream>
using namespace std;
class A{
	public:
		void sum(int a,int b,int c){
			c=a+b+c;
			cout<<"addition  "<<c;
		}
		public:
		void sum(int i,int j){
		int sum=i+j;
		cout<<"Addition  "<<sum;
	}
	public:
		void sum(int i,int j,int c,int d){
		int sum=i+j+c+d;
		cout<<"Addition  "<<sum;
	}
};
int main()
{
	A ob;
	 ob.sum(7,8);
	ob.sum(7,9,7);
	ob.sum(7,8,9,7);
}
