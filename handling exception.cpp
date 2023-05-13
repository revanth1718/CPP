#include <iostream>
using namespace std;
int division(int a, int b) 
{
 if( b == 0 ) 
 {
 throw b;
 }
 return (a/b);
}
int main () 
{
 int x,y,z;
 cout<<"Enter x ";
 cin>>x;
 cout<<"Enter y ";
 cin>>y;
 try 
 {
 z = division(x, y);
 cout << z << endl;
 } 
 catch (int x) 
 {
 cout<< "Division by zero exception"<< endl;
 }
 return 0;
}

