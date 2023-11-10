#include<iostream>
using namespace std;
class A
  {
  public:
  int a,b;
  void add()
  {
     cout<<"enter the number.";
     cin>>a>>b;
     
  }
  friend class B;
};
class B
{
  public:
  int c;
  void fun(A l){
    c=l.a+l.b;
    cout<<c;
  }
};
int main(){
    A obj;
    obj.add();
    B ob;
    ob.fun(obj);
}
