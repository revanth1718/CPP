#include<iostream>
using namespace std;
class test
{
	int n;
	public:
		test()
		{
			
		}
		test(int a)
		{
			n=a;
		}
		void display()
		{
			cout<<"sum= "<<n;
		}
		test operator+(test t2)
		{
			test t3;
			t3.n=n+t2.n;
			return t3;
		}
};
int main()
{
	test t1(19);
	test t2(81);
	test t3;
	t3=t1+t2;
	t3.display();
	return 0;
}
