#include<iostream>
using namespace std;
class base
{
	public:
	int v_base;
	void display()
	{
		cout<<v_base<<endl;
	}
};
class derived:public base
{
	public:
		int v_der;
		void display()
		{
			cout<<v_base<<endl;
			cout<<v_der<<endl;
		}
};
int main()
{
	base *bptr;//pointers for base class
	derived dobj;
	bptr=&dobj;
	bptr->v_base=1;
	bptr->display();//calling member functions
	bptr->v_base=10;
	bptr->display();
	derived *dptr;//pointers for derived class
	dptr=&dobj;
	dptr->v_base=11;
	dptr->v_der=111;
	dptr->display();
	bptr->display();
}
