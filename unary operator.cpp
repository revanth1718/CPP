#include<iostream>
using namespace std;
class test
{
	int a;
	public:
		test()
		{
			a= 8;
		}
		void display()
		{
			cout<<"number = "<<a<<endl;
		}
		void operator++()
		{
			++a;
		}
};
int main()
{
	test t;
	++t;
	t.display();
	return 0;
}
