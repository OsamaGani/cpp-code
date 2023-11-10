#include<iostream>
using namespace std;
class Dad{
	protected:
		int amount;
		public:
		void input(){
		amount=7490407;
		}
};
class son : public Dad{
	int money; 	
	public:
		void show(){
			money=57030;
			cout<<"Son money "<<money<<endl;
			cout<<"Dad money "<<amount;
		}
};

int main()
{
son osm;
osm.input();
osm.show();	
}
