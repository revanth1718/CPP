#include<iostream>
using namespace std;
class car //class declaration
{
	public:
		car(string name, string model, int year) //constructor
		{
			this->name=name;
			this->model=model;
			this->year=year;
		}
		void display()//method
		{
			cout<<"name: "<<name<< "\n";
			cout<<"model: "<<model<< "\n";
			cout<<"year: "<<year<< "\n"; 
		}
	private:
		string name,model;
		int year;
};
int main() //main function
{
	car mycar("BMW","k8",2020);//class objects accessing
	mycar.display();
	return 0;
}
