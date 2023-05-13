#include<iostream>
using namespace std;
class Base
{
 int x=15;
 public:
 virtual void display()
 {
 cout<<"value of x is"<<x<<endl;
 }
};
class Derv:public Base
{
 int y=122;
 public:
 void display()
 {
 cout<<"value of y is"<<y<<endl;
 }
 
};
int main()
{
 Base *b;
 Derv d;
 b=&d;
 b->display();
 return 0;
}
#
