#include<iostream>
using namespace std;
class person
{
 private:
 int run;
 string msg;
 public:
 void play()
 {
 	run=50;
 	cout<<"today i scored"<<run<<"runs"<<endl;
	 }
	void osm()
	{
		msg="today i walked 5km ";
		cout<<msg;
	}

};

int main()
{
person don;
don.play();	
don.osm();
}
