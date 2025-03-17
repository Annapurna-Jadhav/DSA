#include <iostream>
#include <deque>
using namespace std;

void explainDeque() {
    deque<int> dq;

    // Adding elements
    dq.push_back(1);        // Adds 1 to the end
    dq.push_front(2);       // Adds 2 to the front
    dq.emplace_back(3);     // Adds 3 to the end
    dq.emplace_front(4);    // Adds 4 to the front

    // Display the deque
    cout << "Deque after push_back, push_front, emplace_back, and emplace_front: ";
    for (int x : dq) cout << x << " ";
    cout << endl;

    // Removing elements
    dq.pop_back();          // Removes the last element
    dq.pop_front();         // Removes the first element

    // Display the deque
    cout << "Deque after pop_back and pop_front: ";
    for (int x : dq) cout << x << " ";
    cout << endl;

    // Accessing elements
    cout << "First element: " << dq.front() << endl;
    cout << "Last element: " << dq.back() << endl;

    // Inserting elements
    auto it = dq.begin();
    advance(it, 2);         // Move iterator to the third position
    dq.insert(it, 5);       // Insert 5 at the second position

    // Display the deque
    cout << "Deque after insert: ";
    for (int x : dq) cout << x << " ";
    cout << endl;

    // Erasing elements
    it = dq.begin();
    advance(it, 1);         // Move iterator to the second position
    dq.erase(it);           // Erase the element at the second position

    // Display the deque
    cout << "Deque after erase: ";
    for (int x : dq) cout << x << " ";
    cout << endl;

    // Other methods
    dq.push_back(6);
    dq.push_back(7);
    dq.push_back(8);

    cout << "Size of the deque: " << dq.size() << endl;

    dq.clear();             // Clears the deque
    cout << "Size of the deque after clear: " << dq.size() << endl;
}

int main() {
    explainDeque();
    return 0;
}