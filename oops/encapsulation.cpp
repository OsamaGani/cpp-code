#include<iostream>
using namespace std;
class thief
{	
private:
	string name,address;
	int mob;
	public:
		void input(){
			name="Anas";
			address="Lucknow";
			mob=8957417685;
		}
		void output(){
			cout<<name<<endl;
			cout<<address<<endl;
			cout<<mob;
		}
	};
	class pulice : public thief
	{
	};
int main(){
	pulice osm;
	osm.input();
	osm.output();
}
