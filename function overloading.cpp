#include<iostream>
using namespace std;
void mul(int a,int b)
{
	cout<<a<<" x "<<b<<" = "<<a*b<<endl;
}
void mul(double a, double b)
{
	cout<<a<<" x "<<b<<" = "<<a*b<<endl;
}
void mul(int a, double b)
{
	cout<<a<<" x "<<b<<" = "<<a*b<<endl;
}
void mul(int a,int b,double c)
{
	cout<<a<<" x "<<b<<" x "<<c<<" = "<<a*b*c<<endl;
}
int main()
{
	int a,b;
	double c,d;
    cout<<"enter 2 integers: "<<endl;
    cin>>a>>b;
    cout<<"enter 2 double numbers: "<<endl;
    cin>>c>>d;
    mul(a,b);
    mul(c,d);
    mul(a,c);
    mul(b,d);
    mul(a,b,c);
    mul(a,b,d);
	
}
