#include<iostream>
using namespace std;
class overlod
{

public:
	void add(int a,int b,int c){

	int sum=a+b+c;
	cout<<"sum of a and b is "<<sum<<endl; 
}
	void add(int a,int b){
		int sum=a-b;
		cout<<"substraction  "<<sum<<endl;
	}
	void add(int i,int j,int k,int l){
		int total=i*j*k*l;
		cout<<total;
	}
};
int main(){
	overlod obj;
	obj.add(7,8,1);
	obj.add(100,50);
	obj.add(6,6,6,6);
}
