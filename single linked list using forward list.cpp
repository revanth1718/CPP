#include <iostream>
#include <forward_list>

using namespace std;

int main() {
    // Create a forward_list of integers
    forward_list<int> list;

    // Insert elements at the front of the list
    list.push_front(10);
    list.push_front(20);
    list.push_front(30);

    // Traverse the list and print its elements
    cout << "List after insertions: ";
    for (auto it = list.begin(); it != list.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Remove the first element of the list
    list.pop_front();

    // Traverse the list and print its elements
    cout << "List after deletion: ";
    for (auto it = list.begin(); it != list.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Insert an element at a specific position in the list
    auto it = list.begin();
    it++; // move to the second element
    list.insert_after(it, 40);

    // Traverse the list and print its elements
    cout << "List after insertion at a specific position: ";
    for (auto it = list.begin(); it != list.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Remove an element at a specific position in the list
    auto it2 = list.begin();
    it2++; // move to the second element
    list.erase_after(it2);

    // Traverse the list and print its elements
    cout << "List after deletion at a specific position: ";
    for (auto it = list.begin(); it != list.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Find an element in the list
    auto it3 = find(list.begin(), list.end(), 20);
    if (it3 != list.end()) {
        cout << "Element 20 found in the list" << endl;
    }
    else {
        cout << "Element 20 not found in the list" << endl;
    }

    return 0;
}
