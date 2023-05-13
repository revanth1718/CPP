//swap two integers and two float numbers by using reference variable
#include<iostream>
using namespace std;
void swap(int&a,int&b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
void swap(float&a,float&b)
{
	float temp;
	temp=a;
	a=b;
	b=temp;
}
int main()
{
	int a,b;
	float c,d;
	cout<<"enter two int numbers "<<"\n";
	cin>>a>>b;
	cout<<"enter two float numbers "<<"\n";
	cin>>c>>d;
	cout << "\nbefor swapping." << endl;
    cout << "a = " << a << ", b = " << b <<"c= "<<c<<"d= "<<d<< endl;
	int &ref1=a;
	int &ref2=b;
	float &ref3=c;
	float &ref4=d;
	swap(ref1,ref2);
	swap(ref3,ref4);
    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b<<"c= "<<c<<"d= "<<d << endl;
	return 0;
}
