#include<iostream>
using namespace std;
template<class t>
  t add(t a,t b)
  {
  	return a+b;
  }
  
int main()
{
	int a,b;
	float c,d;
	cout<<"enter int values: ";
	cin>>a>>b;
	cout<<" enter float values: ";
	cin>>c>>d;
	cout<<"addition of int values is : "<<add(a,b)<<"\n";
	cout<<"addition of float values is : "<<add(c,d);
	return 0; 
}
