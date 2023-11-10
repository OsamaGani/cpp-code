#include <iostream>

using namespace std;
class A 
   {
   public:
    virtual void add()=0;
};
class B:public A
 {
 public:
 
   void sum()
   {
       cout<<"mauriya ";
   }
};
class C :public B
{
  public:
    void add()
	{
        cout<<"rshshz";
    }
};
int main()
{
    C i;
    i.sum();
    return 0;
}
