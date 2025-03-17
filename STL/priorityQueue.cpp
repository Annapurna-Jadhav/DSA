#include <iostream>
#include <queue>
using namespace std;

void explainPriorityQueue() {
    // Default priority queue (max-heap) for integers
    priority_queue<int> pq;

    // Adding elements
    pq.push(10);        // Adds 10 to the priority queue
    pq.push(20);        // Adds 20 to the priority queue
    pq.push(15);        // Adds 15 to the priority queue

    // Display the top element
    cout << "Top element after push (integers): " << pq.top() << endl;

    // Removing elements
    pq.pop();           // Removes the top element (20)

    // Display the top element
    cout << "Top element after pop (integers): " << pq.top() << endl;

    // Checking if the priority queue is empty
    if (pq.empty()) {
        cout << "Priority queue is empty (integers)" << endl;
    } else {
        cout << "Priority queue is not empty (integers)" << endl;
    }

    // Display the size of the priority queue
    cout << "Size of the priority queue (integers): " << pq.size() << endl;

    // Clearing the priority queue
    while (!pq.empty()) {
        pq.pop();
    }

    // Checking if the priority queue is empty after clearing
    if (pq.empty()) {
        cout << "Priority queue is empty after clearing (integers)" << endl;
    } else {
        cout << "Priority queue is not empty after clearing (integers)" << endl;
    }

    // Using a min-heap for integers
    priority_queue<int, vector<int>, greater<int>> min_pq;
    min_pq.push(10);
    min_pq.push(20);
    min_pq.push(15);

    // Display the top element of the min-heap
    cout << "Top element of min-heap after push (integers): " << min_pq.top() << endl;

    // Removing elements from the min-heap
    min_pq.pop();       // Removes the top element (10)

    // Display the top element of the min-heap
    cout << "Top element of min-heap after pop (integers): " << min_pq.top() << endl;

    // Using a max-heap for characters
    priority_queue<char> char_pq;
    char_pq.push('a');
    char_pq.push('c');
    char_pq.push('b');

    // Display the top element
    cout << "Top element after push (characters): " << char_pq.top() << endl;

    // Removing elements
    char_pq.pop();      // Removes the top element ('c')

    // Display the top element
    cout << "Top element after pop (characters): " << char_pq.top() << endl;

    // Using a min-heap for characters
    priority_queue<char, vector<char>, greater<char>> min_char_pq;
    min_char_pq.push('a');
    min_char_pq.push('c');
    min_char_pq.push('b');

    // Display the top element of the min-heap
    cout << "Top element of min-heap after push (characters): " << min_char_pq.top() << endl;

    // Removing elements from the min-heap
    min_char_pq.pop();  // Removes the top element ('a')

    // Display the top element of the min-heap
    cout << "Top element of min-heap after pop (characters): " << min_char_pq.top() << endl;

    // Using swap
    priority_queue<int> pq1, pq2;
    pq1.push(1);
    pq1.push(2);
    pq2.push(3);
    pq2.push(4);

    cout << "Top element of pq1 before swap: " << pq1.top() << endl;
    cout << "Top element of pq2 before swap: " << pq2.top() << endl;

    pq1.swap(pq2); // Swap the contents of pq1 and pq2

    cout << "Top element of pq1 after swap: " << pq1.top() << endl;
    cout << "Top element of pq2 after swap: " << pq2.top() << endl;
}

int main() {
    explainPriorityQueue();
    return 0;
}