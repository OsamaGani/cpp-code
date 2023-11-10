#include<iostream>
using namespace std;
class A{
	int a,b;
	public:
		A(int a,int b){
			this->a=a; this->b=b;
		}
		void show(){
			cout<<a<<" "<<b;
		}
};
int main(){
	A ob(6,8);
	ob.show();
}
