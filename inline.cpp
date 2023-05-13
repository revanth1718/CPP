#include<iostream>
using namespace std;
inline int addition(int,int);
int main()
{
 int a,b;
 cout<<"Enter a and b values";
 cin>>a>>b;
 cout<<"addition is ="<<addition(a,b);
 return 0;
}
inline int addition(int a,int b)
{
 return a+b;
}

