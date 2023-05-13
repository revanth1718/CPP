#include<iostream>
using namespace std;
class Sample
{
 int a,b;
 public:
 friend void display(Sample);
};
void display(Sample S)
{
 S.a=10;
 S.b=20;
 cout<<S.a<<endl;
 cout<<S.b;
}
int main()
{
 Sample S;
 display(S);
 return 0;
}

