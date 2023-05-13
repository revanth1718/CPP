#include<iostream>
#include<string>
using namespace std;
 //base class
 class Vehicle
 {
 	public:
 		void start()
 		{
 			cout<<"starting engine...."<<"\n";
		 }
 };
 //single inheritance
 class Car:public Vehicle
 {
 	public:
 		void drive(){
 			cout<<"car is running..."<<"\n";
		 }	
 };
 //multilevel inheritance
 class ElectricCar:public Car
 {
 	public:
 		void driving()
 		{
 		cout<<"electric car is running...."<<"\n";	
		 }
 		
 };
 //hierarchical inheritance
 class MotorCycle:public Vehicle
 {
 	public:
 		void riding()
 		{
 		cout<<"motor cycle is running..."<<"\n";	
		 }
 		
 };
 //multiple inheritance
 class Boat//second base class
 {
 	public:
 		void run()
 		{
 		cout<<"boat is running...."<<"\n";	
		 }
 		
 };
 class Ship:public Vehicle, public Boat
 {
 	public:
 		void running()
 		{
 			cout<<"ship is running...."<<"\n";
		 }
 		
 };
 int main()
 {
 	cout<<"single inheritance"<<"\n";
 	Car mycar;
 	mycar.start();
 	mycar.drive();
 	cout<<"multilevel inheritance"<<"\n";
 	ElectricCar ec;
 	ec.start();
 	ec.drive();
 	ec.driving();
 	cout<<"hierarchichal inheritance"<<"\n";
 	Car c;
 	c.start();
 	c.drive();
 	MotorCycle mc;
 	mc.start();
 	mc.riding();
 	cout<<"multiple inheritance"<<"\n";
 	Ship s;
 	s.start();
 	s.run();
 	s.running();
 	return 0;
 }
