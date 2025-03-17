#include <iostream>
#include <queue>
using namespace std;

// it's based on FIFO  (FIRST IN FIRST OUT)

void explainQueue() {
    queue<int> q;

    // Adding elements
    q.push(1);        // Adds 1 to the queue
    q.push(2);        // Adds 2 to the queue
    q.push(3);        // Adds 3 to the queue

    // Display the front and back elements
    cout << "Front element after push: " << q.front() << endl;
    cout << "Back element after push: " << q.back() << endl;

    // Removing elements
    q.pop();          // Removes the front element (1)

    // Display the front and back elements
    cout << "Front element after pop: " << q.front() << endl;
    cout << "Back element after pop: " << q.back() << endl;

    // Checking if the queue is empty
    if (q.empty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }

    // Display the size of the queue
    cout << "Size of the queue: " << q.size() << endl;

    // Accessing elements
    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;

    // Clearing the queue
    while (!q.empty()) {
        q.pop();
    }

    // Checking if the queue is empty after clearing
    if (q.empty()) {
        cout << "Queue is empty after clearing" << endl;
    } else {
        cout << "Queue is not empty after clearing" << endl;
    }

    // Using swap
    queue<int> q1, q2;
    q1.push(1);
    q1.push(2);
    q2.push(3);
    q2.push(4);

    cout << "Front element of q1 before swap: " << q1.front() << endl;
    cout << "Front element of q2 before swap: " << q2.front() << endl;

    q1.swap(q2); // Swap the contents of q1 and q2

    cout << "Front element of q1 after swap: " << q1.front() << endl;
    cout << "Front element of q2 after swap: " << q2.front() << endl;
}

int main() {
    explainQueue();
    return 0;
}