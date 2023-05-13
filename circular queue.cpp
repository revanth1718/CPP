#include <iostream>
#include <queue>

using namespace std;

// Circular Queue Class
class CircularQueue {
public:
    int size;
    queue<int> q;

    CircularQueue(int k) {
        size = k;
    }

    // Enqueue Operation
    bool enqueue(int val) {
        if (q.size() < size) {
            q.push(val);
            return true;
        }
        return false;
    }

    // Dequeue Operation
    bool dequeue() {
        if (!q.empty()) {
            q.pop();
            return true;
        }
        return false;
    }

    // Front Operation
    int front() {
        if (!q.empty()) {
            return q.front();
        }
        return -1;
    }

    // Rear Operation
    int rear() {
        if (!q.empty()) {
            return q.back();
        }
        return -1;
    }

    // Is Empty Operation
    bool isEmpty() {
        return q.empty();
    }

    // Is Full Operation
    bool isFull() {
        return q.size() == size;
    }
};

int main() {
    CircularQueue cq(3);
    cout << cq.enqueue(1) << endl;  // true
    cout << cq.enqueue(2) << endl;  // true
    cout << cq.enqueue(3) << endl;  // true
    cout << cq.enqueue(4) << endl;  // false
    cout << cq.front() << endl;     // 1
    cout << cq.rear() << endl;      // 3
    cout << cq.dequeue() << endl;   // true
    cout << cq.enqueue(4) << endl;  // true
    cout << cq.front() << endl;     // 2
    cout << cq.rear() << endl;      // 4
    cout << cq.dequeue() << endl;   // true
    cout << cq.dequeue() << endl;   // true
    cout << cq.dequeue() << endl;   // true
    cout << cq.dequeue() << endl;   // false
    cout << cq.isEmpty() << endl;   // true
    cout << cq.isFull() << endl;    // false

    return 0;
}

