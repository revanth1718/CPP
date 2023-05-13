#include <iostream>
using namespace std;
class A
{
    public:
    int a = 5;
    int b = 6;
    virtual void add()
    {
     
        cout<<"Sum is:"<<a+b;
    }
   
};

class B : public A
{
    public:
    int x = 36;
    int y = 67;
    void add()
    {
        cout<<"sum is: " <<x+y;
    }
};

int main()
{
    A *bptr;
    B bobj;
    bptr = &bobj;
    bptr -> add();
    return 0;

}
