#include <iostream>
using namespace std;

class Example {
public:
    Example() {
        cout << "Constructor called" << endl;
    }
    ~Example() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    cout << "Creating objects..." << endl;
    Example e1;
    Example e2;
    Example e3;
    Example e4;

    return 0;
}

