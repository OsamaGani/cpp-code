#include<iostream>
using namespace std;
class A{
	int a,b;
	public:
		A(int x, int y){
			a=x; b=y;
			
		}
		A(A&osm){
			a=osm.a;
			b=osm.b;
		}
		void show(){
			cout<<a<<" "<<b;
		}
};
   int main(){
	
	A ob(5,3);
	ob.show();
}
