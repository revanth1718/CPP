#include<iostream>
using namespace std;
int main()
{
	int n,i;
	string arr[10];
	cout<<"enter size of array: ";
	cin>>n;
	cout<<"enter objects in array: "<<"\n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"the objects in array are: "<<"\n";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" , ";
	}
	return 0;
}
