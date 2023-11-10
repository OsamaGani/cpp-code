#include<iostream>
using namespace std;
class thief{
	private:
	string name,address;
	int mobile;
	public:
	void input(){
	name="altaf";
	address="mumbra";
	mobile=8957417685;
    }
	void output()
	{
	cout<<name<<endl;
	cout<<address<<endl;
	cout<<mobile; 
	}
};
int main()
{
thief osm;
osm.input();
osm.output();	
}
