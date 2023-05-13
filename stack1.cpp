#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> stack1, stack2;
    int n1;
    cout << "Enter the number of elements for stack1: ";
    cin >> n1;

    for (int i = 0; i < n1; i++) {
        int element;
        cout << "Enter element " << i+1 << " for stack1: ";
        cin >> element;
        stack1.push(element);
    }

    int n2;
    cout << "Enter the number of elements for stack2: ";
    cin >> n2;

    for (int i = 0; i < n2; i++) {
        int element;
        cout << "Enter element " << i+1 << " for stack2: ";
        cin >> element;
        stack2.push(element);
    }
    if(stack1.empty())
    cout<<"stack1 is empty"<<endl;
    else
    cout<<"stack1 is not empty"<<endl;
     if(stack2.empty())
	 cout<<"stack2 is empty"<<endl;
	 else
	 cout<<"stack2 is not empty"<<endl;
    cout << "Top element of stack1: " << stack1.top() << endl;
    cout << "Top element of stack2: " << stack2.top() << endl;
    stack1.pop();
    stack2.pop();
    cout<<"after popping "<<endl;
    cout << "Size of stack1: " << stack1.size() << endl;
    cout << "Size of stack2: " << stack2.size() << endl;
    return 0;
}

