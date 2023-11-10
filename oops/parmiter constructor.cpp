#include<iostream>
using namespace std;
class A{
	int a,b;
	public:
		A(int x,int y){
			a=x,b=y;
		}
		void show(){
			cout<<a<<" "<<b;
		}
};
int main()
{
	A obj(5,7);
	obj.show();
		
}
