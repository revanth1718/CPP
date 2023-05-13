#include <iostream>
using namespace std;
class Example{
 static int Number;
 int n;
 public:
 void set_n(){
 n = ++Number;
 }
 void show_n(){
 cout<<"value of n = "<<n<<endl;
 }
 static void show_Number(){
 cout<<"value of Number = "<<Number<<endl;
 }
};
int Example:: Number=99;
int main()
{
 Example example1, example2;
 
 example1.set_n();
 example2.set_n();
 example1.show_n();
 example2.show_n();
 
 example1.show_Number();
 example2.show_Number();
 return 0;
}
