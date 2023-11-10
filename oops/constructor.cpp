#include<iostream>
using namespace std;
class student
{
	int rol_no;
	char name[10];
	float fee;
	public:
	student(){
		cout<<"enter the rol no..";
		cin>>rol_no;
		cout<<"enter the name...";
		cin>>name;
		cout<<"enter the fee..";
		cin>>fee;
	}
	void show(){
		cout<<"rol no of student is="<<rol_no<<endl<<"name of sutdent is="<<name<<endl<<"fee of student is="<<fee<<endl;
	}
};
int main(){
	student s;
	s.show();
}
