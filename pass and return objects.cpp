#include <iostream>
using namespace std;
class Test {
   private:
   int x;
   int y;
   public:
   Test(int x1 = 0, int y1 = 0) {
      x = x1;
      y = y1;
   }
   Test addPoint(Test p) {
      Test temp;
      temp.x = x + p.x;
      temp.y = y + p.y;
      return temp; //returning object
   }
   void display() {
      cout<<"x = "<< x <<"\n";
      cout<<"y = "<< y <<"\n";
   }
  };
int main() {
   Test p1(5,3);
   Test p2(12,6);
   Test p3;
   cout<<"Object 1\n";
   p1.display();
   cout<<"Object 2\n";
   p2.display();
   p3 = p1.addPoint(p2);//passing object
   cout<<"The sum of the two Objects is:\n";
   p3.display();
   return 0;
}
