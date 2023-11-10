#include<iostream>
using namespace std;
class A
{
	public:
	void osm(){
		cout<<"irfan";
	}		
};
class B :public A{
	public:
	void osm(){
		cout<<"chillar";
	}
};
int main(){
	B obj;
	obj.osm();	
	return 0;	
}
